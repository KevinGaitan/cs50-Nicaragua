/*
 * Escrito por Jesús Manuel Mager Hois 
 * 
 * Descripción: Programa que genera listas
 *     aleatorias para después 
 *     ordenarlas por burguja.
 *
 * Lenguaje: ANSI C99
 *
 * Bajo licencia GPL 3
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define V_SIZE 10

int cont;

// Herramientas
void gen_rand(int v[], int size);
void print_vect(int v[], int size);
void swap(int v[], int o, int d);

//Algoritmos
void bubble_sort(int v[], int size);

int main(int argc, char *argv[])
{
 int v[V_SIZE];

 printf("############ Ordenando con Burbuja ############\n");
 gen_rand(v, V_SIZE);
 printf("No. Aleatorios: ");
 print_vect(v, V_SIZE);

 bubble_sort(v, V_SIZE);
 printf("No. Ordenados : ");

 print_vect(v, V_SIZE);
 return 0;
}


void gen_rand(int v[], int size)
{
 int i;

 cont = cont + 1;
 srand(time(NULL)*cont);
 for(i=0; i<size; i++)
  v[i]=rand()%100;
}


void print_vect(int v[], int size)
{
 int i;
 printf("[ ");
 for(i=0; i<size; i++)
  printf("%d ", v[i]);
 printf("]\n");
}

void swap(int v[], int o, int d)
{
 int temp;
 temp=v[d];
 v[d]=v[o];
 v[o]=temp;
}

void bubble_sort(int v[], int size)
{
 int i, j;
 for (j=0; j<size; j++)
  for (i=0; i<size-1; i++)
   if(v[i]>v[i+1])
    swap(v, i, i+1);
}