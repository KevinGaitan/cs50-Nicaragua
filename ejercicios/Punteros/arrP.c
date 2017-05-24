#include <stdio.h>

int main()
{

    int *puntero[5]; //array de puntero
    int a[5][5]; //Array bidimensional.
    int i; 
    
    for (i=0;i<5;i++){
    puntero[i]=a[i]; //Asignamos las filas al puntero.
    printf("%d\n", *puntero[i]);
    
    //Pueden imprimir tambien en un ciclo
    //Tambien pueden acceder mediante un ciclo anidado a la variables del puntero[i][j]
    }
}