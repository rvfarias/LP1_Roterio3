#ifndef ICONTA
#define ICONTA value

#include <iostream>

class IConta{

    public:

        virtual void sacar(double valor) = 0;
        virtual void depositar(double valor) = 0;

};

#endif
