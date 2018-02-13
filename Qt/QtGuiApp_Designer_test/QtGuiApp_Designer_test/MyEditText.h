#pragma once

#include <QTextEdit>

class MyTextEdit : public QTextEdit
{
	Q_OBJECT;


	public:

	MyTextEdit(QWidget* parent);
	~MyTextEdit();

	public slots:
	void CopyCut();
	

private:
	//Ui::MyTextEdit edit_text;
};