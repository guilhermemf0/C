#include <stdio.h>

int multiplicarN (int n1, int n2) {
    int multiplicacao = 0;

    for(int i = 0; i < n2; i++){
        multiplicacao += n1;
    }

    return multiplicacao;
}

int main() {
    int num1, num2;

    printf("Digite 2 numeros: ");
    scanf("%i %i", &num1, &num2);

    int resposta = multiplicarN(num1, num2);

    printf("Multiplicacao: %i", resposta);

    return 0;
}