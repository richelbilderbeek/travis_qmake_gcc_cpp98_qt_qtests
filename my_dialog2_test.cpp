#include "my_dialog2_test.h"
#include "my_dialog2.h"
#include "ui_my_dialog2.h"

void my_dialog2_test::responds_to_right_password() const
{
  my_dialog2 d;
  d.show();
  QVERIFY(d.isVisible());
  QVERIFY(!d.is_correct_password());
  d.GetUi()->lineEdit->setText("iloverichel");
  QVERIFY(d.is_correct_password());
  d.GetUi()->lineEdit->setText("letmein");
  QVERIFY(!d.is_correct_password());
}

