#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(){
    
    int arreglo[]={15,30,10,54,20,60};
    int centro,inf=0,n = 5,sup=n-1,Vencontrado=-1,valor = 54;

    while(inf<=sup){
          centro=((sup-inf)/2)+inf;
          if(arreglo[centro]==valor){
              Vencontrado = centro;
              break;
          }
          else if(valor < arreglo[centro]){
              sup=centro-1;
          }
          else{
              inf=centro+1;
          }
    }
       printf("Encontrado en: %d",Vencontrado);
    
}