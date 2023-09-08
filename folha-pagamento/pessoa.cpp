#include <string>
#include "pessoa.h"

using namespace std;

//Construtor
    Pessoa::Pessoa(int _cpf, int _rg, string _nome){
        cpf = _cpf;
        rg = _rg;
        nome = _nome;
    }

    string Pessoa::getNome(){
        return nome;
    }

    int Pessoa::getCpf(){
        return cpf;
    }

    int Pessoa::getRg(){
        return rg;
    }
    
    void Pessoa::setNome(string _nome)
    {
        nome = _nome;
    }
    
    void Pessoa::setRg(int _rg)
    {
        rg = _rg;
    }

    void Pessoa::setCpf(int _cpf)
    {
        cpf = _cpf;
    }