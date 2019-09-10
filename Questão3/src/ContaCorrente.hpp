#ifndef CONATACORRENTE
#define CONATACORRENTE value

#include "Conta.hpp"

class ContaCorrente : public Conta {
protected:
/* data */
double salario;
double limite;

public:
//Construtor
ContaCorrente(std::string nomeCliente, int numer, double salario, double saldo);
//Metodo set
void setSalario(double sal);
//Metodo get
double getSalario();
virtual double definirLimite();

};

#endif
