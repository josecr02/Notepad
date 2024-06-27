/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionFont;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuNew;
    QMenu *menuFont;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(800, 600);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(Notepad);
        actionSave->setObjectName("actionSave");
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName("actionSave_as");
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName("actionPrint");
        actionExit = new QAction(Notepad);
        actionExit->setObjectName("actionExit");
        actionFont = new QAction(Notepad);
        actionFont->setObjectName("actionFont");
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName("menuNew");
        menuFont = new QMenu(menubar);
        menuFont->setObjectName("menuFont");
        Notepad->setMenuBar(menubar);

        menubar->addAction(menuNew->menuAction());
        menubar->addAction(menuFont->menuAction());
        menuNew->addSeparator();
        menuNew->addSeparator();
        menuNew->addSeparator();
        menuNew->addSeparator();
        menuNew->addSeparator();
        menuNew->addSeparator();
        menuNew->addAction(actionNew);
        menuNew->addAction(actionOpen);
        menuNew->addAction(actionSave);
        menuNew->addAction(actionSave_as);
        menuNew->addAction(actionPrint);
        menuNew->addAction(actionExit);
        menuFont->addAction(actionFont);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("Notepad", "Save as", nullptr));
        actionPrint->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        actionFont->setText(QCoreApplication::translate("Notepad", "Font", nullptr));
        menuNew->setTitle(QCoreApplication::translate("Notepad", "New", nullptr));
        menuFont->setTitle(QCoreApplication::translate("Notepad", "Font", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
