/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *image;
    QPushButton *btn_random;
    QListWidget *listWidget;
    QLabel *label_check;
    QPushButton *btn_restart;
    QPushButton *btn_save;
    QCheckBox *checkBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(806, 423);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 215, 181);\n"
"font: 20pt \"\346\245\267\344\275\223\";"));
        image = new QLabel(Widget);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(440, 110, 181, 61));
        image->setStyleSheet(QStringLiteral("background-color: rgb(245, 232, 102);"));
        image->setAlignment(Qt::AlignCenter);
        btn_random = new QPushButton(Widget);
        btn_random->setObjectName(QStringLiteral("btn_random"));
        btn_random->setGeometry(QRect(330, 210, 161, 71));
        btn_random->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 120, 211, 281));
        listWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_check = new QLabel(Widget);
        label_check->setObjectName(QStringLiteral("label_check"));
        label_check->setGeometry(QRect(40, 60, 381, 51));
        btn_restart = new QPushButton(Widget);
        btn_restart->setObjectName(QStringLiteral("btn_restart"));
        btn_restart->setGeometry(QRect(560, 210, 171, 71));
        btn_restart->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btn_save = new QPushButton(Widget);
        btn_save->setObjectName(QStringLiteral("btn_save"));
        btn_save->setGeometry(QRect(400, 300, 251, 71));
        btn_save->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(440, 50, 381, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        image->setText(QApplication::translate("Widget", "\345\274\240\344\270\211", Q_NULLPTR));
        btn_random->setText(QApplication::translate("Widget", "\351\232\217\346\234\272\347\202\271\345\220\215", Q_NULLPTR));
        label_check->setText(QApplication::translate("Widget", "\347\202\271\345\220\215\346\270\205\345\215\225", Q_NULLPTR));
        btn_restart->setText(QApplication::translate("Widget", "\351\207\215\346\226\260\347\202\271\345\220\215", Q_NULLPTR));
        btn_save->setText(QApplication::translate("Widget", "\344\277\235\345\255\230\346\234\252\345\210\260\344\272\272\345\221\230", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "\346\230\257\345\220\246\351\234\200\350\246\201\344\277\235\345\255\230\346\234\252\345\210\260\344\272\272\345\221\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
