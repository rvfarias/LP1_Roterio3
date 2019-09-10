#ifndef CONTA
#define CONTA

#include <iostream>

class Conta {

protected:

std::string nomeCliente;
int numero;
double saldo;

public:
//Construtores
Conta();
Conta(std::string nomeCliente, int numero, double saldo);
//Metodos set
void setNome(std::string nome);
void setNumero(int numero);
void setSaldo(double saldo);
//Metodos para sacar e depositar
void sacar(double valor);
void depositar(double valor);
//Metodos get
std::string getNome();
int getNumero();
double getSaldo();



};

#endif // CONTA_H
