#ifndef MY_DIALOG2_H
#define MY_DIALOG2_H

#include <QDialog>

namespace Ui { class my_dialog2; }

class my_dialog2 : public QDialog {
  Q_OBJECT

public:
  explicit my_dialog2(QWidget *parent = 0);
  ~my_dialog2();

private:
  Ui::my_dialog2 *ui;
};

#endif // MY_DIALOG2_H
