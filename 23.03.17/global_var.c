#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void cambio(void);

int numero;

int main(void){
    
    numero = 12;
    printf("El numero es %d\n",numero);
    cambio();
    
    printf("El numero es %d\n",numero);
    return 0;
}

void cambio(void){
    numero = 2;
}