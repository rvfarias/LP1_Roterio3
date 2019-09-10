#include "SistemaGerenciaFolha.hpp"
#include "Assalariado.hpp"
#include "Comissionado.hpp"
#include "Horista.hpp"

using namespace std;

int main(){

        SistemaGerenciaFolha s1;
        Assalariado f1 = Assalariado(2000);
        f1.setNome("Carlos");
        f1.setMatricula(4455321);
        s1.setFuncionarios(&f1, 0);

        Horista f2 = Horista(50, 30);
        f2.setNome("Fernando");
        f2.setMatricula(65373421);
        s1.setFuncionarios(&f2, 1);

        Comissionado f3 = Comissionado(1200, 20);
        f3.setNome("Alexandre");
        f3.setMatricula(3434235);
        s1.setFuncionarios(&f3, 2);

        cout << "-----Funcionario 1 -----" << endl;
        cout << "Nome: " << f1.getNome() << endl;
        cout << "Matricula: " << f1.getMatricula() << endl;
        cout << "Salario: " << f1.calculaSalario() << endl;
        cout << endl;

        cout << "-----Funcionario 2 -----" << endl;
        cout << "Nome: " << f2.getNome() << endl;
        cout << "Matricula: " << f2.getMatricula() << endl;
        cout << "Salario: " << f2.calculaSalario() << endl;
        cout << endl;

        cout << "-----Funcionario 3 -----" << endl;
        cout << "Nome: " << f3.getNome() << endl;
        cout << "Matricula: " << f3.getMatricula() << endl;
        cout << "Salario: " << f3.calculaSalario() << endl;
        cout << endl;

        try{

                std::cout << s1.calculaValorTotalFolha() << endl;

        }catch(OrcamentoEstouradoException &e) {

                cout << e.what() << endl;

        }

        cout << "\nConsultando salario...\n";
        try{

                cout << s1.consultaSalarioFuncionario("Fernando") << endl;

        }catch(FuncionarioNaoExisteException &f) {

                cout << f.what() << endl;

        }

        return 0;
}
