/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"



/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    
    return binarySearch(value,values,0,n);
}



//<Function Name="BinarySearch", Description="Implementacion de busqueda binaria"/>
//<Parameter Name="value", Description="El numero que se buscara en el arreglo"/>
//<Parameter Name="values",Description="Serie de numeros donde se buscara en el arreglo"/>
//<Parameter Name="n",Description="Tama;o del arreglo de numeros"/>
bool binarySearch(int value, int values[],int min,int max){
    //n is the limit
    int midPoint = 0;
    if(max < min){
        return false;
    }
    else{
        if((min+max) % 2 == 0)//Par
            midPoint = (min+max)/2;
        else
          midPoint = (min+max+1)/2;
    }
    
    if(values[midPoint] < value){
        binarySearch(value,values,midPoint+1,max);//A la derecha
    }
    else if (values[midPoint] > value){
        binarySearch(value,values,min,midPoint-1);
    }
    else{
        return true;
    }
    return false;
 
}


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    //Implementacion de burbuja
    int order = 0;
    do{ 
        int anterior = 0;
        for(int i = 1; i < n; i ++){
            if(values[anterior] > values[i]){
                int swap = values[i];
                values[i] = values[anterior];
                values[anterior] = swap;
            
                order = 1;
            }
            anterior = i;
        }
    }while(order == 1);
    // TODO: implement an O(n^2) sorting algorithm
    return;
}
