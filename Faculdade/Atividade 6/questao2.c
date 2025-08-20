#include <stdio.h>

int main()
{
    int mat[4][4];
    int *p = (int *)mat;
    int contagem = 0;
    int numero;

    printf("Definindo a matriz\n");

    for(int i = 0; i < 16; i++){
        printf("Elemento %i: ", i+1);
        scanf("%i", (p+i));
    }

    printf("Escolha um numero: ");
    scanf("%i", &numero);

    printf("\n");
    for(int i = 0; i < 16; i++){
        printf("%i ", *(p+i));
        if((i+1) % 4 == 0) printf("\n");
        if(*(p+i) == numero) contagem++;
    }

    printf("\nO numero: %i, se repete %i vezes", numero, contagem);

    return 0;
}
