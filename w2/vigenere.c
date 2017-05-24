#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


void vigenere(string clave,string texto_base);

int main(int argc, string argv[]){
    
    if(argc != 2){
        printf("Escribe: \"./vigenere aBcD...z \" \n");
        return 1;
    }
    //Verificamos que solo tenga letras validas
    for(int i =0, n = strlen(argv[1]);i<n;i++){
        if(!(isalpha(argv[1][i]))){
            printf("por favor solo letras -> aBcD...z"); 
            return 1;
             
        }
    }
    string t = GetString();
    
    vigenere(argv[1],t);
    printf("%s\n",t);
    return 0;
}

void vigenere(string clave,string texto_base){
    
    int salto = 0;
    int j = 0;
    int size2 = strlen(clave);
    int c;
    
    for(int i = 0, size = strlen(texto_base); i < size; i++){
        
        
        if(isalpha(clave[j]) && isalpha(texto_base[i])){
            salto = (int)(tolower(clave[j]) - 'a');
            
            if(islower(texto_base[i])){
                c = 'a';
            }
            else if(isupper(texto_base[i])){
                c = 'A';
            }
              
            texto_base[i] = (texto_base[i] - c + salto) %26 + c;
            
            j+=1;
            if(j >= size2){
                j = 0;
            }    
        }
    }
}