/*
    alto n
    ancho m 
    donde n puede ser igual a m.
    Ni m ni n pueden ser menores a 4 ni mayores a 20
    ejemplo alto = ancho  = 3
    ###
    ###
    ###
*/

#include <stdio.h>
#include <cs50.h>
/*En este programa aprenderemos a usar funciones*/

int numeroValid(string texto, int min,int max);//declaramos la funcion


int main(void){
    
    //Ciclos anidados para hacer el muro
    
    int alto = numeroValid("Por favor dame la altura ",4,20);//Funcion que nosotros creamos
    int ancho = numeroValid("Por favor dame el ancho",4,20);
    
    for(int i = 0; i < alto; i++){
        for(int j = 0; j < ancho; j++){
            printf("#");
        }
        printf("\n"); //Imprimimos un salto de linea
    }
    
    return 0;
}

int numeroValid(string texto, int min, int max){
    //Vamos a validar un numero que no se menor que mi ni mayor que max
    int numeroRetorno;
    do{
        printf("%s ",texto);
        numeroRetorno = GetInt();//Funcion de la libreria cs50.h
    }while(numeroRetorno < min || numeroRetorno > max);//Si es menor que el minimo o mayor que el maximo volvemos a pedir
    
    return numeroRetorno;
}