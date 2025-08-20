#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char string[MAX];
    int contagem = 0;

    printf("Digite uma String:\n");
    fgets(string, MAX, stdin);

    char *p = string;

    for(int i = 0; *(p+i) != '\0'; i++){
        if(*(p+i) == ' ') contagem++;
    }

    printf("Quantidade de Espaços: %i", contagem);
    return 0;
}
