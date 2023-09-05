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
        Pessoa(int _cpf, int _rg, string _nome);

        string getNome();
        void setCpf(int _cpf);
        void setRg(int _rg);
        void setNome(string _nome);
        
    };

    Pessoa::Pessoa(int _cpf, int _rg, string _nome){
        cpf = _cpf;
        rg = _rg;
        nome = _nome;
    }
    
    void Pessoa::setNome(string _nome)
    {
        nome = _nome;
    }

    string Pessoa::getNome(){
        return nome;
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
    Pessoa p1 = Pessoa (1, 2, "Pedro");
    return 0;
}