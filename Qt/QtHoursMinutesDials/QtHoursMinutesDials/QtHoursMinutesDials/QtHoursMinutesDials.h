#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtHoursMinutesDials.h"

class QtHoursMinutesDials : public QMainWindow
{
	Q_OBJECT

public:
	QtHoursMinutesDials(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtHoursMinutesDialsClass ui;
};
