#ifndef ASSALARIADO
#define ASSALARIADO

#include "Funcionario.hpp"

class Assalariado : public Funcionario{

    protected:

        double salario;

    public:

        Assalariado(double s);

       //Metodos set
        void setNome(std::string n);
        void setMatricula(int m);

        //Metodos get
        std::string getNome();
        int getMatricula();

        double calculaSalario();
};

#endif // ASSALARIADO_H
