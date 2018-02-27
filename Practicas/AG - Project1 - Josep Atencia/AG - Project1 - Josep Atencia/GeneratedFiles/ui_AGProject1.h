/********************************************************************************
** Form generated from reading UI file 'AGProject1.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGPROJECT1_H
#define UI_AGPROJECT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AGProject1Class
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *values_label;
    QHBoxLayout *horizontalLayout;
    QLabel *bar_A_val_label;
    QSpinBox *bar_A_box;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bar_B_val_label;
    QSpinBox *bar_B_box;
    QLabel *colors_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *bar_A_col_label;
    QPushButton *A_color_button;
    QHBoxLayout *horizontalLayout_4;
    QLabel *bar_B_col_label;
    QPushButton *B_color_button;
    QLabel *res_label;
    QComboBox *resolution_box;
    QSpacerItem *verticalSpacer;
    QPushButton *save_button;
    QWidget *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AGProject1Class)
    {
        if (AGProject1Class->objectName().isEmpty())
            AGProject1Class->setObjectName(QStringLiteral("AGProject1Class"));
        AGProject1Class->resize(517, 426);
        centralWidget = new QWidget(AGProject1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        values_label = new QLabel(centralWidget);
        values_label->setObjectName(QStringLiteral("values_label"));

        verticalLayout->addWidget(values_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bar_A_val_label = new QLabel(centralWidget);
        bar_A_val_label->setObjectName(QStringLiteral("bar_A_val_label"));

        horizontalLayout->addWidget(bar_A_val_label);

        bar_A_box = new QSpinBox(centralWidget);
        bar_A_box->setObjectName(QStringLiteral("bar_A_box"));

        horizontalLayout->addWidget(bar_A_box);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bar_B_val_label = new QLabel(centralWidget);
        bar_B_val_label->setObjectName(QStringLiteral("bar_B_val_label"));

        horizontalLayout_2->addWidget(bar_B_val_label);

        bar_B_box = new QSpinBox(centralWidget);
        bar_B_box->setObjectName(QStringLiteral("bar_B_box"));

        horizontalLayout_2->addWidget(bar_B_box);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        colors_label = new QLabel(centralWidget);
        colors_label->setObjectName(QStringLiteral("colors_label"));

        verticalLayout_2->addWidget(colors_label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        bar_A_col_label = new QLabel(centralWidget);
        bar_A_col_label->setObjectName(QStringLiteral("bar_A_col_label"));

        horizontalLayout_3->addWidget(bar_A_col_label);

        A_color_button = new QPushButton(centralWidget);
        A_color_button->setObjectName(QStringLiteral("A_color_button"));
        A_color_button->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(A_color_button);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        bar_B_col_label = new QLabel(centralWidget);
        bar_B_col_label->setObjectName(QStringLiteral("bar_B_col_label"));

        horizontalLayout_4->addWidget(bar_B_col_label);

        B_color_button = new QPushButton(centralWidget);
        B_color_button->setObjectName(QStringLiteral("B_color_button"));
        B_color_button->setAutoFillBackground(true);

        horizontalLayout_4->addWidget(B_color_button);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        res_label = new QLabel(centralWidget);
        res_label->setObjectName(QStringLiteral("res_label"));

        verticalLayout_3->addWidget(res_label);

        resolution_box = new QComboBox(centralWidget);
        resolution_box->setObjectName(QStringLiteral("resolution_box"));

        verticalLayout_3->addWidget(resolution_box);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        save_button = new QPushButton(centralWidget);
        save_button->setObjectName(QStringLiteral("save_button"));

        verticalLayout_3->addWidget(save_button);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setAutoFillBackground(true);

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        AGProject1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AGProject1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 517, 21));
        AGProject1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AGProject1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AGProject1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AGProject1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AGProject1Class->setStatusBar(statusBar);

        retranslateUi(AGProject1Class);

        QMetaObject::connectSlotsByName(AGProject1Class);
    } // setupUi

    void retranslateUi(QMainWindow *AGProject1Class)
    {
        AGProject1Class->setWindowTitle(QApplication::translate("AGProject1Class", "AGProject1", nullptr));
        values_label->setText(QApplication::translate("AGProject1Class", "Chart Values", nullptr));
        bar_A_val_label->setText(QApplication::translate("AGProject1Class", "Bar A", nullptr));
        bar_B_val_label->setText(QApplication::translate("AGProject1Class", "Bar B", nullptr));
        colors_label->setText(QApplication::translate("AGProject1Class", "Chart Colors", nullptr));
        bar_A_col_label->setText(QApplication::translate("AGProject1Class", "Bar A", nullptr));
        A_color_button->setText(QString());
        bar_B_col_label->setText(QApplication::translate("AGProject1Class", "Bar B", nullptr));
        B_color_button->setText(QString());
        res_label->setText(QApplication::translate("AGProject1Class", "Output Resolution", nullptr));
        save_button->setText(QApplication::translate("AGProject1Class", "Save Chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AGProject1Class: public Ui_AGProject1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGPROJECT1_H
