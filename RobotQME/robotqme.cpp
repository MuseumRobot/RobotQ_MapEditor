#include "robotqme.h"
#include <QDebug>
RobotQME::RobotQME(QWidget *parent, Qt::WFlags flags):QMainWindow(parent, flags){
	ui.setupUi(this);
	m_map = NULL;
	m_timerId = startTimer(200);
	m_timerRefreshStatusBar = startTimer(5000);
	ui.statusBar->showMessage(GBK::ToUnicode("就绪"));
	isMousePressed = false;
	x0=0,y0=ui.toolBar->height(),w0=this->width(),h0=this->height()-ui.toolBar->height()-ui.statusBar->height();
	connect(ui.action_new,SIGNAL(triggered()),this,SLOT(OnBtnNew()));
	connect(ui.action_open,SIGNAL(triggered()),this,SLOT(OnBtnOpen()));
	connect(ui.action_close,SIGNAL(triggered()),this,SLOT(OnBtnClose()));
	connect(ui.action_save,SIGNAL(triggered()),this,SLOT(OnBtnSave()));
	connect(ui.action_setobstacle,SIGNAL(triggered()),this,SLOT(OnBtnSetObstacle()));
	connect(ui.action_clearobstacle,SIGNAL(triggered()),this,SLOT(OnBtnClearObstacle()));
	connect(ui.action_setocean,SIGNAL(triggered()),this,SLOT(OnBtnSetOcean()));
	connect(ui.action_setdesert,SIGNAL(triggered()),this,SLOT(OnBtnSetDesert()));
	connect(ui.action_clearterrain,SIGNAL(triggered()),this,SLOT(OnBtnClearTerrian()));
	connect(ui.action_setstart,SIGNAL(triggered()),this,SLOT(OnBtnSetStart()));
	connect(ui.action_setend,SIGNAL(triggered()),this,SLOT(OnBtnSetEnd()));
	connect(ui.action_resetflag,SIGNAL(triggered()),this,SLOT(OnBtnResetFlag()));
	connect(ui.action_run,SIGNAL(triggered()),this,SLOT(OnBtnRun()));
}
RobotQME::~RobotQME(){}
void RobotQME::paintEvent(QPaintEvent *event){
	QPainter painter(this);
	painter.setBrush(QColor(200,200,200));
	painter.drawRect(x0,y0,w0,h0);
	if(m_map != NULL){
		int w = w0/m_map->N;
		int h = h0/m_map->M;
		for(int i=0;i<m_map->M;i++){
			for(int j=0;j<m_map->N;j++){
				QRect r(x0+w*j,y0+h*i,w,h);
				painter.setBrush(QColor(220,220,220));
				painter.drawRect(r);
				if(m_map->m_maze[i][j] == 1){
					//painter.drawImage(QRect(x0+w*j,y0+h*i,w,h),QImage("Resources/obstacle.png"));
					painter.setBrush(QColor(100,100,100));
					painter.drawRect(r);
				}else{	//无障碍
					if(m_map->m_weight[i][j] == 2){	//水路
						painter.setBrush(QColor(30,144,255));
						painter.drawRect(r);
					}else if(m_map->m_weight[i][j] == 4){	//沙漠
						painter.setBrush(QColor(255,150,40));
						painter.drawRect(r);
					}
				}
			}
		}
		if(m_map->x_start>-1&&m_map->y_start>-1){
			painter.drawImage(QRect(x0+w*m_map->y_start,y0+h*m_map->x_start,w,h),QImage("Resources/start.png"));
		}
		if(m_map->x_end>-1&&m_map->y_end>-1){
			painter.drawImage(QRect(x0+w*m_map->y_end,y0+h*m_map->x_end,w,h),QImage("Resources/end.png"));
		}
		if(ui.action_run->isChecked()){
			for(std::list<Point>::iterator iter = m_result.begin(); iter!= m_result.end(); iter++){
				painter.drawImage(QRect(x0+w*iter->y,y0+h*iter->x,w,h),QImage("Resources/foot.png"));
			}
		}
	}else{
		//QPixmap bg("Resources/bg.jpg");
		//painter.drawPixmap(x0,y0,w0,h0,bg);
		painter.setPen(Qt::blue);
		painter.setFont(QFont("Arial", 40));
		painter.drawText(rect(), Qt::AlignCenter, GBK::ToUnicode("地图编辑器A*"));
	}
}
void RobotQME::timerEvent(QTimerEvent *event){
	if(event->timerId() == m_timerId){
		x0=0,y0=ui.toolBar->height(),w0=this->width(),h0=this->height()-ui.toolBar->height()-ui.statusBar->height();
		update();
	}else if(event->timerId() == m_timerRefreshStatusBar){
		ui.statusBar->showMessage("");
	}
}
void RobotQME::mouseMoveEvent(QMouseEvent *event){
	if(m_map != NULL){
		if(ui.action_setobstacle->isChecked() || ui.action_clearobstacle->isChecked() || ui.action_setdesert->isChecked() || ui.action_setocean->isChecked()
			|| ui.action_clearterrain->isChecked() || ui.action_setstart->isChecked() || ui.action_setend->isChecked()){
			m_mousePos = event->pos();
			QString currentPos = GBK::ToUnicode("当前位置(") + 
				QString::number((m_mousePos.y()-y0)/(h0/m_map->M)) + "," + 
				QString::number((m_mousePos.x()-x0)/(w0/m_map->N)) + ")";
			ui.statusBar->showMessage(currentPos);
			//拖拽绘画
			if(isMousePressed){
				int x = (m_mousePos.y()-y0)/(h0/m_map->M);
				int y = (m_mousePos.x()-x0)/(w0/m_map->N);
				if(ui.action_setobstacle->isChecked()){
					m_map->m_maze[x][y] = 1;
					m_map->m_weight[x][y] = 0;	//设置障碍将会把地形去除
				}
				if(ui.action_clearobstacle->isChecked()){
					m_map->m_maze[x][y] = 0;
				}
				if(ui.action_setdesert->isChecked()){
					m_map->m_weight[x][y] = 4;
				}
				if(ui.action_setocean->isChecked()){
					m_map->m_weight[x][y] = 2;
				}
				if(ui.action_clearterrain->isChecked()){
					m_map->m_weight[x][y] = 0;
				}
			}
		}
	}

}
void RobotQME::mousePressEvent(QMouseEvent *event){
	if(m_map != NULL){
		isMousePressed = true;
		m_mousePos = event->pos();
		int x = (m_mousePos.y()-y0)/(h0/m_map->M);
		int y = (m_mousePos.x()-x0)/(w0/m_map->N);
		if(ui.action_setobstacle->isChecked()){
			m_map->m_maze[x][y] = 1;
			m_map->m_weight[x][y] = 0;	//设置障碍将会把地形去除
		}
		if(ui.action_clearobstacle->isChecked()){
			m_map->m_maze[x][y] = 0;
		}
		if(ui.action_setdesert->isChecked()){
			m_map->m_weight[x][y] = 4;
		}
		if(ui.action_setocean->isChecked()){
			m_map->m_weight[x][y] = 2;
		}
		if(ui.action_clearterrain->isChecked()){
			m_map->m_weight[x][y] = 0;
		}
		if(ui.action_setstart->isChecked()){
			m_map->x_start = x;
			m_map->y_start = y;
		}
		if(ui.action_setend->isChecked()){
			m_map->x_end = x;
			m_map->y_end = y;
		}
	}
}
void RobotQME::mouseReleaseEvent(QMouseEvent *event){
	isMousePressed = false;
}
void RobotQME::OnBtnNew(){
	DlgNew w(this);
	if(QDialog::Accepted == w.exec()){
		if(m_map != NULL){
			delete m_map;
			m_map = NULL;
		}
		m_map = new Map(w.m,w.n);
	}
}
void RobotQME::OnBtnOpen(){
	OnBtnClose();
	QString filepath=QFileDialog::getOpenFileName(this,GBK::ToUnicode("选择文件"));
	if(filepath.length()>0){
		string gbk_name=GBK::FromUnicode(filepath);
		//打开文件，读取内容
		FILE* fp=fopen(gbk_name.c_str(),"rb");
		//文件的大小
		int M,N;
		fread(&M,sizeof(int),1,fp);
		fread(&N,sizeof(int),1,fp);
		m_map = new Map(M,N);
		for(int i=0;i<M;i++){
			for(int j=0;j<N;j++){
				fread(&(m_map->m_maze[i][j]),sizeof(int),1,fp);
				fread(&(m_map->m_weight[i][j]),sizeof(int),1,fp);
			}
		}
		fclose(fp);	//关闭文件
	}
}
void RobotQME::OnBtnClose(){
	delete m_map;
	m_map = NULL;
	ui.action_setobstacle->setChecked(false);
	ui.action_clearobstacle->setChecked(false);
	ui.action_setdesert->setChecked(false);
	ui.action_setocean->setChecked(false);
	ui.action_clearterrain->setChecked(false);
	ui.action_setstart->setChecked(false);
	ui.action_setend->setChecked(false);
	ui.action_run->setChecked(false);
	ui.statusBar->showMessage(GBK::ToUnicode("就绪"));
}
void RobotQME::OnBtnSave(){
	if(m_map!=NULL){
		QString Filename = GBK::ToUnicode("我的地图");
		QString filepath=QFileDialog::getSaveFileName(this,GBK::ToUnicode("保存地图"),Filename,tr("Map (*.map)"));
		if(filepath.length()>0){
			string gbk_filename=GBK::FromUnicode(filepath);
			//打开文件
			FILE* fp = fopen(gbk_filename.c_str(),"wb");
			fwrite(&m_map->M,sizeof(int),1,fp);
			fwrite(&m_map->N,sizeof(int),1,fp);
			for(int i=0;i<m_map->M;i++){
				for(int j=0;j<m_map->N;j++){
					fwrite(&(m_map->m_maze[i][j]),sizeof(int),1,fp);
					fwrite(&(m_map->m_weight[i][j]),sizeof(int),1,fp);
				}
			}
			fclose(fp);
		}
	}else{
		QMessageBox msgBox;
		msgBox.setText(GBK::ToUnicode("尚未打开地图，无法保存！"));
		msgBox.exec();
	}
}
void RobotQME::OnBtnSetObstacle(){
	ui.action_clearobstacle->setChecked(false);
	ui.action_setdesert->setChecked(false);
	ui.action_setocean->setChecked(false);
	ui.action_clearterrain->setChecked(false);
	ui.action_setstart->setChecked(false);
	ui.action_setend->setChecked(false);
	ui.action_run->setChecked(false);
}
void RobotQME::OnBtnClearObstacle(){
	ui.action_setobstacle->setChecked(false);
	ui.action_setdesert->setChecked(false);
	ui.action_setocean->setChecked(false);
	ui.action_clearterrain->setChecked(false);
	ui.action_setstart->setChecked(false);
	ui.action_setend->setChecked(false);
	ui.action_run->setChecked(false);
}
void RobotQME::OnBtnSetDesert(){
	ui.action_setobstacle->setChecked(false);
	ui.action_clearobstacle->setChecked(false);
	ui.action_setocean->setChecked(false);
	ui.action_clearterrain->setChecked(false);
	ui.action_setstart->setChecked(false);
	ui.action_setend->setChecked(false);
	ui.action_run->setChecked(false);
}
void RobotQME::OnBtnSetOcean(){
	ui.action_setobstacle->setChecked(false);
	ui.action_clearobstacle->setChecked(false);
	ui.action_setdesert->setChecked(false);
	ui.action_clearterrain->setChecked(false);
	ui.action_setstart->setChecked(false);
	ui.action_setend->setChecked(false);
	ui.action_run->setChecked(false);
}
void RobotQME::OnBtnClearTerrian(){
	ui.action_setobstacle->setChecked(false);
	ui.action_clearobstacle->setChecked(false);
	ui.action_setdesert->setChecked(false);
	ui.action_setocean->setChecked(false);
	ui.action_setstart->setChecked(false);
	ui.action_setend->setChecked(false);
	ui.action_run->setChecked(false);
}
void RobotQME::OnBtnSetStart(){
	ui.action_setobstacle->setChecked(false);
	ui.action_clearobstacle->setChecked(false);
	ui.action_setdesert->setChecked(false);
	ui.action_setocean->setChecked(false);
	ui.action_clearterrain->setChecked(false);
	ui.action_setend->setChecked(false);
	ui.action_run->setChecked(false);
}
void RobotQME::OnBtnSetEnd(){
	ui.action_setobstacle->setChecked(false);
	ui.action_clearobstacle->setChecked(false);
	ui.action_setdesert->setChecked(false);
	ui.action_setocean->setChecked(false);
	ui.action_clearterrain->setChecked(false);
	ui.action_setstart->setChecked(false);
	ui.action_run->setChecked(false);
}
void RobotQME::OnBtnResetFlag(){
	if(m_map != NULL){
		m_map->x_start = m_map->y_start = m_map->x_end = m_map->y_end = -1;
	}
}
void RobotQME::OnBtnRun(){
	if(ui.action_run->isChecked()){
		if(m_map->x_start>-1 && m_map->y_start>-1 && m_map->x_end>-1 && m_map->y_end>-1){
			ui.action_setobstacle->setChecked(false);
			ui.action_clearobstacle->setChecked(false);
			ui.action_setdesert->setChecked(false);
			ui.action_setocean->setChecked(false);
			ui.action_clearterrain->setChecked(false);
			ui.action_setstart->setChecked(false);
			ui.action_setend->setChecked(false);
			AStar a;
			a.Init(m_map);
			a.Calculate(true);
			m_result = a.GetResultList();
		}else{
			QMessageBox msgBox;
			msgBox.setText(GBK::ToUnicode("尚未设置起止点，无法运行！"));
			msgBox.exec();
		}
	}
}