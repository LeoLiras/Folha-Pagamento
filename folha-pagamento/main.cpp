#include <iostream>
#include <stdlib.h>
#include <string>

#include "colaborador.h"

using namespace std;

void registro(){
    
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