#include "calculadora.h"
#include "ui_calculadora.h"

calculadora::calculadora(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculadora)
{
    ui->setupUi(this);
    ui->lcdPilha->setText("-");
    ui->lcdPilha->append("-");
    ui->lcdPilha->append("-");
    setnPos(0);

}

calculadora::~calculadora()
{
    delete ui;
}

void calculadora::setnPos(int nP)
{
    if(nP >= 0)
        nPos = nP;
}

void calculadora::on_oneButton_clicked()
{
    QString num1("1"),lcd(ui->lcdInput->text());
    lcd = lcd + num1;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_twoButton_clicked()
{
    QString num2("2"),lcd(ui->lcdInput->text());
    lcd = lcd + num2;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_threeButton_clicked()
{
    QString num3("3"),lcd(ui->lcdInput->text());
    lcd = lcd + num3;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_fourButton_clicked()
{
    QString num4("4"),lcd(ui->lcdInput->text());
    lcd = lcd + num4;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_fiveButton_clicked()
{
    QString num5("5"),lcd(ui->lcdInput->text());
    lcd = lcd + num5;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_sixButton_clicked()
{
    QString num6("6"),lcd(ui->lcdInput->text());
    lcd = lcd + num6;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_sevenButton_clicked()
{
    QString num7("7"),lcd(ui->lcdInput->text());
    lcd = lcd + num7;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_eightButton_clicked()
{
    QString num8("8"),lcd(ui->lcdInput->text());
    lcd = lcd + num8;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_nineButton_clicked()
{
    QString num9("9"),lcd(ui->lcdInput->text());
    lcd = lcd + num9;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_zeroButton_clicked()
{
    QString num0("0"),lcd(ui->lcdInput->text());
    lcd = lcd + num0;
    ui->lcdInput->clear();
    ui->lcdInput->setText(lcd);
}

void calculadora::on_clearButton_clicked()
{
    ui->lcdInput->clear();
}

void calculadora::on_enterButton_clicked()
{
    QString n1,n2,n3;

    if(!(QString(ui->lcdInput->text()).isEmpty()))
    {

        p.insereNumero(ui->lcdInput->text().toFloat());                      //insere n na pilha
        ui->lcdInput->clear();                                              //limpa a entrada

        setnPos(p.exibePilha(&n1,&n2,&n3));          //metodo para pegar os 3 primeiros numeros da pilha

        ui->lcdPilha->setText(n3);
        ui->lcdPilha->append(n2);
        ui->lcdPilha->append(n1);
    }

}

void calculadora::on_addOpButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela
    p.retiraNumeroInicio("+");

    setnPos(p.exibePilha(&n1,&n2,&n3));         //metodo para pegar os 3 primeiros numeros da pilha

    //exibição na tela do lcd
    ui->lcdPilha->setText(n3);
    ui->lcdPilha->append(n2);
    ui->lcdPilha->append(n1);
}

void calculadora::on_subOpButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela
    p.retiraNumeroInicio("-");

    setnPos(p.exibePilha(&n1,&n2,&n3));         //metodo para pegar os 3 primeiros numeros da pilha

    //exibição na tela do lcd
    ui->lcdPilha->setText(n3);
    ui->lcdPilha->append(n2);
    ui->lcdPilha->append(n1);
}

void calculadora::on_multiOpButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela
    p.retiraNumeroInicio("*");

    setnPos(p.exibePilha(&n1,&n2,&n3));          //metodo para pegar os 3 primeiros numeros da pilha

    //exibição na tela do lcd
    //exibição na tela do lcd
    ui->lcdPilha->setText(n3);
    ui->lcdPilha->append(n2);
    ui->lcdPilha->append(n1);
}

void calculadora::on_divOpButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela
    p.retiraNumeroInicio("/");

    setnPos(p.exibePilha(&n1,&n2,&n3));          //metodo para pegar os 3 primeiros numeros da pilha

    //exibição na tela do lcd
    ui->lcdPilha->setText(n3);
    ui->lcdPilha->append(n2);
    ui->lcdPilha->append(n1);
}

void calculadora::on_delButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela
    p.retiraNumeroInicio();

    setnPos(p.exibePilha(&n1,&n2,&n3));          //metodo para pegar os 3 primeiros numeros da pilha

    //exibição na tela do lcd
    ui->lcdPilha->setText(n3);
    ui->lcdPilha->append(n2);
    ui->lcdPilha->append(n1);
}

void calculadora::on_rolButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela
    p.trocaNumero();
    ui->lcdInput->clear();              //limpa a entrada

    setnPos(p.exibePilha(&n1,&n2,&n3));          //metodo para pegar os 3 primeiros numeros da pilha

    //exibição na tela do lcd
    ui->lcdPilha->setText(n3);
    ui->lcdPilha->append(n2);
    ui->lcdPilha->append(n1);
}

void calculadora::on_upButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;
    int nTemp;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela

    if(getnPos()>=3)
    {
        if((nTemp = p.exibePilhaUp(&n1,&n2,&n3,getnPos())) > getnPos())
        {
            //exibição na tela do lcd
            ui->lcdPilha->setText(n3);
            ui->lcdPilha->append(n2);
            ui->lcdPilha->append(n1);
            setnPos(nTemp);
        }
    }
}

void calculadora::on_downButton_clicked()
{
    QString n1=0, n2=0 ,n3=0;
    int nTemp;            //cria var n para inserir na pilha, n1-n2-n3 para exibir na tela

    if(getnPos()>3)
    {
        if((nTemp = p.exibePilhaDown(&n1,&n2,&n3,getnPos())) < getnPos())
        {
            //exibição na tela do lcd
            ui->lcdPilha->setText(n3);
            ui->lcdPilha->append(n2);
            ui->lcdPilha->append(n1);
            setnPos(nTemp);
        }
    }
}
