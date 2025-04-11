#include <stdio.h>

int main() {
    float custo, venda, lucro;

    printf("Digite o custo de aquisição do produto: ");
    scanf("%f", &custo);
    
    printf("Digite o valor de venda do produto: ");
    scanf("%f", &venda);

    lucro = venda - custo;

    printf("O lucro obtido foi de R$ %.2f\n", lucro);

    return 0;
}