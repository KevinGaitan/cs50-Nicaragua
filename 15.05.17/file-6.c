#include <stdio.h>
#include <cs50.h>

typedef struct{
    char name[20];
    int age;
    char eyeColor[20];
}person;



int main(void){
    
    person *p;
    
    
    
    FILE *archivo = fopen("bin.cs50","r+");
    
    if(archivo == NULL){
        printf("Error\n");
        return 1;
    }
    //int n = (sizeof(archivo)/sizeof(person));
    
    p = malloc(sizeof(person));
    
    
    
    if(p == NULL){
        printf("No se pudo reservar memoria\n");
        return 1;
    }
    
    fread(p,sizeof(person),1, archivo);
    
    printf("Nombre: %s, Edad: %d, Color de ojos %s\n",p->name,p->age,p->eyeColor);
    
    
    fclose(archivo);
    free(p);
    
    
    return 0;
}