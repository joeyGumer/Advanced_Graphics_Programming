#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtColorChangeExercise.h"

class QtColorChangeExercise : public QMainWindow
{
	Q_OBJECT

public:
	QtColorChangeExercise(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtColorChangeExerciseClass ui;
};
