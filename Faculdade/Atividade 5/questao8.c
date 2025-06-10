#include <stdio.h>

void leVetores(int *vet1, int *vet2, int tam){
    printf("Digite os %i números do Vetor 1:\n", tam);
    for(int i = 0; i < tam; i++){
        scanf("%i", &vet1[i]);
    }
    
    printf("Digite os %i números do Vetor 2:\n", tam);
    for(int i = 0; i < tam; i++){
        scanf("%i", &vet2[i]);
    }
}

int comparaVetores(int *vet1, int *vet2, int tam){
    int contagem = 0;
    for(int i = 0; i < tam; i++){
        if(vet1[i] == vet2[i]) contagem++;
    }
    
    return contagem;
}

int main() {
    int tamanho;
    
    printf("Tamanho dos vetores: ");
    scanf("%i", &tamanho);
    
    int vet1[tamanho], vet2[tamanho];
    
    leVetores(vet1, vet2, tamanho);
    printf("Elementos Iguais de mesma Posição: %i", comparaVetores(vet1, vet2, tamanho));
    
    return 0;
}