#include <stdio.h>

int main() {
    char tipo;
    float litros, preco_litro, preco_total, desconto, preco_final;

    printf("Tipo de combustivel (e - etanol, g - gasolina): ");
    scanf(" %c", &tipo);

    printf("Quantidade de litros: ");
    scanf("%f", &litros);

    // Define o preço por litro e o desconto
    if (tipo == 'e') {
        preco_litro = 4.50;
        if (litros <= 20)
            desconto = 0.04;
        else
            desconto = 0.07;
    } else if (tipo == 'g') {
        preco_litro = 5.80;
        if (litros <= 20)
            desconto = 0.05;
        else
            desconto = 0.09;
    } else {
        printf("Tipo de combustivel invalido.\n");
        return 1;
    }

    // Cálculos
    preco_total = preco_litro * litros;
    float valor_desconto = preco_total * desconto;
    preco_final = preco_total - valor_desconto;

    // Exibe os resultados
    printf("\nPreco total sem desconto: R$ %.2f\n", preco_total);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Preco final a pagar: R$ %.2f\n", preco_final);

    return 0;
}
