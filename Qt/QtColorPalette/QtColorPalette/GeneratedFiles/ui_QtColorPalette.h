/********************************************************************************
** Form generated from reading UI file 'QtColorPalette.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCOLORPALETTE_H
#define UI_QTCOLORPALETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtColorPaletteClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *RedLabel;
    QLabel *GreenLabel;
    QLabel *BlueLabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *RedLayout;
    QSlider *RedSlider;
    QSpinBox *RedBox;
    QHBoxLayout *GreenLayout;
    QSlider *GreenSlider;
    QSpinBox *GreenBox;
    QHBoxLayout *BlueLayout;
    QSlider *BlueSlider;
    QSpinBox *BlueBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtColorPaletteClass)
    {
        if (QtColorPaletteClass->objectName().isEmpty())
            QtColorPaletteClass->setObjectName(QStringLiteral("QtColorPaletteClass"));
        QtColorPaletteClass->resize(525, 434);
        centralWidget = new QWidget(QtColorPaletteClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        RedLabel = new QLabel(centralWidget);
        RedLabel->setObjectName(QStringLiteral("RedLabel"));

        verticalLayout_2->addWidget(RedLabel);

        GreenLabel = new QLabel(centralWidget);
        GreenLabel->setObjectName(QStringLiteral("GreenLabel"));

        verticalLayout_2->addWidget(GreenLabel);

        BlueLabel = new QLabel(centralWidget);
        BlueLabel->setObjectName(QStringLiteral("BlueLabel"));

        verticalLayout_2->addWidget(BlueLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        RedLayout = new QHBoxLayout();
        RedLayout->setSpacing(6);
        RedLayout->setObjectName(QStringLiteral("RedLayout"));
        RedSlider = new QSlider(centralWidget);
        RedSlider->setObjectName(QStringLiteral("RedSlider"));
        RedSlider->setMaximum(255);
        RedSlider->setOrientation(Qt::Horizontal);

        RedLayout->addWidget(RedSlider);

        RedBox = new QSpinBox(centralWidget);
        RedBox->setObjectName(QStringLiteral("RedBox"));
        RedBox->setMaximum(255);

        RedLayout->addWidget(RedBox);


        verticalLayout->addLayout(RedLayout);

        GreenLayout = new QHBoxLayout();
        GreenLayout->setSpacing(6);
        GreenLayout->setObjectName(QStringLiteral("GreenLayout"));
        GreenSlider = new QSlider(centralWidget);
        GreenSlider->setObjectName(QStringLiteral("GreenSlider"));
        GreenSlider->setMaximum(255);
        GreenSlider->setOrientation(Qt::Horizontal);

        GreenLayout->addWidget(GreenSlider);

        GreenBox = new QSpinBox(centralWidget);
        GreenBox->setObjectName(QStringLiteral("GreenBox"));
        GreenBox->setMaximum(255);

        GreenLayout->addWidget(GreenBox);


        verticalLayout->addLayout(GreenLayout);

        BlueLayout = new QHBoxLayout();
        BlueLayout->setSpacing(6);
        BlueLayout->setObjectName(QStringLiteral("BlueLayout"));
        BlueSlider = new QSlider(centralWidget);
        BlueSlider->setObjectName(QStringLiteral("BlueSlider"));
        BlueSlider->setMaximum(255);
        BlueSlider->setOrientation(Qt::Horizontal);

        BlueLayout->addWidget(BlueSlider);

        BlueBox = new QSpinBox(centralWidget);
        BlueBox->setObjectName(QStringLiteral("BlueBox"));
        BlueBox->setMaximum(255);

        BlueLayout->addWidget(BlueBox);


        verticalLayout->addLayout(BlueLayout);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        QtColorPaletteClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtColorPaletteClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 525, 21));
        QtColorPaletteClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtColorPaletteClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtColorPaletteClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtColorPaletteClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtColorPaletteClass->setStatusBar(statusBar);

        retranslateUi(QtColorPaletteClass);
        QObject::connect(BlueSlider, SIGNAL(valueChanged(int)), BlueBox, SLOT(setValue(int)));
        QObject::connect(BlueBox, SIGNAL(valueChanged(int)), BlueSlider, SLOT(setValue(int)));
        QObject::connect(GreenSlider, SIGNAL(valueChanged(int)), GreenBox, SLOT(setValue(int)));
        QObject::connect(GreenBox, SIGNAL(valueChanged(int)), GreenSlider, SLOT(setValue(int)));
        QObject::connect(RedBox, SIGNAL(valueChanged(int)), RedSlider, SLOT(setValue(int)));
        QObject::connect(RedSlider, SIGNAL(valueChanged(int)), RedBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(QtColorPaletteClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtColorPaletteClass)
    {
        QtColorPaletteClass->setWindowTitle(QApplication::translate("QtColorPaletteClass", "QtColorPalette", nullptr));
        RedLabel->setText(QApplication::translate("QtColorPaletteClass", "Red", nullptr));
        GreenLabel->setText(QApplication::translate("QtColorPaletteClass", "Green", nullptr));
        BlueLabel->setText(QApplication::translate("QtColorPaletteClass", "Blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtColorPaletteClass: public Ui_QtColorPaletteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCOLORPALETTE_H
