#ifndef MY_DIALOG1_TEST_H
#define MY_DIALOG1_TEST_H

#include <QtTest/QtTest>

class my_dialog1_test: public QObject
{
    Q_OBJECT
private slots:
    void responds_to_right_pin() const;
};

#endif // MY_DIALOG1_TEST_H
