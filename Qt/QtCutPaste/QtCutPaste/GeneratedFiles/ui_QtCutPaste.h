/********************************************************************************
** Form generated from reading UI file 'QtCutPaste.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCUTPASTE_H
#define UI_QTCUTPASTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCutPasteClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *TitleText;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *TextEdit;
    QLabel *PasteText;
    QVBoxLayout *verticalLayout;
    QPushButton *CutButton;
    QPushButton *PasteButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *QuitButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtCutPasteClass)
    {
        if (QtCutPasteClass->objectName().isEmpty())
            QtCutPasteClass->setObjectName(QStringLiteral("QtCutPasteClass"));
        QtCutPasteClass->resize(406, 301);
        centralWidget = new QWidget(QtCutPasteClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        TitleText = new QLabel(centralWidget);
        TitleText->setObjectName(QStringLiteral("TitleText"));

        horizontalLayout->addWidget(TitleText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        TextEdit = new QPlainTextEdit(centralWidget);
        TextEdit->setObjectName(QStringLiteral("TextEdit"));

        verticalLayout_2->addWidget(TextEdit);

        PasteText = new QLabel(centralWidget);
        PasteText->setObjectName(QStringLiteral("PasteText"));

        verticalLayout_2->addWidget(PasteText);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        CutButton = new QPushButton(centralWidget);
        CutButton->setObjectName(QStringLiteral("CutButton"));

        verticalLayout->addWidget(CutButton);

        PasteButton = new QPushButton(centralWidget);
        PasteButton->setObjectName(QStringLiteral("PasteButton"));

        verticalLayout->addWidget(PasteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        QuitButton = new QPushButton(centralWidget);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));

        horizontalLayout_2->addWidget(QuitButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        QtCutPasteClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtCutPasteClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 406, 21));
        QtCutPasteClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtCutPasteClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtCutPasteClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtCutPasteClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtCutPasteClass->setStatusBar(statusBar);

        retranslateUi(QtCutPasteClass);
        QObject::connect(QuitButton, SIGNAL(clicked()), QtCutPasteClass, SLOT(close()));

        QMetaObject::connectSlotsByName(QtCutPasteClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtCutPasteClass)
    {
        QtCutPasteClass->setWindowTitle(QApplication::translate("QtCutPasteClass", "QtCutPaste", nullptr));
        TitleText->setText(QApplication::translate("QtCutPasteClass", "Text", nullptr));
        PasteText->setText(QApplication::translate("QtCutPasteClass", "TextLabel", nullptr));
        CutButton->setText(QApplication::translate("QtCutPasteClass", "Cut", nullptr));
        PasteButton->setText(QApplication::translate("QtCutPasteClass", "Paste", nullptr));
        QuitButton->setText(QApplication::translate("QtCutPasteClass", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtCutPasteClass: public Ui_QtCutPasteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCUTPASTE_H
