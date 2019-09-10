#ifndef CONTA
#define CONTA value

#include "Iconta.hpp"

class Conta : public IConta{

    protected:

        std::string nomeCliente;
        std::string numeroConta;
        double salarioMensal;
        double saldo;
        double limite;

    public:

        Conta();
        Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo);
        void setNome(std::string nome);
        void setNumeroConta(std::string numeroConta);
        void setSalario(double salarioMensal);
        void setSaldo(double saldo);
        void depositar(double valor);
        void sacar(double valor);
        void DefinirLimite();

        std::string getNome();
        std::string getNumeroConta();
        double getSalario();
        double getSaldo();
        double getLimite();


};
#endif
