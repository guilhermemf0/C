#include <stdio.h>

int main() {
    int num, i;
    int divisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Seus divisores sao: \n1\n");
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                printf("%d\n", i);
                divisores++;
            }
        }
        printf("%d\n", num);
        printf("O numero %d tem %d divisores.\n", num, divisores + 2);
    } else {
        printf("Numero invalido. Digite um numero inteiro positivo.\n");
    }

    return 0;
}
