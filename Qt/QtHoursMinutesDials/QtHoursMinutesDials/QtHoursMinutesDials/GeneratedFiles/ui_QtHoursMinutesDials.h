/********************************************************************************
** Form generated from reading UI file 'QtHoursMinutesDials.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHOURSMINUTESDIALS_H
#define UI_QTHOURSMINUTESDIALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtHoursMinutesDialsClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *HourLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *MinutesLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLCDNumber *HoursNumber;
    QLCDNumber *MinutesNumber;
    QHBoxLayout *horizontalLayout_2;
    QDial *HoursDial;
    QDial *MinutesDial;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *QuitButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtHoursMinutesDialsClass)
    {
        if (QtHoursMinutesDialsClass->objectName().isEmpty())
            QtHoursMinutesDialsClass->setObjectName(QStringLiteral("QtHoursMinutesDialsClass"));
        QtHoursMinutesDialsClass->resize(350, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtHoursMinutesDialsClass->sizePolicy().hasHeightForWidth());
        QtHoursMinutesDialsClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(QtHoursMinutesDialsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        HourLabel = new QLabel(centralWidget);
        HourLabel->setObjectName(QStringLiteral("HourLabel"));

        horizontalLayout_5->addWidget(HourLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        MinutesLabel = new QLabel(centralWidget);
        MinutesLabel->setObjectName(QStringLiteral("MinutesLabel"));

        horizontalLayout_6->addWidget(MinutesLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        HoursNumber = new QLCDNumber(centralWidget);
        HoursNumber->setObjectName(QStringLiteral("HoursNumber"));

        horizontalLayout_3->addWidget(HoursNumber);

        MinutesNumber = new QLCDNumber(centralWidget);
        MinutesNumber->setObjectName(QStringLiteral("MinutesNumber"));

        horizontalLayout_3->addWidget(MinutesNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        HoursDial = new QDial(centralWidget);
        HoursDial->setObjectName(QStringLiteral("HoursDial"));
        HoursDial->setMaximum(24);

        horizontalLayout_2->addWidget(HoursDial);

        MinutesDial = new QDial(centralWidget);
        MinutesDial->setObjectName(QStringLiteral("MinutesDial"));
        MinutesDial->setMaximum(60);

        horizontalLayout_2->addWidget(MinutesDial);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        QuitButton = new QPushButton(centralWidget);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));

        horizontalLayout->addWidget(QuitButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QtHoursMinutesDialsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtHoursMinutesDialsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 350, 21));
        QtHoursMinutesDialsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtHoursMinutesDialsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtHoursMinutesDialsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtHoursMinutesDialsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtHoursMinutesDialsClass->setStatusBar(statusBar);

        retranslateUi(QtHoursMinutesDialsClass);
        QObject::connect(HoursDial, SIGNAL(valueChanged(int)), HoursNumber, SLOT(display(int)));
        QObject::connect(MinutesDial, SIGNAL(valueChanged(int)), MinutesNumber, SLOT(display(int)));
        QObject::connect(QuitButton, SIGNAL(clicked()), QtHoursMinutesDialsClass, SLOT(close()));

        QMetaObject::connectSlotsByName(QtHoursMinutesDialsClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtHoursMinutesDialsClass)
    {
        QtHoursMinutesDialsClass->setWindowTitle(QApplication::translate("QtHoursMinutesDialsClass", "QtHoursMinutesDials", nullptr));
        HourLabel->setText(QApplication::translate("QtHoursMinutesDialsClass", "Hours", nullptr));
        MinutesLabel->setText(QApplication::translate("QtHoursMinutesDialsClass", "Minutes", nullptr));
        QuitButton->setText(QApplication::translate("QtHoursMinutesDialsClass", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtHoursMinutesDialsClass: public Ui_QtHoursMinutesDialsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHOURSMINUTESDIALS_H
