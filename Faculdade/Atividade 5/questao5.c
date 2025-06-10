#include <stdio.h>

void leVetor(float *vetor, int tamanho){
    printf("Digite os %i números:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor[i]);
    }
}

void ordemCrescente(float *vetor, int tamanho){
    for(int i = 0; i < tamanho-1; i++){
        if(vetor[i] > vetor[i+1]){
            float temp = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = temp;
        }
    }
}

int main() {
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    
    float vetor[n];
    
    leVetor(vetor, n);
    ordemCrescente(vetor, n);
    
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }
    
    return 0;
}
