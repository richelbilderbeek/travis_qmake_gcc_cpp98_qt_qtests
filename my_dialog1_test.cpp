#include "my_dialog1_test.h"
#include "my_dialog1.h"
#include "ui_my_dialog1.h"

void my_dialog1_test::responds_to_right_pin() const
{
  my_dialog1 d;
  d.show();
  QVERIFY(d.isVisible());
  QVERIFY(d.isHidden());
}

