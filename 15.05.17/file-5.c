#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct{
    char name[20];
    int age;
    char eyeColor[20];
}person;



int main(void){
    
    person *p;
    
    
    
    FILE *archivo = fopen("bin.cs50","w+");
    
    if(archivo == NULL){
        printf("Error\n");
        return 1;
    }
    
    p = malloc(sizeof(person));
    if(p == NULL){
        printf("No se pudo reservar memoria\n");
        return 1;
    }
    
    printf("Name?: "); strncpy(p->name,GetString(),20);
    printf("How old are u?: "); p->age = GetInt();
    printf("Eye color?: "); strncpy(p->eyeColor,GetString(),20);
    
    
    printf("Nombre: %s, Edad: %d, Color de ojos %s\n",p->name,p->age,p->eyeColor);
    
    fwrite(p,sizeof(person),1,archivo);
    
    
    fclose(archivo);
    free(p);
    
    
    return 0;
}