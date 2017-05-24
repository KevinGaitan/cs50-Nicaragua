#define _XOPEN_SOURCE
#include <unistd.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
//Caracteres imprimibles
#define min_ascii 32
#define max_ascii 126

int bruteForce(string key, string password);

int main(int argv, string argc[]){
    
    if(argv != 2){
        printf("Only one argument\n");
        return 1;
    }    
    char key[2]; 
    strxfrm(key,argc[1],2);
    return bruteForce(key,argc[1]);
}
int bruteForce(string key, string password){
    char *c;

    
    for(int i = 0; i < 8; i++){
        free(c);
        c = calloc(i+2,sizeof(char));
        c[i+1] = '\0';
        
    }
    
    return 1;
    
}