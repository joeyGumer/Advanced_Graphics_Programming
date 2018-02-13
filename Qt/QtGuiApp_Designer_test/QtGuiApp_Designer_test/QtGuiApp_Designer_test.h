#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApp_Designer_test.h"

class QtGuiApp_Designer_test : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApp_Designer_test(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApp_Designer_testClass ui;
};
