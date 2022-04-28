/********************************************************************************
** Form generated from reading UI file 'QtQQ_Server.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTQQ_SERVER_H
#define UI_QTQQ_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtQQ_ServerClass
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *tableWidget;
    QWidget *widget;
    QLabel *label;
    QGroupBox *groupBox;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *employeeDepBox;
    QLineEdit *nameLineEdit;
    QPushButton *selectPictureBtn;
    QPushButton *addBtn;
    QLabel *headLabel;
    QComboBox *departmentBox;
    QPushButton *queryDepartmentBtn;
    QLineEdit *queryIDLineEdit;
    QPushButton *queryIDBtn;
    QPushButton *logoutBtn;
    QLineEdit *logoutIDLineEdit;

    void setupUi(QDialog *QtQQ_ServerClass)
    {
        if (QtQQ_ServerClass->objectName().isEmpty())
            QtQQ_ServerClass->setObjectName(QString::fromUtf8("QtQQ_ServerClass"));
        QtQQ_ServerClass->resize(999, 502);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtQQ_ServerClass->sizePolicy().hasHeightForWidth());
        QtQQ_ServerClass->setSizePolicy(sizePolicy);
        QtQQ_ServerClass->setMinimumSize(QSize(999, 502));
        QtQQ_ServerClass->setMaximumSize(QSize(999, 502));
        scrollArea = new QScrollArea(QtQQ_ServerClass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(1, 1, 700, 500));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(700, 500));
        scrollArea->setMaximumSize(QSize(700, 500));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 698, 498));
        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 700, 500));
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget = new QWidget(QtQQ_ServerClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(702, 1, 299, 500));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 250, 201));
        label->setPixmap(QPixmap(QString::fromUtf8("qiniu.png")));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 210, 291, 281));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 170, 299, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 54, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 54, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 54, 16));
        employeeDepBox = new QComboBox(groupBox);
        employeeDepBox->addItem(QString());
        employeeDepBox->addItem(QString());
        employeeDepBox->addItem(QString());
        employeeDepBox->setObjectName(QString::fromUtf8("employeeDepBox"));
        employeeDepBox->setGeometry(QRect(150, 10, 113, 28));
        nameLineEdit = new QLineEdit(groupBox);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(150, 40, 113, 28));
        selectPictureBtn = new QPushButton(groupBox);
        selectPictureBtn->setObjectName(QString::fromUtf8("selectPictureBtn"));
        selectPictureBtn->setGeometry(QRect(220, 70, 41, 28));
        addBtn = new QPushButton(groupBox);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(150, 140, 113, 28));
        headLabel = new QLabel(groupBox);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        headLabel->setGeometry(QRect(140, 70, 81, 51));
        departmentBox = new QComboBox(groupBox);
        departmentBox->addItem(QString());
        departmentBox->addItem(QString());
        departmentBox->addItem(QString());
        departmentBox->addItem(QString());
        departmentBox->setObjectName(QString::fromUtf8("departmentBox"));
        departmentBox->setGeometry(QRect(30, 180, 101, 22));
        queryDepartmentBtn = new QPushButton(groupBox);
        queryDepartmentBtn->setObjectName(QString::fromUtf8("queryDepartmentBtn"));
        queryDepartmentBtn->setGeometry(QRect(150, 180, 113, 28));
        queryIDLineEdit = new QLineEdit(groupBox);
        queryIDLineEdit->setObjectName(QString::fromUtf8("queryIDLineEdit"));
        queryIDLineEdit->setGeometry(QRect(30, 210, 101, 20));
        queryIDBtn = new QPushButton(groupBox);
        queryIDBtn->setObjectName(QString::fromUtf8("queryIDBtn"));
        queryIDBtn->setGeometry(QRect(150, 210, 113, 28));
        logoutBtn = new QPushButton(groupBox);
        logoutBtn->setObjectName(QString::fromUtf8("logoutBtn"));
        logoutBtn->setGeometry(QRect(150, 240, 113, 28));
        logoutIDLineEdit = new QLineEdit(groupBox);
        logoutIDLineEdit->setObjectName(QString::fromUtf8("logoutIDLineEdit"));
        logoutIDLineEdit->setGeometry(QRect(30, 240, 101, 20));

        retranslateUi(QtQQ_ServerClass);

        QMetaObject::connectSlotsByName(QtQQ_ServerClass);
    } // setupUi

    void retranslateUi(QDialog *QtQQ_ServerClass)
    {
        QtQQ_ServerClass->setWindowTitle(QCoreApplication::translate("QtQQ_ServerClass", "QtQQ_Server", nullptr));
        label->setText(QString());
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("QtQQ_ServerClass", "\345\221\230\345\267\245\351\203\250\351\227\250\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QtQQ_ServerClass", "\345\221\230\345\267\245\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("QtQQ_ServerClass", "\345\221\230\345\267\245\345\257\270\347\205\247\357\274\232", nullptr));
        employeeDepBox->setItemText(0, QCoreApplication::translate("QtQQ_ServerClass", "\344\272\272\344\272\213\351\203\250", nullptr));
        employeeDepBox->setItemText(1, QCoreApplication::translate("QtQQ_ServerClass", "\347\240\224\345\217\221\351\203\250", nullptr));
        employeeDepBox->setItemText(2, QCoreApplication::translate("QtQQ_ServerClass", "\345\270\202\345\234\272\351\203\250", nullptr));

        nameLineEdit->setPlaceholderText(QCoreApplication::translate("QtQQ_ServerClass", "\350\257\267\350\276\223\345\205\245\345\221\230\345\267\245\345\247\223\345\220\215", nullptr));
        selectPictureBtn->setText(QCoreApplication::translate("QtQQ_ServerClass", "...", nullptr));
        addBtn->setText(QCoreApplication::translate("QtQQ_ServerClass", "\346\226\260\345\242\236\345\221\230\345\267\245", nullptr));
        headLabel->setText(QCoreApplication::translate("QtQQ_ServerClass", "   \345\221\230\345\267\245\345\257\270\347\205\247", nullptr));
        departmentBox->setItemText(0, QCoreApplication::translate("QtQQ_ServerClass", "\345\205\254\345\217\270\347\276\244", nullptr));
        departmentBox->setItemText(1, QCoreApplication::translate("QtQQ_ServerClass", "\344\272\272\344\272\213\351\203\250", nullptr));
        departmentBox->setItemText(2, QCoreApplication::translate("QtQQ_ServerClass", "\347\240\224\345\217\221\351\203\250", nullptr));
        departmentBox->setItemText(3, QCoreApplication::translate("QtQQ_ServerClass", "\345\270\202\345\234\272\351\203\250", nullptr));

        queryDepartmentBtn->setText(QCoreApplication::translate("QtQQ_ServerClass", "\346\237\245\350\257\242\345\221\230\345\267\245", nullptr));
        queryIDLineEdit->setPlaceholderText(QCoreApplication::translate("QtQQ_ServerClass", "\350\257\267\350\276\223\345\205\245\345\221\230\345\267\245QQ\345\217\267", nullptr));
        queryIDBtn->setText(QCoreApplication::translate("QtQQ_ServerClass", "\346\237\245\350\257\242\345\221\230\345\267\245", nullptr));
        logoutBtn->setText(QCoreApplication::translate("QtQQ_ServerClass", "\346\263\250\351\224\200\345\221\230\345\267\245", nullptr));
        logoutIDLineEdit->setPlaceholderText(QCoreApplication::translate("QtQQ_ServerClass", "\350\257\267\350\276\223\345\205\245\345\221\230\345\267\245QQ\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtQQ_ServerClass: public Ui_QtQQ_ServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTQQ_SERVER_H
