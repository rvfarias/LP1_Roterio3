#ifndef CONTAESPECIAL
#define CONTAESPECIAL value

#include "Conta.hpp"

class ContaEspecial : public Conta{

    public:

        ContaEspecial();
        ContaEspecial(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo);
        void DefinirLimite();
};

#endif
