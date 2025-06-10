#include <stdio.h>

void leVetores(int *vet1, int *vet2){
    printf("Digite os 6 números da Megasena:\n");
    for(int i = 0; i < 6; i++){
        scanf("%i", &vet1[i]);
    }
    
    printf("Digite os 7 números do Apostador:\n");
    for(int i = 0; i < 7; i++){
        scanf("%i", &vet2[i]);
    }
}

int acertos(int *vet1, int *vet2){
    int contagem = 0;
    int usados[7] = {0};

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j++){
            if(vet1[i] == vet2[j] && usados[j] == 0){
                contagem++;
                usados[j] = 1;
                break;        
            }
        }
    }
    
    return contagem;
}

int main() {
    int vet1[6], vet2[7];
    
    leVetores(vet1, vet2);
    
    printf("Acertos: %i\n", acertos(vet1, vet2));
    
    return 0;
}
