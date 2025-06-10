#include <stdio.h>

#define MAX 1000 

int main() {
    int numeros[MAX];
    int contador = 0;
    int valor;
    int dentroIntervalo = 0;

    printf("Digite os números (-1 para encerrar):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor == -1)
            break;

        if (contador < MAX) {
            numeros[contador] = valor;
            contador++;
        } else {
            printf("Limite máximo de números atingido.\n");
            break;
        }
    }

    for (int i = 0; i < contador; i++) {
        if (numeros[i] >= 15 && numeros[i] <= 45) {
            dentroIntervalo++;
        }
    }

    printf("Quantidade de números entre 15 e 45: %d\n", dentroIntervalo);

    return 0;
}
