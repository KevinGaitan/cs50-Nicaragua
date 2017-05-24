#include <stdio.h>
#include <cs50.h>

int main(void){
    
    FILE *archivo = fopen("say-hello.txt","r");
    
    if(archivo == NULL)
    {
        printf("Algo salio mal:c\n");//Error al abrir el fichero
        return 1;
    }
    char s[10]; 
    fscanf(archivo,"%s",s);
    
    printf("%s\n",s);
    
    
    return 0;
}