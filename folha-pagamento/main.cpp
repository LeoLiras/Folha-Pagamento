#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale.h>
#include <ctime>
#include <fstream>

#include "colaborador.h"

using namespace std;

void registro(){

    int cpf, rg;
    string nome;
    float salario_hora, horas_trabalhadas;

    cout << "Insira o nome do colaborador: "<< endl;
    getchar();
    cin >> nome;
    fflush(stdin);
    cout << "Insira o cpf do colaborador: "<< endl;
    cin >> cpf;
    cout << "Insira o rg do colaborador: "<< endl;
    cin >> rg;
    cout << "Insira o salário por hora do colaborador: "<< endl;
    cin >> salario_hora;
    cout << "Insira a quantidade de horas trabalhadas no mês: "<< endl;
    cin >> nome;

    

}

void escrever_arquivo(){
    time_t data = time(0);
    tm* data_atual = localtime(&data);

    string titulo = "folha-" + to_string(data_atual->tm_mday) + '-' + to_string(data_atual->tm_mday + 2) + '-' + to_string(data_atual->tm_year + 1900) + ".txt";

    ofstream arq;
    arq.open(titulo, ios_base::app);
    arq << titulo;
    arq.close();
}

void menu(){
    setlocale(LC_ALL, "");

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