//Ejemplo de mod y division en c

#include<stdio.h>
#include<cs50.h>//Libreria para utilizar la funcion GetDATATYPE proporcionada por cs50
//http://dkui3cmikz357.cloudfront.net/library50/c/cs50-library-c-3.0/cs50.c
//http://dkui3cmikz357.cloudfront.net/library50/c/cs50-library-c-3.0/cs50.h

int main(){
    int a,b;//Declaramos variables
    //Pedimos datos
    printf("Dividendo: ");
    a = GetInt();
    printf("Divisor: ");
    b = GetInt();
    
    
    //Mostramos que vamos a dividir
    printf("%d entre %d es: ",a,b);
    
    
    //Pregunta... Porque no utilizo el else?
    if(b == 0){//Division entre cero?
        printf("MATH ERROR\n");
        return -1;
    }
    
    printf("%d ",a/b);
    if(a%b == 0){
        printf("(Perfecta)\n");
    }
    else
        printf("con resuido %d\n",a%b);
    
    return 0;
    
}