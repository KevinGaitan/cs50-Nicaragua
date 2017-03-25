#include<stdio.h>
#include<cs50.h>
#include<math.h>



int main(void){
    string estudiantes[3] = {"Juan","Jose","Maria"};
    
    int notas[3][5];//4 Notas mas el promedio
    int suma;
    for(int i = 0; i<3 ; i++){
        printf("%s\n",estudiantes[i]);
        printf("______________________\n");
        suma = 0;
        for(int j = 0 ; j < 5; j++){
            if(j == 4){
                printf("promedio: %d \n",notas[i][j] = suma / 4);
            }
            else{
                suma += notas[i][j] = rand() % 10;
                printf("Nota %d: %d\n",j+1,notas[i][j]);//Nota random del 0  al 10
            }
        }
    }
    return 0;
}