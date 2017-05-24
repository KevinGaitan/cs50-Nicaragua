#include <cs50.h>
#include <stdio.h>

int main(void){
    FILE *archivo = fopen("say-hello.txt","r");
    
    if(archivo == NULL){
        printf("Error :c\n");
        return 1;
    }
    char c;
    
    while(!feof(archivo)){
        c = fgetc(archivo);
        printf("%c",c);
    }
    
    fclose(archivo);
    return 0;
}