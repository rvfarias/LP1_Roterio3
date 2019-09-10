#ifndef POUPANCA
#define POUPANCA value

#include "Conta.hpp"

class Poupanca : public Conta {
private:
/* data */
int variacao;
double taxaRendimento;

public:
//Construtor
Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento);

//Metodos set
void setVariacao(int variacao);
void setTaxaRendimento(double taxaRendimento);

//Metodos get
int getVariacao();
double getTaxaRendimento();

//Metodo que retorna o rendimento
double render();

};

#endif
