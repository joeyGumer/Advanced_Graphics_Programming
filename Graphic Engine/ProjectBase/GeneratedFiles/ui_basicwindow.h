/********************************************************************************
** Form generated from reading UI file 'basicwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICWINDOW_H
#define UI_BASICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *qUndockButton;
    QFrame *qGLFrame;

    void setupUi(QWidget *BasicWindow)
    {
        if (BasicWindow->objectName().isEmpty())
            BasicWindow->setObjectName(QStringLiteral("BasicWindow"));
        BasicWindow->resize(400, 300);
        gridLayout = new QGridLayout(BasicWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qUndockButton = new QPushButton(BasicWindow);
        qUndockButton->setObjectName(QStringLiteral("qUndockButton"));

        gridLayout->addWidget(qUndockButton, 1, 0, 1, 1);

        qGLFrame = new QFrame(BasicWindow);
        qGLFrame->setObjectName(QStringLiteral("qGLFrame"));
        qGLFrame->setFrameShape(QFrame::StyledPanel);
        qGLFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(qGLFrame, 0, 0, 1, 1);


        retranslateUi(BasicWindow);

        QMetaObject::connectSlotsByName(BasicWindow);
    } // setupUi

    void retranslateUi(QWidget *BasicWindow)
    {
        BasicWindow->setWindowTitle(QApplication::translate("BasicWindow", "Basic GL", nullptr));
        qUndockButton->setText(QApplication::translate("BasicWindow", "Undock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BasicWindow: public Ui_BasicWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICWINDOW_H
