#include <iostream>
using namespace std;

void cambiarSinpuntero(int n){
     n = 100;
}

void cambiarConpuntero(int  *p){
     if (p != NULL){
        *p = 100;
     }
}

int main(){
    int x = 5;
    
    cout << "Antes de cambiarSinpuntero: x = " << x << "\n";
    cambiarSinpuntero(x);
    cout << "Despues de cambiarSinpuntero: x = " << x << "\n";

    cout << "Antes de cambiarConpuntero: x = " << x << "\n";
    cambiarConpuntero(&x);
    cout << "Despues de cambiarConpuntero: x = " << x << "\n";

    return 0;
}
