#ifndef OPERANDOS_H
#define OPERANDOS_H

class operandos
{
public:
    operandos();
    void setNum(float n);
    float getNum(){return num;}
    void setProx(operandos *p);
    operandos *getProx(){return prox;}
    void setAnt(operandos *a);
    operandos *getAnt(){return ant;}

private:
    float num;
    operandos *prox;
    operandos *ant;
};

#endif // OPERANDOS_H
