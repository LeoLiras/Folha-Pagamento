#include <iostream>
#include <string>
#include "colaborador.h"

using namespace std;

int main(){
    Colaborador c1 = Colaborador(123, 123, "Teste", 50, 44);

    cout << c1.getNome();
    return 0;
}