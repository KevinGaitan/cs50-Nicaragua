#include <stdio.h> 
#include <cs50.h>
//Variaveis globais 
int n1matriz = 0; 
void gerarMatriz(int nmatriz); 
 
//Funcao principal 
int main(){ 
    printf("diga o tamaño da matriz\n"); 
    n1matriz= GetInt();
    gerarMatriz(n1matriz); 
} 
 
//Funcao que gera a matriz en caracol 
void gerarMatriz(int nmatriz){ 
    int i,j; 
    int countTotal = 1,tamanioTotal = nmatriz*nmatriz; 
    int fila = 0, check = nmatriz, band = 1; 
    int matrizCaracol[nmatriz][nmatriz]; 
 
    //LE matriz 
    while(countTotal<=tamanioTotal){ 
        //vai para direita 
        for(i=band-1; i < check; i++){ 
            matrizCaracol[fila][i] = countTotal; 
            countTotal = countTotal + 1; 
        } 
        fila = nmatriz - band; 
        check = nmatriz - band; 
 
        //vai para baicho 
        for(i=band; i <= check; i++){ 
            matrizCaracol[i][fila] = countTotal; 
            countTotal = countTotal + 1; 
        } 
 
        //vai pra ezquerda 
        for(i=check-1; i >= (band-1) ; i--){ matrizCaracol[fila][i] = countTotal; 
            countTotal = countTotal + 1; 
        } 
 
        fila = band-1; 
 
        //ir para cima 
        for(i=check-1; i >= band ; i--){ 
            matrizCaracol[i][fila] = countTotal; 
            countTotal = countTotal + 1; 
        } 
        band++; 
        fila = band-1; 
    } 
 
    //Imprimir matriz 
    for(i=0; i<nmatriz; i++){ 
        for(j=0; j<nmatriz; j++){ 
            printf("%d \t", matrizCaracol[i][j]); 
        } 
        printf("\n"); 
    } 
} 