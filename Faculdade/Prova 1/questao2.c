#include <stdio.h>

int main() {
    char aluno, item;
    float prato_feito = 20, refrigerante = 5, suco = 3, salgado = 6;
    float total_liquido_a, total_liquido_b, total_liquido_c, total_liquido_d;
    float total_liquido, total_bruto, desconto = 1.0;
    int quantidade, continuar = 1;
    total_liquido = total_bruto = total_liquido_b = total_liquido_c = total_liquido_d = 0;

    printf("Aluno da Instituicao? (S/N) ");
    scanf(" %c", &aluno);

    if(aluno == 'S' || aluno == 's') {
        desconto = 0.87;
    }

    while(continuar == 1){
        printf("Qual item será consumido? (A/B/C/D) \n");
        scanf(" %c", &item);
        printf("Qual a quantidade? \n");
        scanf("%d", &quantidade);

        if(item == 'A' || item == 'a') {
            total_liquido_a += prato_feito * quantidade * desconto;
            total_liquido += prato_feito * quantidade * desconto;
            total_bruto += prato_feito * quantidade;
        } else if(item == 'B' || item == 'b') {
            total_liquido_b += refrigerante * quantidade * desconto;
            total_liquido += refrigerante* quantidade * desconto;
            total_bruto += refrigerante * quantidade;
        } else if(item == 'C' || item == 'c') {
            total_liquido_c += suco * quantidade * desconto;
            total_liquido += suco * quantidade * desconto;
            total_bruto += suco * quantidade;
        } else if(item == 'D' || item == 'd') {
            total_liquido_d += salgado * quantidade * desconto;
            total_liquido += salgado * quantidade * desconto;
            total_bruto += salgado * quantidade;
        } else {
            printf("Item inválido.\n");
            continue;
        }

        printf("Deseja continuar? (1 - Sim, 0 - Não)\n");
        scanf("%d", &continuar);
    }

    printf("Total bruto: %.2f\n", total_bruto);
    printf("Total liquido: %.2f\n", total_liquido);
    printf("Total liquido A: %.2f\n", total_liquido_a);
    printf("Total liquido B: %.2f\n", total_liquido_b);
    printf("Total liquido C: %.2f\n", total_liquido_c);
    printf("Total liquido D: %.2f\n", total_liquido_d);

    return 0;
}