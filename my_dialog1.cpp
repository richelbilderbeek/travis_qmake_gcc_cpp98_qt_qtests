#include "my_dialog1.h"
#include <QKeyEvent>
#include "ui_my_dialog1.h"

my_dialog1::my_dialog1(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::my_dialog1) {
  ui->setupUi(this);
}

my_dialog1::~my_dialog1() {
  delete ui;
}

bool my_dialog1::is_correct_pin() const
{
  return ui->spinBox->value() == 1234;
}
