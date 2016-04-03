#include <QApplication>
#include "my_dialog1.h"
#include "my_dialog2.h"

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);
  my_dialog1 d1;
  d1.show();
  my_dialog2 d2;
  d2.exec();
  return a.exec();
}
