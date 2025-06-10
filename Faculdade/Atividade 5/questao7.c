#include <stdio.h>

void leVetor(int *vetor){
    printf("Digite os 10 números:\n");
    for(int i = 0; i < 10; i++){
        scanf("%i", &vetor[i]);
    }
}

void trocaMetades(int *vetor){
    for(int i = 0; i < 10; i++){
        if(i < 5){
            int temp = vetor[i+5];
            vetor[i+5] = vetor[i];
            vetor[i] = temp;
        }
    }
}

void imprimeVetor(int *vetor){
    printf("Saída: ");
    for(int i = 0; i < 10; i++){
        printf("%i ", vetor[i]);
    }
}


int main() {
    int vetor[10];
    
    leVetor(vetor);
    trocaMetades(vetor);
    imprimeVetor(vetor);
    
    return 0;
}