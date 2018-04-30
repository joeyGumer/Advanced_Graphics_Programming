/********************************************************************************
** Form generated from reading UI file 'phongwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONGWINDOW_H
#define UI_PHONGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhongWindow
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *qGLFrame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *qLoadModelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *qUndockButton;

    void setupUi(QWidget *PhongWindow)
    {
        if (PhongWindow->objectName().isEmpty())
            PhongWindow->setObjectName(QStringLiteral("PhongWindow"));
        PhongWindow->resize(619, 493);
        gridLayout_3 = new QGridLayout(PhongWindow);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        qGLFrame = new QFrame(PhongWindow);
        qGLFrame->setObjectName(QStringLiteral("qGLFrame"));
        qGLFrame->setMinimumSize(QSize(400, 400));
        qGLFrame->setFrameShape(QFrame::StyledPanel);
        qGLFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(qGLFrame);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(PhongWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(175, 0));
        groupBox->setMaximumSize(QSize(175, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qLoadModelButton = new QPushButton(groupBox);
        qLoadModelButton->setObjectName(QStringLiteral("qLoadModelButton"));

        gridLayout->addWidget(qLoadModelButton, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        qUndockButton = new QPushButton(PhongWindow);
        qUndockButton->setObjectName(QStringLiteral("qUndockButton"));

        gridLayout_3->addWidget(qUndockButton, 1, 0, 1, 1);


        retranslateUi(PhongWindow);

        QMetaObject::connectSlotsByName(PhongWindow);
    } // setupUi

    void retranslateUi(QWidget *PhongWindow)
    {
        PhongWindow->setWindowTitle(QApplication::translate("PhongWindow", "Phong Shading", nullptr));
        groupBox->setTitle(QApplication::translate("PhongWindow", "Model ", nullptr));
        qLoadModelButton->setText(QApplication::translate("PhongWindow", "Load Model", nullptr));
        qUndockButton->setText(QApplication::translate("PhongWindow", "Undock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhongWindow: public Ui_PhongWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONGWINDOW_H
