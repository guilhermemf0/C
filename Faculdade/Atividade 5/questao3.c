#include <stdio.h>

void encontrarComuns(int *prog1, int *prog2, int tamanho1, int tamanho2){
    printf("\nAlunos cursando ambas as disciplinas:\n");
    int encontrados = 0;
    
    for(int i = 0; i < tamanho1; i++){
        for(int j = 0; j < tamanho2; j++){
            if(prog1[i] == prog2[j]){
                printf("Matrícula: %i\n", prog1[i]);
                encontrados++;
            }
        }
    }
    
    if (encontrados == 0) {
        printf("Nenhum aluno está cursando ambas as disciplinas.\n");
    }
    
    printf("Contagem de alunos em comum: %i", encontrados);
}

int main() {
    int tamanho1, tamanho2, i;
    
    printf("Digite a quantidade de alunos cursando Programação I: ");
    scanf("%i", &tamanho1);
    printf("Digite a quantidade de alunos cursando Programação II: ");
    scanf("%i", &tamanho2);
    
    int prog1[tamanho1], prog2[tamanho2];
    
    printf("Digite todas as matrículas dos alunos de Programação I:\n");
    for(i = 0; i < tamanho1; i++){
        printf("%i : ", i+1);
        scanf("%i", &prog1[i]);
    }
    printf("Digite todas as matrículas dos alunos de Programação II:\n");
    for(i = 0; i < tamanho2; i++){
        printf("%i : ", i+1);
        scanf("%i", &prog2[i]);
    }
    
    encontrarComuns(prog1, prog2, tamanho1, tamanho2);
    
    return 0;
}