/********************************************************************************
** Form generated from reading UI file 'QtGuiApp_Designer_test.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPP_DESIGNER_TEST_H
#define UI_QTGUIAPP_DESIGNER_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApp_Designer_testClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApp_Designer_testClass)
    {
        if (QtGuiApp_Designer_testClass->objectName().isEmpty())
            QtGuiApp_Designer_testClass->setObjectName(QStringLiteral("QtGuiApp_Designer_testClass"));
        QtGuiApp_Designer_testClass->resize(600, 400);
        menuBar = new QMenuBar(QtGuiApp_Designer_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGuiApp_Designer_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApp_Designer_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApp_Designer_testClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGuiApp_Designer_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGuiApp_Designer_testClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiApp_Designer_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApp_Designer_testClass->setStatusBar(statusBar);

        retranslateUi(QtGuiApp_Designer_testClass);

        QMetaObject::connectSlotsByName(QtGuiApp_Designer_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApp_Designer_testClass)
    {
        QtGuiApp_Designer_testClass->setWindowTitle(QApplication::translate("QtGuiApp_Designer_testClass", "QtGuiApp_Designer_test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApp_Designer_testClass: public Ui_QtGuiApp_Designer_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPP_DESIGNER_TEST_H
