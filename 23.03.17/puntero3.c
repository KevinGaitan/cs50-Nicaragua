#include <stdio.h>

void change(int *n);

int main(void){
    int n = 3;
    printf("N vale: %d\n",n);
    change(&n);
    printf("N vale %d\n",n);
    return 0;
}

void change(int *n){
    *n =  12;
}