#include <iostream>
#include <string>

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
    //Construtor
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
    
    //Cria a classe Colaborador, que é uma classe filha de Pessoa.
    class Colaborador : public Pessoa{
        private:
            string cargo;
            float salario_hora;
            float horas_trabalhadas;
        public:
            //Construtor
            Colaborador(int _cpf, int _rg, string _nome, float _salario, float _horas_trabalhadas);

    };

    //Construtor
    Colaborador::Colaborador(int _cpf, int _rg, string _nome, float _salario_hora, float _horas_trabalhadas) : Pessoa(_cpf, _rg, _nome)
    {
        cpf = _cpf;
        rg = _rg;
        nome = _nome;
        salario_hora = _salario_hora;
        horas_trabalhadas = _horas_trabalhadas;
    }
  
    

int main(){

    return 0;
}