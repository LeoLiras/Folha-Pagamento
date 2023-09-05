#include <iostream>
#include <string>

using namespace std;

 class Pessoa
    {
    private:
        int cpf;
        int rg;
        string nome;
    public:
        void setCpf(int _cpf);
        void setRg(int _rg);
        void setNome(string _nome);
        
    };
    
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



int main(){

   
    
    return 0;
}