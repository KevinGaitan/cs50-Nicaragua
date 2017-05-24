#include <cs50.h>
#include<stdio.h>
#include<math.h>
int main(void){
    float cambio;
    
    do{
        printf("Cambio: ");    
        cambio = GetFloat();
    }while(cambio <0);
    
    
    int cambioR = round (cambio * 100);
    
    
    int vuelto = 0;
    
    
    vuelto += cambioR / 25;
    cambioR = cambioR % 25;
    
    vuelto += cambioR / 10;
    cambioR = cambioR % 10;
    
    vuelto += cambioR / 5;
    cambioR = cambioR % 5;
    
    vuelto += cambioR;
    
    
    printf("%d\n",vuelto);
    
}