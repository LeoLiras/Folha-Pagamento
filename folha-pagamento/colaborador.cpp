 #include <string>
 #include "colaborador.h"
 #include "pessoa.h"
 
 using namespace std;

 //Construtor
    Colaborador::Colaborador(int _cpf, int _rg, string _nome, float _salario_hora, float _horas_trabalhadas) : Pessoa(_cpf, _rg, _nome)
    {
        cpf = _cpf;
        rg = _rg;
        nome = _nome;
        salario_hora = _salario_hora;
        horas_trabalhadas = _horas_trabalhadas;
    }