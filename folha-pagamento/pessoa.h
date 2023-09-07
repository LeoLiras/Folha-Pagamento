#include <string>

#ifndef PESSOA_H
#define PESSOA_H
#endif

using namespace std;

//Cria a classe Pessoa
 class Pessoa
    {
    protected:
        int cpf;
        int rg;
        string nome;
    public:
        //Construtor
        Pessoa(int _cpf, int _rg, string _nome);

        string getNome();
        void setCpf(int _cpf);
        void setRg(int _rg);
        void setNome(string _nome);
        
    };