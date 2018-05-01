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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QGroupBox *camera_box;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *type_label;
    QComboBox *type_box;
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

        camera_box = new QGroupBox(PhongWindow);
        camera_box->setObjectName(QStringLiteral("camera_box"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(camera_box->sizePolicy().hasHeightForWidth());
        camera_box->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(camera_box);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        type_label = new QLabel(camera_box);
        type_label->setObjectName(QStringLiteral("type_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(type_label->sizePolicy().hasHeightForWidth());
        type_label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(type_label);

        type_box = new QComboBox(camera_box);
        type_box->addItem(QString());
        type_box->addItem(QString());
        type_box->setObjectName(QStringLiteral("type_box"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(type_box->sizePolicy().hasHeightForWidth());
        type_box->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(type_box);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(camera_box);

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
        camera_box->setTitle(QApplication::translate("PhongWindow", "Camera", nullptr));
        type_label->setText(QApplication::translate("PhongWindow", "Type", nullptr));
        type_box->setItemText(0, QApplication::translate("PhongWindow", "Static", nullptr));
        type_box->setItemText(1, QApplication::translate("PhongWindow", "First person", nullptr));

        qUndockButton->setText(QApplication::translate("PhongWindow", "Undock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhongWindow: public Ui_PhongWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONGWINDOW_H
