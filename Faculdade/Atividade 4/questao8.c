#include <stdio.h>
#include <stdlib.h>

void divisores(int n){
    if(n <= 0) exit(1);
    int divisores = 1;
    int primeiro = 1;

    for(int i = n; i > 0; i--){
        if(n % i == 0){
            if(primeiro){
                printf("\n  Divisores de N: %i", i);
                primeiro = 0;
            } else {
                printf(", %i", i);
                divisores++;
            }
        }
    }

    printf("\n  Total de Divisores: %i", divisores);
}

int main() {
    int numero;

    printf("***Divisores de N***\n");
    printf("  Valor de N: ");
    scanf("%i", &numero);

    divisores(numero);

    return 0;
}