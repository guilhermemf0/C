#include <stdio.h>
#include <stdlib.h>

void intervalo(int x, int y) {
    if(x > y) exit(1);
    
    int primeiro = 1;

    for( ; x <= y; x++){
        if(x % 3 == 0){
            if(primeiro){
                printf("%i ", x);
                primeiro = 0;
            }
            else printf("| %i ", x);
        }
    }
}

int main() {
    int inicio, fim;

    printf("***Múltiplos de 3 entre X e Y***");

    printf("\n  Início (Valor de X): ");
    scanf("%i", &inicio);

    printf("  Fim (Valor de Y): ");
    scanf("%i", &fim);

    printf("\n Múltiplos: ");
    intervalo(inicio, fim);

    return 0;
}