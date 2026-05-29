#include <stdio.h>

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
    printf("Antes de cambiarSinpuntero: x = %d\n", x);
    cambiarSinpuntero(x);
    printf("Despues de cambiarConpuntero: x = %d\n", x);

    printf("Antes de cambiarConpuntero: x = %d\n", x);
    cambiarConpuntero(&x);
    printf("Despues de cambiarConpuntero: x = %d\n", x);

    return 0;
}
