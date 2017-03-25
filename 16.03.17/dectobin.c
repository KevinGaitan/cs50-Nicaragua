#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void){
    int n;
    do{
        printf("Dame un numero positivo ");
        n = GetInt();
        
    }while(n < 0);
    int tam = log10(n)/log10(2) +1;
    int res[tam];
    for(int i = 0; i < tam ; i++){
        res[i] = n %2;
        n = n /2;
    }
    for(int i = tam - 1; i >= 0 ; i--){
        printf("%d",res[i]);
    }
    
    printf("\n");
    return 0;
}