#include "MyEditText.h"


MyTextEdit::MyTextEdit(QWidget* parent)
{

}
MyTextEdit::~MyTextEdit()
{

}

//public slots:
void MyTextEdit::CopyCut()
{
	selectAll();
	cut();
}