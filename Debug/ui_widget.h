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
    QPushButton *btn_prev;
    QListWidget *listWidget;
    QLabel *label_check;
    QPushButton *name_list;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(767, 406);
        image = new QLabel(Widget);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(420, 110, 181, 61));
        image->setAlignment(Qt::AlignCenter);
        btn_random = new QPushButton(Widget);
        btn_random->setObjectName(QStringLiteral("btn_random"));
        btn_random->setGeometry(QRect(550, 210, 93, 28));
        btn_prev = new QPushButton(Widget);
        btn_prev->setObjectName(QStringLiteral("btn_prev"));
        btn_prev->setGeometry(QRect(400, 210, 93, 28));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 120, 256, 192));
        label_check = new QLabel(Widget);
        label_check->setObjectName(QStringLiteral("label_check"));
        label_check->setGeometry(QRect(40, 60, 161, 51));
        name_list = new QPushButton(Widget);
        name_list->setObjectName(QStringLiteral("name_list"));
        name_list->setGeometry(QRect(400, 280, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        image->setText(QApplication::translate("Widget", "\345\274\240\344\270\211", Q_NULLPTR));
        btn_random->setText(QApplication::translate("Widget", "\351\232\217\346\234\272\347\202\271\345\220\215", Q_NULLPTR));
        btn_prev->setText(QApplication::translate("Widget", "\344\270\212\344\270\200\344\270\252", Q_NULLPTR));
        label_check->setText(QApplication::translate("Widget", "\347\202\271\345\220\215\346\270\205\345\215\225", Q_NULLPTR));
        name_list->setText(QApplication::translate("Widget", "\345\267\262\347\202\271\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
