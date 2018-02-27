#include "QtCutPaste.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtCutPaste w;
	w.show();
	return a.exec();
}
