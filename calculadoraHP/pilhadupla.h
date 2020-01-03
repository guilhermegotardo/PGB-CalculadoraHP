#ifndef PILHADUPLA_H
#define PILHADUPLA_H

#include "operandos.h"
#include <QApplication>

class pilhadupla
{
public:
    pilhadupla();
    void insereNumero(float n);
    void retiraNumeroInicio();
    void retiraNumeroInicio(QString operador);
    void trocaNumero();
    int exibePilha(QString *n1,QString *n2,QString *n3);
    int exibePilhaUp(QString *n1,QString *n2,QString *n3,int nP);
    int exibePilhaDown(QString *n1,QString *n2,QString *n3, int nP);

private:
    operandos *head;

};

#endif // PILHADUPLA_H
