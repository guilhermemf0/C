#include <stdio.h>

#define TAM 27

int main()
{
    char frase[TAM] = "nao gosto de programar em C";
    char *p = frase;

    for(int i = 4; i < TAM; i++)
        printf("%c", *(p+i));

    return 0;
}
