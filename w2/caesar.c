#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void ROT(string texto_base,int rotation);

int main(int argc, string argv[])
{
    
    if(argc != 2)
    {
        printf("Escribe \"./caesar un_numero\"\n");
    
        return 1;//Error
    }
    
    int k = atoi(argv[1]);
    
    if(k < 0)
    {
        printf("El numero no debe ser negativo\n");
    
        return 1;//Error
    }
    string t = GetString();
    ROT(t,k);
    printf("%s\n",t);
    
    return 0;
}

void ROT(string texto_base,int rotation){
    
    char c = ' ';
    
    for(int i = 0, size = strlen(texto_base); i<size; i++){
        if(isupper(texto_base[i]))
            c = 'A';
        else if(islower(texto_base[i]))
            c = 'a';
        else
            continue;
            
        texto_base[i] = (texto_base[i] - c + rotation) %26 + c;
    
    }
}
