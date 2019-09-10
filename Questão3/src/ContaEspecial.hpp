#ifndef CONTAESPECIAL
#define CONTAESPECIAL value

#include "ContaCorrente.hpp"

class ContaEspecial : public ContaCorrente {

public:
//Construtor
ContaEspecial(std::string nomeCliente, int numero, double saldo, double salario);

double definirLimite();

};

#endif
