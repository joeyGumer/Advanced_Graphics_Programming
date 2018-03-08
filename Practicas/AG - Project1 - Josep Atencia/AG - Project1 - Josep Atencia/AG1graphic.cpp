#include "AG1graphic.h"
#include "qpainter.h"
#include <QFileDialog>

AG1graphic::AG1graphic(QWidget *parent):QFrame(parent)
{
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
	setAutoFillBackground(true);
	setFrameShadow(QFrame::Sunken);
	setStyleSheet("background-color:white;");
}

void AG1graphic::paintEvent(QPaintEvent *event)
{

	QPainter painter(this);
	painter.begin(this);
	PaintGraph(painter);
	painter.end();
}

void AG1graphic::PaintGraph(QPainter& painter)
{
	QRect barA;
	QRect barB;

	int bottom_line = 325;
	int left_line = 50;
	int max_height = 250;



	//Background
	painter.setPen(Qt::white);
	painter.setBrush(Qt::white);
	painter.drawRect(0,0, res_w, res_h);

	painter.setPen(Qt::black);
	//Lines
	painter.drawLine(left_line - 5, bottom_line, left_line + 250, bottom_line);//Horizontal Line
	painter.drawLine(left_line, bottom_line + 5, left_line, bottom_line - 275);//Vertical Line
	painter.drawLine(left_line - 5, bottom_line - max_height, left_line, bottom_line - max_height);

	//Labels
	painter.setFont(QFont("Arial", 10));

	painter.drawText(left_line - 20, bottom_line, "0");
	painter.drawText(left_line - 30, bottom_line - 250, "100");

	painter.drawText(124, bottom_line + 15, "A");
	painter.drawText(224, bottom_line + 15, "B");

	//Bars
	painter.setBrush(a_color);
	barA.setRect(100, bottom_line - a_height, 50, a_height);
	painter.drawRect(barA);

	painter.setBrush(b_color);
	barB.setRect(200, bottom_line - b_height, 50, b_height);
	painter.drawRect(barB);
}

void AG1graphic::SetAValue(int a)
{
	a_value = a;
    a_height = int(float(250) / 100 * a_value);

	repaint();
	
}
void AG1graphic::SetBValue(int b)
{
	b_value = b;
	b_height = int(float(250) / 100 * b_value);

	repaint();
}

void AG1graphic::SetAColor(QColor& a)
{
	a_color = a;

	repaint();
}
void AG1graphic::SetBColor(QColor& b)
{
	b_color = b;

	repaint();
}

void AG1graphic::ChangeResolution(int i)
{
	switch (i)
	{
	case 0:
		res_w = 640; res_h = 480;
		break;
	case 1:
		res_w = 800; res_h = 600;
		break;
	case 2:
		res_w = 1024; res_h = 760;
		break;
	}

}

void AG1graphic::SaveImage()
{
	QString imagePath = QFileDialog::getSaveFileName(
		this,
		tr("Save File"),
		"",
		tr("JPEG (*.jpg *.jpeg);;PNG (*.png)")
		);

	QImage image(res_w, res_h, QImage::Format_ARGB32);

	QPainter painter(this);
	painter.begin(&image);
	PaintGraph(painter);
	painter.end();

	image.save(imagePath);

}

