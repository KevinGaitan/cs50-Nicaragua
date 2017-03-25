#include <cs50.h>
#include <stdio.h>

int main(void){
    int height,vuelta,k;
    do{
        printf("Height: ");
        height = GetInt();
    }while(height > 23 || height < 0);
    
    for(int i = 1; i <= height ; i++){
        for(int j = 0; j < height - i; j++){
            printf(" ");//Espacios
        }
        k = 0;
        vuelta = 0;
        do{
            if(vuelta == 0){
                printf("#");
                k+=1;
                if(k == i){
                    vuelta = 1;
                    printf("  ");
                    
                }
            }
            else{
                printf("#");
                k-=1;
                if(k == 0){
                    break;//Exit of the while
                }
            }
        }while(0 == 0);
        printf("\n");
    }
    
    return 0;
}