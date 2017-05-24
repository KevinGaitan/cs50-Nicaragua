#include <cs50.h>
#include <stdio.h>

int main(void){
    FILE *archivo = fopen("say-hello.txt","r");
    
    if(archivo == NULL){
        printf("Error :c\n");
        return 1;
    }
    char c[50];
    
    while(!feof(archivo)){
        if(fgets(c,50,archivo) != NULL){
            printf("%s\n",c);
        }
    }
    
    fclose(archivo);
    return 0;
}