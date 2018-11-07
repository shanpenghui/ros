/********************************************************************************
** Form generated from reading UI file 'consoleWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWIDGET_H
#define UI_CONSOLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consoleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_lines;
    QSpinBox *spinBox_time;
    QPushButton *pushButton_clear;

    void setupUi(QWidget *consoleWidget)
    {
        if (consoleWidget->objectName().isEmpty())
            consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        consoleWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(consoleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(consoleWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_lines = new QSpinBox(consoleWidget);
        spinBox_lines->setObjectName(QString::fromUtf8("spinBox_lines"));
        spinBox_lines->setMaximum(99999);
        spinBox_lines->setValue(100);

        horizontalLayout->addWidget(spinBox_lines);

        spinBox_time = new QSpinBox(consoleWidget);
        spinBox_time->setObjectName(QString::fromUtf8("spinBox_time"));
        spinBox_time->setMaximum(1000);
        spinBox_time->setSingleStep(100);
        spinBox_time->setValue(1000);

        horizontalLayout->addWidget(spinBox_time);

        pushButton_clear = new QPushButton(consoleWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        horizontalLayout->addWidget(pushButton_clear);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(consoleWidget);

        QMetaObject::connectSlotsByName(consoleWidget);
    } // setupUi

    void retranslateUi(QWidget *consoleWidget)
    {
        consoleWidget->setWindowTitle(QApplication::translate("consoleWidget", "consoleWidget", 0, QApplication::UnicodeUTF8));
        spinBox_lines->setSuffix(QApplication::translate("consoleWidget", " lines", 0, QApplication::UnicodeUTF8));
        spinBox_time->setSuffix(QApplication::translate("consoleWidget", " ms", 0, QApplication::UnicodeUTF8));
        pushButton_clear->setText(QApplication::translate("consoleWidget", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class consoleWidget: public Ui_consoleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWIDGET_H
