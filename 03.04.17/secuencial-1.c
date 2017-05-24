#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(){
    
    //Declaramos el arreglo a utlizar
    char arreglo[]={'a','b','c'};
    char dato='b';
    int Vencontrado,i,n;
    
    for(i=0,n=strlen(arreglo); i<n; i++){
        if(dato==arreglo[i]) {
            Vencontrado= i;
            break;
        }
    }
    printf("La posicion encontrada es : %d",i);
    
}