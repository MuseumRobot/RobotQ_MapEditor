#include "robotqme.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[]){
	QApplication a(argc, argv);
	RobotQME w;
	w.show();
	return a.exec();
}
