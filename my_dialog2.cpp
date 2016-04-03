#include "my_dialog2.h"
#include <QKeyEvent>
#include "ui_my_dialog2.h"

my_dialog2::my_dialog2(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::my_dialog2) {
  ui->setupUi(this);
}

my_dialog2::~my_dialog2() {
  delete ui;
}
