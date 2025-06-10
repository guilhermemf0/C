#include <stdio.h>

void leVetor(int *vetor){
    for(int i = 0; i < 51; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &vetor[i]);
    }    
}

void verificaUltimoNumero(int *vetor){
    int contagem = 0;
    printf("\nO último número do vetor (%i) está presente nas posições: \n", vetor[50]);
    for(int i = 0; i < 50; i++){
        if(vetor[50] == vetor[i]){
            printf("Posição - %i\n", i+1);
            contagem++;
        }
    }
    printf("O último número do vetor se repete: %i vezes", contagem);
}

int main()
{
    int vetor[51];
    
    leVetor(vetor);
    verificaUltimoNumero(vetor);

    return 0;
}
