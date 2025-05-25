#include <stdio.h>
#include <stdlib.h>

int somaMultiplos(int limite, int divisor){
    if(divisor < 0) exit(1);
    int soma = 0;

    for(int i = divisor; i <= limite; i++){
        if(i == divisor) {
            soma += i;
            printf("\n%i ", i);
            continue;
        }

        if(i % divisor == 0){
            soma += i;
            printf("+ %i ", i);
        }
    }

    return soma;
}

int main(){
    int limite, divisor, soma;

    printf("***Soma de Múltiplos***\n\n");
    printf("  Múltiplos do número: ");
    scanf("%i", &divisor);

    printf("  Limite da Soma: ");
    scanf("%i", &limite);

    soma = somaMultiplos(limite, divisor);

    printf("\n\nA soma dos múltiplos resulta em: %i", soma);

    return 0;
}