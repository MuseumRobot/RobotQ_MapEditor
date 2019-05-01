#pragma once
#include <QtGui/QMainWindow>
#include <QPainter>
#include <QTimer>
#include <QLabel>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include "ui_robotqme.h"
#include <GBK.h>
#include "Map.h"
#include "DlgNew.h"
#include "Point.h"
#include <list>
#include "AStar.h"
class RobotQME : public QMainWindow{
	Q_OBJECT

public:
	RobotQME(QWidget *parent = 0, Qt::WFlags flags = 0);
	~RobotQME();
	void paintEvent(QPaintEvent *event);
	void timerEvent(QTimerEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
private:
	Ui::RobotQMEClass ui;
	int x0,y0,w0,h0;	//��ͼ���λ�����С
	int m_timerId,m_timerRefreshStatusBar;
	Map* m_map;
	std::list<Point> m_result;
	QPoint m_mousePos;
	bool isMousePressed;

private slots:
	//�ļ�����
	void OnBtnNew();
	void OnBtnOpen();
	void OnBtnClose();
	void OnBtnSave();
	//�༭��ͼ
	void OnBtnSetObstacle();
	void OnBtnClearObstacle();
	void OnBtnSetDesert();
	void OnBtnSetOcean();
	void OnBtnClearTerrian();
	void OnBtnSetStart();
	void OnBtnSetEnd();
	void OnBtnResetFlag();
	//����
	void OnBtnRun();
};

