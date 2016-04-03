#include <QtTest/QtTest>
#include "my_dialog1_test.h"
#include "my_dialog2_test.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  my_dialog1_test t1;
  QTest::qExec(&t1, argc, argv);
  my_dialog2_test t2;
  QTest::qExec(&t2, argc, argv);
  return a.exec();
}
