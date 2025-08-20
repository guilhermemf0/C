#include <stdio.h>

#define MAX 255

int main() {
    char str[MAX], caractere;
    int count = 0;
    char *p = str;

    printf("Entre com a string: ");
    fgets(str, MAX, stdin);

    printf("Entre com o caractere: ");
    scanf(" %c", &caractere);

    for (int i = 0; *(p+i) != '\0'; i++) {
        if (*(p+i) == caractere) {
            printf("%d\n", i);
            count++;
        }
    }

    if (count == 0) {
        printf("-1\n");
    }

    return 0;
}
