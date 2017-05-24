#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void cambio(int numero);


int main(void){
    
    int numero = 12;
    printf("El numero es %d\n",numero);
    cambio(numero);
    
    printf("El numero es %d\n",numero);
    return 0;
}

void cambio(int numero){
    numero = 2;
}