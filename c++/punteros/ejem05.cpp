#include <iostream>
using namespace std;

void analizarNumeros(int a, int b, int c, int &suma, int &mayor, int &menor) {
    suma = a + b + c;
    
    mayor = a;
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }
    
    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
}

int main() {
    int x = 8;
    int y = 3;
    int z = 15;
    
    int suma;
    int mayor;
    int menor;
    
    // Ya no necesitas usar '&' al pasar las variables
    analizarNumeros(x, y, z, suma, mayor, menor);
    
    cout << "Suma = " << suma << "\n";
    cout << "Mayor = " << mayor << "\n";
    cout << "Menor = " << menor << "\n";
    
    return 0;
}
