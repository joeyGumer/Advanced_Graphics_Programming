#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCutPaste.h"

class QtCutPaste : public QMainWindow
{
	Q_OBJECT

public:
	QtCutPaste(QWidget *parent = Q_NULLPTR);

public slots:

	void SaveText();
	void PasteText();

private:
	Ui::QtCutPasteClass ui;
	
	QString text_buffer;
};
