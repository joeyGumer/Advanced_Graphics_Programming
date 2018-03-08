#include "AGProject1.h"
#include <QColorDialog>

AGProject1::AGProject1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//Create code widgets
	graphic = new AG1graphic(this);
	ui.graph_layout->addWidget(graphic);

	color_dialog = new QColorDialog(this);
	

	//Connect widgets
	connect(ui.bar_A_box, SIGNAL(valueChanged(int)), graphic, SLOT(SetAValue(int)));
	connect(ui.bar_B_box, SIGNAL(valueChanged(int)), graphic, SLOT(SetBValue(int)));

	connect(ui.A_color_button, SIGNAL(clicked()), this, SLOT(openAdialog()));
	connect(ui.B_color_button, SIGNAL(clicked()), this, SLOT(openBdialog()));

	connect(ui.resolution_box, SIGNAL(currentIndexChanged(int)), graphic, SLOT(ChangeResolution(int)));
	connect(ui.save_button, SIGNAL(clicked()), graphic, SLOT(SaveImage()));


	//Init widgets states
	ui.bar_A_box->setValue(50);
	ui.bar_B_box->setValue(70);

	QColor col = Qt::blue;
	SetColor(col, 0);

	col = Qt::red;
	SetColor(col, 1);

	ui.resolution_box->setCurrentIndex(0);

}

//Color change methods------------------------
void AGProject1::openAdialog()
{
	QColor col = Qt::white;
	col = color_dialog->getColor(Qt::white, nullptr);

	SetColor(col,0);
}


void AGProject1::openBdialog()
{
	QColor col = Qt::white;
	col = color_dialog->getColor(Qt::white, nullptr);

	SetColor(col,1);
}

void AGProject1::SetColor(QColor& col, int button)
{
	if (col.isValid())
	{
		QString qss = QString("background-color: %1").arg(col.name());

		if (button == 0)
		{
			graphic->SetAColor(col);
			ui.A_color_button->setStyleSheet(qss);
		}
		else
		{
			ui.B_color_button->setStyleSheet(qss);
			graphic->SetBColor(col);
		}
			
	}
}
//--------------------------