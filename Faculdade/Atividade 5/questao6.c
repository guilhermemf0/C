#include <stdio.h>

void leVetor(int *vetor){
    printf("Digite os 12 números:\n");
    for(int i = 0; i < 12; i++){
        scanf("%i", &vetor[i]);
    }
}

void multiplosDe3(int *vetor){
    printf("Posições de Múltiplos de 3:\n");
    for(int i = 0; i < 12; i++){
        if(vetor[i] % 3 == 0){
            printf("Posição - %i\n", i+1);
        }
    }
}

int main() {
    int vetor[12];
    
    leVetor(vetor);
    multiplosDe3(vetor);
    
    return 0;
}