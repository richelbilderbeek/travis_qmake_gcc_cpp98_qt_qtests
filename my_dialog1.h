#ifndef MY_DIALOG1_H
#define MY_DIALOG1_H

#include <QDialog>

namespace Ui { class my_dialog1; }

class my_dialog1 : public QDialog {
  Q_OBJECT

public:
  explicit my_dialog1(QWidget *parent = 0);
  ~my_dialog1();
  bool is_correct_pin() const;

  const Ui::my_dialog1 * GetUi() const { return ui; }
        Ui::my_dialog1 * GetUi()       { return ui; }

private:
  Ui::my_dialog1 *ui;
};

#endif // MY_DIALOG1_H
