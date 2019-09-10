#include "SistemaGerenciaFolha.hpp"

SistemaGerenciaFolha::SistemaGerenciaFolha(){

        orcamentoMaximo = 5000;

}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func, int pos){

        funcionarios[pos] = func;

}

double SistemaGerenciaFolha::calculaValorTotalFolha(){

        double total = 0;

        for(int i = 0; i < 3; i++) {

                total += funcionarios[i]->calculaSalario();
        }

        if(total <= orcamentoMaximo) {

                std::cout << "Total da folha: ";
                return total;

        }else{

                OrcamentoEstouradoException e;
                throw e;
        }

        return 0;

}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string n){

        for(int i = 0; i < 3; i++) {

                if(funcionarios[i]->getNome() == n) {

                        std::cout << "Salario do funcionario consultado: ";
                        return funcionarios[i]->calculaSalario();

                }
        }

        FuncionarioNaoExisteException f;
        throw f;

        return 0;
}
