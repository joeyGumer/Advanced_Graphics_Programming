#include "QtHoursMinutesDials.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtHoursMinutesDials w;
	w.show();
	return a.exec();
}
