#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AGProject1.h"
#include "AG1graphic.h"

class QColorDialog;
class AGProject1 : public QMainWindow
{
	Q_OBJECT

public:
	AGProject1(QWidget *parent = Q_NULLPTR);

	public slots:
	void openAdialog();
	void openBdialog();

private:
	void SetColor(QColor& c, int button);


private:
	Ui::AGProject1Class ui;

	QColorDialog* color_dialog;
	AG1graphic* graphic = nullptr;
};
