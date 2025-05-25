#include <stdio.h>

int main() {
    int candidatos, idade, total_idade = 0, sexo, n_vestibulares, aprovados, mulheres = 0, homens = 0, n = 0;
    float percentual_aprovados, media_idade, percentual_n;

    printf("Quantos candidatos fizeram vestibular? ");
    scanf("%d", &candidatos);

    printf("Quantos candidatos foram aprovados? ");
    scanf("%d", &aprovados);

    for(int i = 1; i <= aprovados; i++) {
        printf("Candidato %d:\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        total_idade += idade;

        printf("Sexo (1 - Feminino, 0 - Masculino): ");
        scanf("%d", &sexo);

        if(sexo == 1) mulheres++;
        if(sexo == 0) homens++;
        if(sexo == -1) break;

        printf("Quantos vestibulares fez? ");
        scanf("%d", &n_vestibulares);

        if(n_vestibulares >= 2) {
            n++;
        }
    }

    percentual_aprovados = (float)aprovados / candidatos * 100;
    media_idade = (float)total_idade / aprovados;
    percentual_n = (float)n / candidatos * 100;

    printf("\nPercentual de aprovados: %.2f%%\n", percentual_aprovados);
    printf("Media de idade dos aprovados: %.2f\n", media_idade);
    printf("Mulheres Aprovadas: %d\n", mulheres);
    printf("Homens Aprovados: %d\n", homens);
    printf("Percentual de candidatos que fizeram mais de 2 vestibulares: %.2f%%\n", percentual_n);
}