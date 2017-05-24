#include <stdio.h>
#include <cs50.h>

int main(void){
    int matriz[2][2];
    int *punteroAMatriz;
    punteroAMatriz = &matriz[0][0];//Apuntamos a la dirreccion de memoria
    
    for(int i = 0; i < 2*2; i++){
        *(punteroAMatriz + i) = GetInt() ;//Usamos aritmetica de punteros para movernos en la memoria
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%i ",matriz[i][j]);//Funciono?
        }
        printf("\n");
    }
    return 0;
}