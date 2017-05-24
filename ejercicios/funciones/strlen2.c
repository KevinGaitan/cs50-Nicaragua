#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void){
    
    string s = GetString();
    for(int i = 0, size = strlen(s); i < size ; i++){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}