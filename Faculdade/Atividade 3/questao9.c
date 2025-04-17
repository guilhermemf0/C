#include <stdio.h>

int main() {
    int codigo;
    float consumo_mensal, litro = 3.77, aumento, preco;
    char continuar;

    do {
        printf("Informe o codigo do posto: ");
        scanf("%d", &codigo);

        printf("Informe o consumo mensal (L): ");
        scanf("%f", &consumo_mensal);

        if(consumo_mensal <= 50000){aumento = 1.27;} else {aumento = 1.18;}

        preco = consumo_mensal*litro*aumento;
        printf("O preco do posto (%d) a ser pago eh: %.2f\n", codigo, preco);
        printf("Preco por litro sem aumento: %.2f\n", litro);
        printf("Preco por litro com aumento: %.2f\n", litro*aumento);

        printf("Adicionar outro posto? (S/N): ");
        scanf(" %c", &continuar);
    } while(continuar == 'S' || continuar == 's');

    printf("Programa Finalizado.\n");

    return 0;
}