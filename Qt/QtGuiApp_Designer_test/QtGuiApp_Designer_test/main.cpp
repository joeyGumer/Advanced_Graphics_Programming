#include "QtGuiApp_Designer_test.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApp_Designer_test w;
	w.show();
	return a.exec();
}
