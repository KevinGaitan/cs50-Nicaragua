#include <stdio.h>
#include <cs50.h>

int myPow(int number,int elevate);

int main(void){
    
    printf("%d\n",myPow(2,8));
    return 0;
}

int myPow(int number, int elevate){
    if(elevate == 0){
        return 1;
    }
    else if(elevate != 1)
        return number * myPow(number,elevate - 1);
    else
        return number;
}