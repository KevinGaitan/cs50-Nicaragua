#include <cs50.h>
#include <stdio.h>


//Se definie la estructura nodo con la que se trabajara para crear las listas enlazadas
struct nodo{
    int dato;
    struct nodo *siguiente;
};

struct nodo *primero = NULL;//Inicio de la lista enlazada
struct nodo *ultimo = NULL;//Ultimo elemento ingresado
    
int main(void){
    
    //Insertemos un nodo
    //Para ello asignarmeos memoria al nodo
    
    
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));//Reservamos un espacio en memoria del tama;o de struct nodo
    
    nuevo.dato = 12;//error ?
    if(primero == NULL){
        primero = nuevo;
        ultimo = primero;
    }
    else{
        ultimo.siguiente = nuevo;//error ?
        ultimo = nuevo;
    }
    
    
    //Debido a que estamos usando punteros de estrucutras accederemos 
    //a los datos con -> en vez de que con flecha
    
    return 0;
}