#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string nomeCliente, int numero, double salario, double saldo){

        setNome(nomeCliente);
        setNumero(numero);
        setSaldo(saldo);
        setSalario(salario);

}

void ContaCorrente::setSalario(double sal){

        salario = sal;

}

double ContaCorrente::definirLimite(){

        return limite = 2*salario;

}

double ContaCorrente::getSalario(){

        return salario;

}
