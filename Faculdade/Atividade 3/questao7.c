#include <stdio.h>

int main() {
    int largura_altura;

    printf("Digite o valor unico da largura e altura: ");
    scanf("%d", &largura_altura);

    for (int i = 1; i <= largura_altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
