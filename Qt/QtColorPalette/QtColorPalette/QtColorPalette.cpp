#include "QtColorPalette.h"
#include <qpalette.h>

QtColorPalette::QtColorPalette(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(ui.RedSlider, SIGNAL(valueChanged(int)), this, SLOT(SetRed(int)));
	connect(ui.GreenSlider, SIGNAL(valueChanged(int)), this, SLOT(SetGreen(int)));
	connect(ui.BlueSlider, SIGNAL(valueChanged(int)), this, SLOT(SetBlue(int)));

	SetColor();
}

void QtColorPalette::SetColor()
{
	QPalette pal = QPalette();
	pal.setColor(QPalette::Background, QColor(red, green, blue));

	ui.frame->setAutoFillBackground(true);
	ui.frame->setPalette(pal);
	ui.frame->show();

}

void QtColorPalette::SetRed(int r)
{
	red = r;

	SetColor();
}
void QtColorPalette::SetGreen(int g)
{
	green = g;
	
	SetColor();
}
void QtColorPalette::SetBlue(int b)
{
	blue = b;

	SetColor();
}
