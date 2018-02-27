#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtColorPalette.h"

class QtColorPalette : public QMainWindow
{
	Q_OBJECT

public:
	QtColorPalette(QWidget *parent = Q_NULLPTR);

	

	public slots:

	
	void SetRed(int r);
	void SetGreen(int g);
	void SetBlue(int b);

	private slots:

private:
	void SetColor();

private:
	Ui::QtColorPaletteClass ui;

	int red = 0;
	int green = 0;
	int blue = 0;


};
