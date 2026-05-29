#include <iostream>
using namespace std;

void leerArreglo(int *datos, int n) {
    int i;

    if (datos == NULL) {
	   return;
    }

    for (i = 0; i < n; i++) {
	   cout << "Ingrese datos[" << i << "]: ";
	   cin >> datos[i];
    }
}

void mostrarArreglo(int *datos, int n) {
    int i;

    if (datos == NULL) {
       return;
    }

    for (i = 0; i < n; i++) {
       cout << datos[i] << " ";
    }
    cout <<endl;
}

void analizarArreglo(int *datos, int n, int *suma, float *promedio) {

    int i;

    if (datos == NULL || suma == NULL || promedio == NULL) {
       return;
    }
    *suma = 0;

    for (i = 0; i < n; i++) {
       *suma = *suma + datos[i];
    }
    *promedio = static_cast<float>(*suma) / n;
}

int main() {
	
    int datos[5];
    int suma;
    float promedio;

    leerArreglo(datos, 5);
    mostrarArreglo(datos, 5);
    analizarArreglo(datos, 5, &suma, &promedio);

    cout << "Suma = " << suma <<endl;
    cout << "Promedio = " << promedio <<endl;
    return 0;
}
