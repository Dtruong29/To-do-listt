/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *current_task;
    QLineEdit *user_input;
    QListWidget *task_list;
    QGroupBox *setting_box;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *select_task_button;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_task_button;
    QPushButton *del_task_button;
    QLabel *timer_display;
    QPushButton *start_timer_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1190, 844);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        current_task = new QLabel(centralwidget);
        current_task->setObjectName("current_task");
        current_task->setGeometry(QRect(30, 230, 751, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        current_task->setFont(font1);
        user_input = new QLineEdit(centralwidget);
        user_input->setObjectName("user_input");
        user_input->setGeometry(QRect(810, 390, 371, 31));
        user_input->setFont(font);
        task_list = new QListWidget(centralwidget);
        task_list->setObjectName("task_list");
        task_list->setGeometry(QRect(810, 10, 371, 371));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(18);
        font2.setBold(true);
        task_list->setFont(font2);
        task_list->setAlternatingRowColors(true);
        setting_box = new QGroupBox(centralwidget);
        setting_box->setObjectName("setting_box");
        setting_box->setGeometry(QRect(1010, 430, 171, 131));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(true);
        setting_box->setFont(font3);
        setting_box->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayoutWidget = new QWidget(setting_box);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 30, 171, 81));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        select_task_button = new QPushButton(verticalLayoutWidget);
        select_task_button->setObjectName("select_task_button");

        verticalLayout_2->addWidget(select_task_button);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        add_task_button = new QPushButton(verticalLayoutWidget);
        add_task_button->setObjectName("add_task_button");

        horizontalLayout->addWidget(add_task_button);

        del_task_button = new QPushButton(verticalLayoutWidget);
        del_task_button->setObjectName("del_task_button");

        horizontalLayout->addWidget(del_task_button);


        verticalLayout_2->addLayout(horizontalLayout);

        timer_display = new QLabel(centralwidget);
        timer_display->setObjectName("timer_display");
        timer_display->setGeometry(QRect(170, 240, 201, 50));
        start_timer_button = new QPushButton(centralwidget);
        start_timer_button->setObjectName("start_timer_button");
        start_timer_button->setGeometry(QRect(30, 300, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1190, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        current_task->setText(QCoreApplication::translate("MainWindow", "Current Task", nullptr));
        setting_box->setTitle(QString());
        select_task_button->setText(QCoreApplication::translate("MainWindow", "Select Current", nullptr));
        add_task_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        del_task_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        timer_display->setText(QCoreApplication::translate("MainWindow", "\"25:00\"", nullptr));
        start_timer_button->setText(QCoreApplication::translate("MainWindow", "Start Timer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
