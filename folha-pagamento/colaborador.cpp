 #include <string>
 #include "colaborador.h"
 
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

    float Colaborador::getSalario(){
        return salario_hora;
    }

    float Colaborador::getHoras(){
        return horas_trabalhadas;
    }

    void Colaborador::setSalario(float _salario_hora){
        salario_hora = _salario_hora;
    }

    void Colaborador::setHoras(float _horas_trabalhadas){
        horas_trabalhadas = _horas_trabalhadas;
    }

    float Colaborador::salario_total(float _salario_hora, float _horas_trabalhadas){
        return _salario_hora * _horas_trabalhadas;
    }