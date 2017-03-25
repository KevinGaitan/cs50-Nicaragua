#include <stdio.h>
#include <cs50.h>

int main(void){
    int alto;
    do{
        printf("Dame el alto de la piramide: ");
        alto = GetInt();
    }while(alto < 0 || alto > 23);
    
    for(int i = 1; i <= alto; i++){
        for(int espacios = 0; espacios < (alto - i); espacios++)
            printf(" ");//Espacios
        for(int numerales = 0; numerales < (i + 1); numerales++)
            printf("#");//Numerales
        printf("\n");
    }
    return 0;
}