#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
int main(void){
 
    int *un_numero = malloc(sizeof(int));
    *un_numero = GetInt();
    
    printf("El numero es %d\n",*un_numero);
    
    free(un_numero);
    
    return 0;
}