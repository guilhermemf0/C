#include <stdio.h>

int main(){
    float tamanho, velocidade, tempo;
    printf("Digite o tamanho do arquivo em MB: \n");
    scanf("%f", &tamanho);
    printf("Digite a velocidade de internet em Mbps: \n");
    scanf("%f", &velocidade);
    tempo = tamanho / velocidade * 8;
    printf("O tempo estimado para download é de %.2f segundos.", tempo);
    return 0;
}