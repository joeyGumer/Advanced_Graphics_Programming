/********************************************************************************
** Form generated from reading UI file 'texturingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTURINGWINDOW_H
#define UI_TEXTURINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TexturingWindow
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QFrame *qGLFrame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGraphicsView *qTex1View;
    QVBoxLayout *verticalLayout;
    QPushButton *qLoadTex1Button;
    QPushButton *qDeleteTex1Button;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *qLoadTex2Button;
    QPushButton *qDeleteTex2Button;
    QGraphicsView *qTex2View;
    QSpacerItem *verticalSpacer;
    QPushButton *qUndockButton;

    void setupUi(QWidget *TexturingWindow)
    {
        if (TexturingWindow->objectName().isEmpty())
            TexturingWindow->setObjectName(QStringLiteral("TexturingWindow"));
        TexturingWindow->resize(580, 402);
        gridLayout_3 = new QGridLayout(TexturingWindow);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        qGLFrame = new QFrame(TexturingWindow);
        qGLFrame->setObjectName(QStringLiteral("qGLFrame"));
        qGLFrame->setFrameShape(QFrame::StyledPanel);
        qGLFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(qGLFrame);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(TexturingWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(230, 133));
        groupBox->setMaximumSize(QSize(230, 133));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qTex1View = new QGraphicsView(groupBox);
        qTex1View->setObjectName(QStringLiteral("qTex1View"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(qTex1View->sizePolicy().hasHeightForWidth());
        qTex1View->setSizePolicy(sizePolicy1);
        qTex1View->setMinimumSize(QSize(100, 100));
        qTex1View->setMaximumSize(QSize(100, 100));
        qTex1View->setAutoFillBackground(true);
        qTex1View->setFrameShape(QFrame::Panel);
        qTex1View->setFrameShadow(QFrame::Sunken);
        qTex1View->setLineWidth(1);

        gridLayout->addWidget(qTex1View, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        qLoadTex1Button = new QPushButton(groupBox);
        qLoadTex1Button->setObjectName(QStringLiteral("qLoadTex1Button"));
        sizePolicy.setHeightForWidth(qLoadTex1Button->sizePolicy().hasHeightForWidth());
        qLoadTex1Button->setSizePolicy(sizePolicy);
        qLoadTex1Button->setMinimumSize(QSize(100, 23));
        qLoadTex1Button->setMaximumSize(QSize(100, 23));

        verticalLayout->addWidget(qLoadTex1Button);

        qDeleteTex1Button = new QPushButton(groupBox);
        qDeleteTex1Button->setObjectName(QStringLiteral("qDeleteTex1Button"));
        sizePolicy.setHeightForWidth(qDeleteTex1Button->sizePolicy().hasHeightForWidth());
        qDeleteTex1Button->setSizePolicy(sizePolicy);
        qDeleteTex1Button->setMinimumSize(QSize(100, 23));
        qDeleteTex1Button->setMaximumSize(QSize(100, 23));

        verticalLayout->addWidget(qDeleteTex1Button);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TexturingWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(230, 133));
        groupBox_2->setMaximumSize(QSize(230, 133));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        qLoadTex2Button = new QPushButton(groupBox_2);
        qLoadTex2Button->setObjectName(QStringLiteral("qLoadTex2Button"));
        sizePolicy.setHeightForWidth(qLoadTex2Button->sizePolicy().hasHeightForWidth());
        qLoadTex2Button->setSizePolicy(sizePolicy);
        qLoadTex2Button->setMinimumSize(QSize(100, 23));
        qLoadTex2Button->setMaximumSize(QSize(100, 23));

        verticalLayout_2->addWidget(qLoadTex2Button);

        qDeleteTex2Button = new QPushButton(groupBox_2);
        qDeleteTex2Button->setObjectName(QStringLiteral("qDeleteTex2Button"));
        sizePolicy.setHeightForWidth(qDeleteTex2Button->sizePolicy().hasHeightForWidth());
        qDeleteTex2Button->setSizePolicy(sizePolicy);
        qDeleteTex2Button->setMinimumSize(QSize(100, 23));
        qDeleteTex2Button->setMaximumSize(QSize(100, 23));

        verticalLayout_2->addWidget(qDeleteTex2Button);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        qTex2View = new QGraphicsView(groupBox_2);
        qTex2View->setObjectName(QStringLiteral("qTex2View"));
        sizePolicy1.setHeightForWidth(qTex2View->sizePolicy().hasHeightForWidth());
        qTex2View->setSizePolicy(sizePolicy1);
        qTex2View->setMinimumSize(QSize(100, 100));
        qTex2View->setMaximumSize(QSize(100, 100));
        qTex2View->setAutoFillBackground(true);
        qTex2View->setFrameShape(QFrame::Panel);
        qTex2View->setFrameShadow(QFrame::Sunken);
        qTex2View->setLineWidth(1);

        gridLayout_2->addWidget(qTex2View, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        qUndockButton = new QPushButton(TexturingWindow);
        qUndockButton->setObjectName(QStringLiteral("qUndockButton"));

        gridLayout_3->addWidget(qUndockButton, 1, 0, 1, 1);


        retranslateUi(TexturingWindow);

        QMetaObject::connectSlotsByName(TexturingWindow);
    } // setupUi

    void retranslateUi(QWidget *TexturingWindow)
    {
        TexturingWindow->setWindowTitle(QApplication::translate("TexturingWindow", "Texturing ", nullptr));
        groupBox->setTitle(QApplication::translate("TexturingWindow", "Texture 1", nullptr));
        qLoadTex1Button->setText(QApplication::translate("TexturingWindow", "Load", nullptr));
        qDeleteTex1Button->setText(QApplication::translate("TexturingWindow", "Delete", nullptr));
        groupBox_2->setTitle(QApplication::translate("TexturingWindow", "Texture 2", nullptr));
        qLoadTex2Button->setText(QApplication::translate("TexturingWindow", "Load", nullptr));
        qDeleteTex2Button->setText(QApplication::translate("TexturingWindow", "Delete", nullptr));
        qUndockButton->setText(QApplication::translate("TexturingWindow", "Undock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TexturingWindow: public Ui_TexturingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTURINGWINDOW_H
