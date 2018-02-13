#include "QtColorChangeExercise.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtColorChangeExercise w;
	w.show();
	return a.exec();
}
