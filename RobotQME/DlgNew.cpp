#include "DlgNew.h"
DlgNew::DlgNew(QWidget *parent):QDialog(parent){
	ui.setupUi(this);
	connect(ui.btn_accept,SIGNAL(clicked()),this,SLOT(onBtnOK()));
	connect(ui.btn_cancel,SIGNAL(clicked()),this,SLOT(onBtnCancel()));
}

DlgNew::~DlgNew(){}
int DlgNew::onBtnOK(){
	m = ui.text_height->text().toInt();
	n = ui.text_width->text().toInt();
	if(m>0&&m<100&&n>0&&n<100){
		accept(); 
	}else{
		QMessageBox msgBox;
		msgBox.setText(GBK::ToUnicode("非法尺寸，创建地图失败！"));
		msgBox.exec();
		reject();
	}
	return 0;
}
int DlgNew::onBtnCancel(){
	reject();
	return 0;
}