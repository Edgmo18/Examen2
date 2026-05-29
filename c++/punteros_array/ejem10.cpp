#include <iostream>
using namespace std;

int main(){
	int n;
	int i;
	int *datos = NULL;
	
	cout<<" Cuantos enteros desea guardar: ";
	cin>> n;
	
	datos = new int[n];
	
	for (i = 0; i<n; i++){
		cout<<"Ingrese datos [" << i << "]: ";
		cin>> datos[i];
	}
	cout<<"Datos ingresados: ";
	
	for(i=0; i<n; i++){
		cout<< datos[i] <<" ";
	}
	cout<<endl;
	
	delete[] datos;
	
	datos = NULL;
	return 0;	
}
