#ifndef DLGNEW_H
#define DLGNEW_H

#include <QDialog>
#include <QMessageBox>
#include <GBK.h>
#include "ui_DlgNew.h"

class DlgNew : public QDialog{
	Q_OBJECT

public:
	DlgNew(QWidget *parent = 0);
	~DlgNew();

private:
	Ui::DlgNew ui;

public:
	int m,n;

private slots:
	int onBtnOK();
	int onBtnCancel();
};

#endif // DLGNEW_H
