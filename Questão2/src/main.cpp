#include "ContaEspecial.hpp"

using namespace std;

int main(){

    //Objeto da classe conta
    Conta * c1 = new Conta("Fernando", "777-223", 5000, 2000);
    c1->DefinirLimite();

    //Objeto da classe conta
    Conta * c2 = new Conta("Miguel", "234325-67", 1500, 300);
    c2->DefinirLimite();

    //Objeto da classe conta especial
    ContaEspecial * c3 = new ContaEspecial();
    c3->setNome("Carlos");
    c3->setNumeroConta("66600-2");
    c3->setSalario(5000);
    c3->setSaldo(-2000);
    c3->DefinirLimite();

    //Objeto da classe conta especial
    ContaEspecial * c4 = new ContaEspecial("Geraldo", "66600-2", 2000, 500);
    c4->DefinirLimite();

    //Imprimindo atributos dos objetos
    cout << "-----Cliente 1-----" << endl;
    cout << "Nome: " << c1->getNome() << endl;
    cout << "Numero da conta: " << c1->getNumeroConta() << endl;
    cout << "Salario: " << c1->getSalario() << endl;
    cout << "Saldo: " << c1->getSaldo() << endl;
    cout << "Limite: " << c1->getLimite() << endl;
    c1->sacar(200);
    cout << "\nNovo saldo: " << c1->getSaldo() << endl;

    cout << "\n-----Cliente 2-----" << endl;
    cout << "Nome: " << c2->getNome() << endl;
    cout << "Numero da conta: " << c2->getNumeroConta() << endl;
    cout << "Salario: " << c2->getSalario() << endl;
    cout << "Saldo: " << c2->getSaldo() << endl;
    cout << "Limite: " << c2->getLimite() << endl;
    c2->sacar(500);
    cout << "\nNovo saldo: " << c2->getSaldo() << endl;

    cout << "\n-----Cliente 3-----" << endl;
    cout << "Nome: " << c3->getNome() << endl;
    cout << "Numero da conta: " << c3->getNumeroConta() << endl;
    cout << "Salario: " << c3->getSalario() << endl;
    cout << "Saldo: " << c3->getSaldo() << endl;
    cout << "Limite: " << c3->getLimite() << endl;
    c3->depositar(3000);
    cout << "\nNovo saldo: " << c3->getSaldo() << endl;

    cout << "\n-----Cliente 4-----" << endl;
    cout << "Nome: " << c4->getNome() << endl;
    cout << "Numero da conta: " << c4->getNumeroConta() << endl;
    cout << "Salario: " << c4->getSalario() << endl;
    cout << "Saldo: " << c4->getSaldo() << endl;
    cout << "Limite: " << c4->getLimite() << endl;
    c4->depositar(3000);
    cout << "\nNovo saldo: " << c4->getSaldo() << endl;


    return 0;
}
