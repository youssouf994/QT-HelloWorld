/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionApri;
    QAction *actionSalva;
    QAction *actionGrassetto;
    QWidget *centralwidget;
    QLabel *mesaggio1;
    QTextEdit *textEdit;
    QPushButton *button1;
    QLabel *messaggioButton1;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuFormato;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1052, 450);
        actionApri = new QAction(MainWindow);
        actionApri->setObjectName("actionApri");
        actionSalva = new QAction(MainWindow);
        actionSalva->setObjectName("actionSalva");
        actionGrassetto = new QAction(MainWindow);
        actionGrassetto->setObjectName("actionGrassetto");
        actionGrassetto->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/img/bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGrassetto->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mesaggio1 = new QLabel(centralwidget);
        mesaggio1->setObjectName("mesaggio1");
        mesaggio1->setGeometry(QRect(311, 330, 131, 51));
        mesaggio1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 60, 1041, 341));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(10, 20, 93, 29));
        messaggioButton1 = new QLabel(centralwidget);
        messaggioButton1->setObjectName("messaggioButton1");
        messaggioButton1->setGeometry(QRect(110, 20, 191, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Symbol")});
        font.setPointSize(13);
        messaggioButton1->setFont(font);
        messaggioButton1->setAutoFillBackground(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1052, 25));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        menuFormato = new QMenu(menubar);
        menuFormato->setObjectName("menuFormato");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuFormato->menuAction());
        menufile->addSeparator();
        menufile->addAction(actionApri);
        menufile->addAction(actionSalva);
        menufile->addSeparator();
        menuFormato->addAction(actionGrassetto);
        toolBar->addAction(actionGrassetto);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionApri->setText(QCoreApplication::translate("MainWindow", "Apri", nullptr));
        actionSalva->setText(QCoreApplication::translate("MainWindow", "Salva", nullptr));
        actionGrassetto->setText(QCoreApplication::translate("MainWindow", "Grassetto", nullptr));
#if QT_CONFIG(shortcut)
        actionGrassetto->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        mesaggio1->setText(QString());
        button1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        messaggioButton1->setText(QString());
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuFormato->setTitle(QCoreApplication::translate("MainWindow", "Formato", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
