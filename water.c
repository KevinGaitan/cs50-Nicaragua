#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int f;
    printf("Minutos: ");
    f = GetInt();
    printf("Botellas: %d\n", (f * 12));
    return 0;
}