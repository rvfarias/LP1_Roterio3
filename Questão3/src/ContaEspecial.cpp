#include "ContaEspecial.hpp"

ContaEspecial::ContaEspecial(std::string nomeCliente, int numero, double saldo, double salario)
        : ContaCorrente(nomeCliente, numero, saldo, salario)
{

}

double ContaEspecial::definirLimite(){

        return salario*4;

}
