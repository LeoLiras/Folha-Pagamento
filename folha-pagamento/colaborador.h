 #include <string>
 #include "pessoa.h"
 
 using namespace std;
 
 //Cria a classe Colaborador, que é uma classe filha de Pessoa.
    class Colaborador : public Pessoa{
        private:
            string cargo;
            float salario_hora;
            float horas_trabalhadas;
        public:
            //Construtor
            Colaborador(int _cpf, int _rg, string _nome, float _salario, float _horas_trabalhadas);
            float getSalario();
            float getHoras();
            void setSalario(float _salario);
            void setHoras(float _horas_trabalhadas);
    };