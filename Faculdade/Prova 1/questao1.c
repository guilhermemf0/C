#include <stdio.h>

int main(){
    float denominador1 = 350, denominador2 = 300, equecao_repetida, soma = 0;

    while(denominador2 > 0){
        equecao_repetida = (2 / denominador1) - (5 / denominador2);
        soma += equecao_repetida;
        denominador1 -= 100;
        denominador2 -= 100;
    }

    printf("Soma: %.2f\n", soma);
    return 0;
}