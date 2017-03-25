#include<stdio.h>
#include<cs50.h>
#include<math.h>

typedef struct estudiante{
    string nombre;
    int nota[5];
    
}Estudiante;

int main(void){
    Estudiante e[3] ={
        {.nombre = "Juan"},
        {.nombre =" Jose"},
        {.nombre = "Maria"}
    };
    
    for(int i = 0; i < 3; i++){
        printf("Estudiante: %s\n",e[i].nombre);
        printf("Notas: [%d,%d,%d,%d]\n",
        e[i].nota[0] = rand() % 10,
        e[i].nota[1] = rand() % 10,
        e[i].nota[2] = rand() % 10,
        e[i].nota[3] = rand() % 10);
        printf("Promedio: [%d]\n",
        (e[i].nota[0] +e[i].nota[1] +e[i].nota[2] +e[i].nota[3])/4 );
    
        printf("************************************\n");
    }
    
    return 0;
}