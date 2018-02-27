#include "QtColorPalette.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtColorPalette w;
	w.show();
	return a.exec();
}
