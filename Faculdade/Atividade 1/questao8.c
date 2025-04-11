#include <stdio.h>

int main(){
    float horas, valor_por_hora, salario;
    char confirmacao;
    printf("Digite a quantidade de horas trabalhadas e o valor por hora: \n");
    scanf("%f %f", &horas, &valor_por_hora);
    salario = horas * valor_por_hora;
    printf("As horas colocas são diárias? (S/N) \n");
    scanf(" %c", &confirmacao);
    if (confirmacao == 'S' || confirmacao == 's') {
        salario = salario * 30;
    }
    
    printf("O salário a ser recebido é de R$ %.2f\n", salario);
    return 0;
}