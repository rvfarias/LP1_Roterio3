#include "Poupanca.hpp"

Poupanca::Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento){

        setNome(nomeCliente);
        setNumero(numero);
        setSaldo(saldo);
        setVariacao(variacao);
        setTaxaRendimento(taxaRendimento);

}

void Poupanca::setVariacao(int variacao){

        this->variacao = variacao;

}

void Poupanca::setTaxaRendimento(double taxaRendimento){

        this->taxaRendimento = taxaRendimento;

}

int Poupanca::getVariacao(){

        return variacao;

}

double Poupanca::getTaxaRendimento(){

        return taxaRendimento;

}

double Poupanca::render(){

        double rendimento;

        if(variacao  == 51) {

                rendimento = saldo * (taxaRendimento/100);
                saldo += rendimento;
        }else{

                rendimento = saldo * ((taxaRendimento + 0.5)/100);
                saldo += rendimento;
        }

        return rendimento;
}
