#include <QtTest/QtTest>
#include "my_dialog1_test.h"
#include "my_dialog2_test.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  int error = 0;
  my_dialog1_test t1;
  error |= QTest::qExec(&t1, argc, argv);
  my_dialog2_test t2;
  error |= QTest::qExec(&t2, argc, argv);
  return error;
}
