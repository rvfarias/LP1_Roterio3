#include <iostream>
#include "ContaEspecial.hpp"
#include "Poupanca.hpp"

using namespace std;

int main(){
    //Declaraçã de objetos
    ContaCorrente * c1 = new ContaCorrente("Fernando", 77223, 5000, 2000);

    ContaEspecial * c2 = new ContaEspecial("Carlos", 66002, 2000, 500);
    ContaEspecial * c3 = new ContaEspecial("Geraldo", 55533, 3500, -300);

    Poupanca * c4 = new Poupanca("Carlos", 33402, 300, 1, 6.5);

    //Imprimindo atributos dos objeros
    cout << "-----Cliente 1-----" << endl;
    cout << "Nome: " << c1->getNome() << endl;
    cout << "Numero da conta: " << c1->getNumero() << endl;
    cout << "Salario: " << c1->getSalario() << endl;
    cout << "Saldo: " << c1->getSaldo() << endl;
    cout << "Limite: " << c1->definirLimite() << endl;
    c1->sacar(200);
    cout << "\nNovo saldo: " << c1->getSaldo() << endl;

    cout << "\n-----Cliente 2-----" << endl;
    cout << "Nome: " << c2->getNome() << endl;
    cout << "Numero da conta: " << c2->getNumero() << endl;
    cout << "Salario: " << c2->getSalario() << endl;
    cout << "Saldo: " << c2->getSaldo() << endl;
    cout << "Limite: " << c2->definirLimite() << endl;
    c2->depositar(3000);
    cout << "\nNovo saldo: " << c2->getSaldo() << endl;

    cout << "\n-----Cliente 3-----" << endl;
    cout << "Nome: " << c3->getNome() << endl;
    cout << "Numero da conta: " << c3->getNumero() << endl;
    cout << "Salario: " << c3->getSalario() << endl;
    cout << "Limite: " << c3->definirLimite() << endl;
    cout << "Saldo: " << c3->getSaldo() << endl;
    c3->depositar(3000);
    cout << "\nNovo saldo: " << c3->getSaldo() << endl;

    cout << "\n-----Cliente 4-----" << endl;
    cout << "Nome: " << c4->getNome() << endl;
    cout << "Numero da conta: " << c4->getNumero() << endl;
    cout << "Saldo: " << c4->getSaldo() << endl;
    cout << "Rendimento: " << c4->render();
    cout << "\nNovo saldo: " << c4->getSaldo() << endl;

    return 0;
}
