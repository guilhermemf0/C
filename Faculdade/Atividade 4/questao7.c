#include <stdio.h>

int proximoEstado(int estadoAtual) {
    switch (estadoAtual) {
        case 0: 
            return 1; 
        case 1: 
            return 2; 
        case 2: 
            return 0;
        default:
            return -1;
    }
}

void exibirEstado(int estado) {
    switch (estado) {
        case 0:
            printf("\nVermelho");
            break;
        case 1:
            printf("\nVerde");
            break;
        case 2:
            printf("\nAmarelo");
            break;
        default:
            printf("\nEstado inválido");
            break;
    }
}

int main() {
    int estado, alteracoes;

    printf("***Semáforo***\n");
    printf("  Qual é o estado atual?\n");
    printf("  [0] Vermelho | [1] Verde | [2] Amarelo :  ");
    scanf("%i", &estado);
    
    printf("  Quantas alterações? ");
    scanf("%i", &alteracoes);

    for (int i = 0; i < alteracoes; i++) {
        exibirEstado(estado);
        estado = proximoEstado(estado);
    }

    return 0;
}