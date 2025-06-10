#include <stdio.h>

void leVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &vetor[i]);
    }    
}

int total_ocorrencias(int *vetor, int tamanho){
    int contagem = 0;
    for(int i = 0; i < tamanho; i++){
        if(vetor[tamanho-1] == vetor[i]){
            contagem++;
        }
    }
    return contagem;
}

int main()
{
    int tamanho;
    
    printf("Quantos números será armazenado? ");
    scanf("%i", &tamanho);
    
    int vetor[tamanho];
    
    leVetor(vetor, tamanho);
    printf("O último número do vetor aparece: %i vezes", total_ocorrencias(vetor, tamanho)); 
    
    return 0;
}
