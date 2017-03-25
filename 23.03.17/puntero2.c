#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[]={2,31,3123,123,131,18}; //Declaración de variable entera de tipo entero
    int *puntero; //Declaración de variable puntero de tipo entero
    puntero = &a[0]; //Asignación de la dirección memoria de a
    
    for(int i = 0; i < 6; i++ )
    {
        
        printf("%d ",*(puntero +i));
    }
    printf("\n");
    return 0;
}
