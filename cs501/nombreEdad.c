/*
    src
    ____
    printf ->https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm
*/

#include <stdio.h>//Libreria standard input and output
#include <cs50.h>//Libreria para utilizar la funcion GetDATATYPE proporcionada por cs50
//http://dkui3cmikz357.cloudfront.net/library50/c/cs50-library-c-3.0/cs50.c
//http://dkui3cmikz357.cloudfront.net/library50/c/cs50-library-c-3.0/cs50.h

int main(void){
    //printf para imprimir algo en pantalla
    printf("Por favor dame tu nombre: ");
    string nombre = GetString();
    int edad;
    do{//Validamos que la edad sea mas o menos creible
        printf("%s, que edad tienes ?\n",nombre);//code...
        edad = GetInt();
    }while(edad <= 0 || edad > 120);//Si la edad es menor o igual que cero o mayor que 120 volvemos a pedir la edad
    
    
    //condicionales if, if else if, else
    if(edad <= 12){//Primera evaluacion
        printf("%s eres un ni;o\n",nombre);
    }
    else if(edad <= 18){//Si no si
        printf("%s eres un adolecente\n",nombre);
    }
    else if(edad <= 99){//si no si
        printf("%s eres mayor\n",nombre);
    }
    else//Si no
        printf("Oye tranquilo matusalen\n");
    
    return 0;
}