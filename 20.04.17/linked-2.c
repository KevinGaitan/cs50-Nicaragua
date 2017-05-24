#include <cs50.h>
#include <stdio.h>

//Se definie la estructura nodo con la que se trabajara para crear las listas enlazadas
struct nodo{
    int dato;
    struct nodo *siguiente;
};

int insertarI(int dato);
int insertarF(int dato);
void eliminar(int indice);


struct nodo *primero = NULL;//Inicio de la lista enlazada
struct nodo *ultimo = NULL;//Ultimo elemento ingresado
int tam = 0;

int main(void){
    
    //Agregamos elementos
    insertarI(15);
    insertarI(44);
    insertarI(10);
    insertarI(18);
    //Mostremos los elementos de la lista
    struct nodo *actual = primero;
    do{
        printf("%d\n",actual->dato);
        actual = actual->siguiente;
    }while(actual != NULL);
    
    eliminar(2);
    
    actual = primero;
    do{
        printf("%d\n",actual->dato);
        actual = actual->siguiente;
    }while(actual != NULL);
}

void eliminar(int indice){
    //Si no hay datos en la lista o el indice dado no existe 
    //No se eliminara nada
    if(indice > tam || tam == 0)
        return;
    
    struct nodo *temp ;
        
    //Tenemos los siguientes casos
    if(indice == 0)//Si el que se quiere eliminar es el primero
    {
        temp = primero;
        primero = temp->siguiente;
        free(temp);
        tam -=1;
        return;
    }
    
    printf("\n\n");
    struct nodo *anterior = primero;
    int cont = 1;
    
    struct nodo *actual =  primero->siguiente;
    do{
        if(cont == indice -1){
            anterior->siguiente = actual->siguiente;
            free(actual);
            tam -=1;
            return;
        }
        cont +=1;
        anterior = actual;
        actual = anterior->siguiente;
    }while(actual != NULL);
}

int insertarI(int dato){
    
    struct nodo *nuevo = malloc(sizeof(struct nodo));

    if(nuevo ==NULL){
        printf("No hay suficiente memoria!!!");
        return -1;
    }
    nuevo->dato = dato;

    //Evaluamos los siguientes casos
    if(primero == NULL){//Si el nodo raiz es nulo entonces la lista esta vacia
        primero = nuevo; 
        ultimo = primero;
    
        tam += 1;
    }
    else{
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    
        tam += 1;
    }
    return 0;
}

int insertarF(int dato){
    
    struct nodo *nuevo = malloc(sizeof(struct nodo));

    if(nuevo ==NULL){
        printf("No hay suficiente memoria!!!");
        return -1;
    }
    nuevo->dato = dato;

    //Evaluamos los siguientes casos
    if(primero == NULL){//Si el nodo raiz es nulo entonces la lista esta vacia
        primero = nuevo; 
        ultimo = primero;
    
        tam += 1;
    }
    else{
        nuevo->siguiente = primero;
        primero = nuevo;
    
        tam += 1;
    }
    return 0;
}