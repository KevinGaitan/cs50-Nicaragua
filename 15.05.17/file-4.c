#include <cs50.h>
#include <stdio.h>

int main(void){
    FILE *archivo = fopen("other-file.txt","w");
    
    if(archivo == NULL){
        printf("Error :c\n");
        return 1;
    }
    
    string s =GetString();//Lo que se escribira
    
    
    fprintf(archivo,"%s",s);
    
    
    
    
    fclose(archivo);
    return 0;
}