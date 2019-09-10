#ifndef ORCAMENTOESTOURADOEXCEPTION
#define ORCAMENTOESTOURADOEXCEPTION value

#include <exception>

class OrcamentoEstouradoException : std::exception {

public:

const char* what();

};

#endif
