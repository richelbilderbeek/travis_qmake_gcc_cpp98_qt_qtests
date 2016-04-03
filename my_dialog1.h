#ifndef MY_DIALOG1_H
#define MY_DIALOG1_H

#include <QDialog>

namespace Ui { class my_dialog1; }

class my_dialog1 : public QDialog {
  Q_OBJECT

public:
  explicit my_dialog1(QWidget *parent = 0);
  ~my_dialog1();

private:
  Ui::my_dialog1 *ui;
};

#endif // MY_DIALOG1_H
