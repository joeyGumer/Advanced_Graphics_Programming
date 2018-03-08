#pragma once

#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include "ui_AGProject1.h"

class AG1graphic : public QFrame
{
	Q_OBJECT

public:
	AG1graphic(QWidget *parent = Q_NULLPTR);

	void PaintGraph(QPainter& p);

	void SetAColor(const QColor& a);
	void SetBColor(const QColor& b);

	public slots:

	void SetAValue(int a);
	void SetBValue(int b);

	void ChangeResolution(int i);
	void SaveImage();

protected:
	void paintEvent(QPaintEvent *event);

private:
	int a_height = 50;
	int b_height = 50;

	int res_w = 640;
	int res_h = 480;

	QColor a_color = Qt::blue;
	QColor b_color = Qt::black;

};