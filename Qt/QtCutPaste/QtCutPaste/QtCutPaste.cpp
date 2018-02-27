#include "QtCutPaste.h"

QtCutPaste::QtCutPaste(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.CutButton, SIGNAL(clicked()), this, SLOT(SaveText()));
	connect(ui.PasteButton, SIGNAL(clicked()), this, SLOT(PasteText()));
}



void QtCutPaste::SaveText()
{
	text_buffer = ui.TextEdit->toPlainText();
}

void QtCutPaste::PasteText()
{
	ui.PasteText->setText(text_buffer);
}