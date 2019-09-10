#include "FuncionarioNaoExisteException.hpp"

const char* FuncionarioNaoExisteException::what(){

    return "Funcionario não encontrado";
    
}
