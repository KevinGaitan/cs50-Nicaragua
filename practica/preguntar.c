#include <stdio.h>
#include <cs50.h>

int main(void){
    
    printf("Cual es tu nombre ");
    string nombre = GetString();
    
    
    printf("Hola, %s me podes dar tu edad ",nombre);
    
    int edad = GetInt();
    
    if(edad >= 18)
    {
        printf("Podes tomar alcohol");
    }
    else
    {
        printf("NO PODES TOMAR");    
    }
    printf("\n");
    return 0;
}