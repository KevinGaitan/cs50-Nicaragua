#include<cs50.h>
#include<stdio.h>
int main(void){
    
    
    printf("minutes: ");
    int m = GetInt();
    printf("bottles: %d\n", m * 12);
    return 0;
}
