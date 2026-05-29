#include <iostream>
using namespace std;

int contadorGlobal = 0;

void contar(){
    int contadorLocalNormal = 0;
    static int contadorLocalEstatico = 0;

    contadorGlobal++;
    contadorLocalNormal++;
    contadorLocalEstatico++;

    cout << "Global     = " << contadorGlobal << "\n";
    cout << "Local normal = " << contadorLocalNormal << "\n";
    cout << "Local static = " << contadorLocalEstatico << "\n";
    cout << "---------------------\n";
}

int main(){
    contar();
    contar();
    contar();
    return 0;
}
