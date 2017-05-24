#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){
    
    string full_name;
    
    full_name = GetString();
    
    bool ok = true;
    
    for(int i = 0, size = strlen(full_name); i < size ;i++)
    {
        if(full_name[i] != ' ')
        {
            if(ok)
            {
                printf("%c",toupper(full_name[i]));
                ok = false;
            }
        }
        else
        {
            ok = true;
        }
    }
    printf("\n");
    return 0;
}