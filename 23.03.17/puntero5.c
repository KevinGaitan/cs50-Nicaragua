#include<stdlib.h>
#include<stdio.h>
#include<cs50.h>

int main(void){
    
    int *arreglo = calloc(12,sizeof(int));
    for(int i = 0; i < 12; i++){
        *(arreglo+i) = GetInt();
    }
    for(int i = 0; i < 12; i++){
        printf("%d ",arreglo[i]);
    }
    printf("\n");
    free(arreglo);
    return 0;
}