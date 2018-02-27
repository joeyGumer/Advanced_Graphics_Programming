#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AGProject1.h"

class AGProject1 : public QMainWindow
{
	Q_OBJECT

public:
	AGProject1(QWidget *parent = Q_NULLPTR);

private:
	Ui::AGProject1Class ui;
};
