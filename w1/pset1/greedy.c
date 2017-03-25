#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void){
    
    float cambioF;
    
    do{
        printf("Cuanto dinero quieres en cambio?");
        cambioF= GetFloat();
    }while(cambioF < 0);
    
    int totalDeMonedas = 0;
    int cambio = (int) round(cambioF * 100);
    
    /*coins available are quarters (25¢),
dimes (10¢), nickels (5¢), and pennies (1¢).*/
    totalDeMonedas += cambio / 25;
    cambio = cambio % 25;
    
    totalDeMonedas += cambio / 10;
    cambio = cambio % 10;
    
    totalDeMonedas += cambio / 5;
    cambio = cambio % 5;
    
    totalDeMonedas += cambio ;
    
    printf("%d\n",totalDeMonedas);
    return 0;
}