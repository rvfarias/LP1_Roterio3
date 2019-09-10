#ifndef SISTEMAGERENCIAFOLHA
#define SISTEMAGERENCIAFOLHA

#include "Funcionario.hpp"
#include "FuncionarioNaoExisteException.hpp"
#include "OrcamentoEstouradoException.hpp"

class SistemaGerenciaFolha{

    private:

        double orcamentoMaximo;
        Funcionario *funcionarios[3];

    public:

        SistemaGerenciaFolha();

        void setFuncionarios(Funcionario *func, int pos);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(std::string n);

};

#endif // SISTEMAGERENCIAFOLHA_H
