#include <stdio.h>

int main() {
    int num, i, eh_primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        eh_primo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                eh_primo = 0;
                break;
            }
        }
    }

    if (eh_primo) {
        printf("%d eh um numero primo.\n", num);
    } else {
        printf("%d NAO eh um numero primo.\n", num);
    }

    return 0;
}