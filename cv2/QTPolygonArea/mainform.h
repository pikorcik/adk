#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>

namespace Ui {
class MainForm;
}

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = 0);
    ~MainForm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainForm *ui;
};

#endif // MAINFORM_H
