#ifndef MY_DIALOG2_TEST_H
#define MY_DIALOG2_TEST_H

#include <QtTest/QtTest>

class my_dialog2_test: public QObject
{
    Q_OBJECT
private slots:
    void responds_to_right_password() const;
};

#endif // MY_DIALOG2_TEST_H
