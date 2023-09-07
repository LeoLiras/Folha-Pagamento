#include <iostream>
#include <stdlib.h>
#include <string>

#include "colaborador.h"

using namespace std;

void registro(){
    int cpf, rg;
    string nome;
    float salario_hora, horas_trabalhadas;

    cout << "Insira o nome do colaborador: "<< endl;
    cin >> nome;
    getchar();
    cout << "Insira o cpf do colaborador: "<< endl;
    cin >> cpf;
    cout << "Insira o rg do colaborador: "<< endl;
    cin >> rg;
    cout << "Insira o salário por hora do colaborador: "<< endl;
    cin >> salario_hora;
    cout << "Insira a quantidade de horas trabalhadas no mês: "<< endl;
    cin >> nome;
}

void menu(){
    int opt;
    cout << "========== Menu ==========" << endl;
    cout << "[1] - Iniciar Registro" << endl;
    cout << "[2] - Fechar o programa" << endl;

    cin >> opt;

    switch(opt){
        case 1:
            registro();
            break;
        case 2:
            exit(0);
            break;
    }

}

int main(){
    menu();
    return 0;
}