#include "Conta.hpp"

Conta::Conta(){

        //ctor
}

Conta::Conta(std::string nomeCliente, int numero, double saldo){

        setNome(nomeCliente);
        setNumero(numero);
        setSaldo(saldo);
}

void Conta::setNome(std::string nome){

        nomeCliente = nome;

}

void Conta::setNumero(int num){

        numero = num;

}

void Conta::setSaldo(double saldo){

        this->saldo=saldo;
}

void Conta::depositar(double valor){

        std::cout << "\nDeposito de " << valor << " realizado com sucesso\n";
        saldo += valor;

}

void Conta::sacar(double valor){

        if(saldo >= valor) {

                std::cout << "\nProcessando saque...\n";
                std::cout << "Saque de " << valor << " realizado com sucesso\n";
                saldo -= valor;

        }else{

                std::cout << "\nProcessando saque...\n";
                std::cout << "Saldo indisponivel!! " << std::endl;

        }
}

std::string Conta::getNome(){

        return nomeCliente;

}

int Conta::getNumero(){

        return numero;

}

double Conta::getSaldo(){

        return saldo;

}
