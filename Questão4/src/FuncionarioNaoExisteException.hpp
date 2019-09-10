#ifndef FUNCIONARIONAOEXITEEXCEPTION
#define FUNCIONARIONAOEXITEEXCEPTION value

#include <exception>

class FuncionarioNaoExisteException : std::exception {

public:

const char* what();

};

#endif
