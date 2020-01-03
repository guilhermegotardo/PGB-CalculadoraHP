#include "operandos.h"

operandos::operandos()
{

}
void operandos::setNum(float n)
{
    num = n;
}

void operandos::setProx(operandos *p)
{
    prox = p;
}

void operandos::setAnt(operandos *a)
{
    ant = a;
}
