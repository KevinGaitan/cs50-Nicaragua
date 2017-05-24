#include <stdio.h>
#include <string.h>


FILE *archivo;
void iterate(char *str, int idx, int len) {
    char c;

    if (idx < (len - 1)) {
        for (c = 'a'; c <= 'z'; ++c) {
            str[idx] = c;

            iterate(str, idx + 1, len);
        }
    } else {
        for (c = 'a'; c <= 'z'; ++c) {
            str[idx] = c;
            
            fprintf(archivo,"%s\n", str);
        }
    }
}

#define LEN 8

int main(void) {
    char str[LEN + 1];

    memset(str, 0, LEN + 1);

    archivo  = fopen("combinations.txt","w");
    iterate(str, 0, LEN);
    fclose(archivo);
}