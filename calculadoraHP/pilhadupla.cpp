#include "pilhadupla.h"

pilhadupla::pilhadupla()
{
    head = nullptr;
}

void pilhadupla::insereNumero(float n)
{
    operandos *novoNumero = new operandos;

    if (head == nullptr)
    {
        novoNumero->setNum(n);
        novoNumero->setAnt(nullptr);
        novoNumero->setProx(nullptr);
        head = novoNumero;
    }

    else
    {
        novoNumero->setNum(n);
        novoNumero->setProx(head);
        novoNumero->setAnt(nullptr);
        head->setAnt(novoNumero);
        head = novoNumero;
    }

}

void pilhadupla::retiraNumeroInicio()       //método deletar
{
    operandos *temp = new operandos;
    temp = head;

    if(temp != nullptr)
    {
        if(temp->getProx() == nullptr)
        {
            temp = nullptr;
            head = temp;
        }

        else
        {
            head=temp->getProx();
            head->setAnt(nullptr);
            delete temp;
        }
    }
}

void pilhadupla::retiraNumeroInicio(QString operador)       //método operar
{
    operandos *temp = new operandos;
    temp = head;

    if(temp!=nullptr)
    {
        if(temp->getProx()!=nullptr)
        {
            if(operador == "+")
            {
                head=temp->getProx();
                head->setNum(head->getNum() + temp->getNum());
                head->setAnt(nullptr);
                delete temp;
            }
            else if (operador == "-" )
            {
                head=temp->getProx();
                head->setNum(head->getNum() - temp->getNum());
                head->setAnt(nullptr);
                delete temp;
            }

            else if (operador == "*" )
            {
                head=temp->getProx();
                head->setNum(head->getNum() * temp->getNum());
                head->setAnt(nullptr);
                delete temp;
            }

            else if (operador == "/" )
            {
                head=temp->getProx();
                head->setNum(head->getNum() / temp->getNum());
                head->setAnt(nullptr);
                delete temp;
            }

        }
    }

}

void pilhadupla::trocaNumero()
{
    operandos *temp = new operandos;
    temp = head;

    if(temp != nullptr)
    {
        if(temp->getProx() != nullptr)
        {
            temp = temp->getProx();

            if(temp->getProx() == nullptr)
            {
                temp->setProx(head);
                temp->setAnt(nullptr);
                head->setProx(nullptr);
                head->setAnt(temp);
                head = temp;
            }

            else
            {
                ((temp->getProx())->setAnt(head));
                head->setAnt(temp);
                head->setProx(temp->getProx());
                temp->setAnt(nullptr);
                temp->setProx(head);
                head = temp;
            }
        }
    }
}

int pilhadupla::exibePilha(QString *n1,QString *n2,QString *n3)
{
    operandos *temp = new operandos;
    int i = 0;
    temp = head;

    if((temp!=nullptr))
    {
        n1->setNum(temp->getNum());
        temp = temp->getProx();
        i++;

        if(temp!=nullptr)
        {
            n2->setNum(temp->getNum());
            temp = temp->getProx();
            i++;
        }

        else
            n2->append("-");


        if(temp!=nullptr)
        {
            n3->setNum(temp->getNum());
            i++;
        }
        else
            n3->append("-");
    }

    else
    {
       n1->append("-");
       n2->append("-");
       n3->append("-");
    }

    return i;
}

int pilhadupla::exibePilhaUp(QString *n1,QString *n2,QString *n3,int nP)
{
    operandos *temp = new operandos;
    temp = head;

    for(int i = 0; i<nP-1; i++)
        temp = temp->getProx();

    if(temp->getProx()==nullptr)
        return 0;

    else
    {
        n1->setNum((temp->getAnt())->getNum());
        n2->setNum( temp->getNum());
        n3->setNum((temp->getProx())->getNum());
        nP++;
        return nP;
    }

}

int pilhadupla::exibePilhaDown(QString *n1,QString *n2,QString *n3, int nP)
{
    operandos *temp = new operandos;
    temp = head;

    for(int i = 0; i<nP-3; i++)
        temp = temp->getProx();

    if(temp->getProx()==nullptr)
        return 0;

    else
    {
        n1->setNum((temp->getAnt())->getNum());
        n2->setNum(temp->getNum());
        n3->setNum((temp->getProx())->getNum());
        nP--;
        return nP;
    }
}






















