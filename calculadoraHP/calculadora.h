#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QWidget>
#include "pilhadupla.h"

namespace Ui {
class calculadora;
}

class calculadora : public QWidget
{
    Q_OBJECT

public:
    explicit calculadora(QWidget *parent = 0);
    ~calculadora();
    void setnPos(int nP);
    int getnPos(){return nPos;}

private slots:


    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_zeroButton_clicked();

    void on_clearButton_clicked();

    void on_enterButton_clicked();

    void on_addOpButton_clicked();

    void on_subOpButton_clicked();

    void on_multiOpButton_clicked();

    void on_divOpButton_clicked();

    void on_delButton_clicked();

    void on_rolButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

private:
    Ui::calculadora *ui;
    pilhadupla p;
    int nPos;
};

#endif // CALCULADORA_H
