#include <stdio.h>

int main() {
    int alunos, i, nota, media, notatotal = 0;
    int alunos_ap = 0;
    float exame = 0, reprovado = 0;
    
    printf("Numero de Alunos: ");
    scanf("%d", &alunos);
    
    for(i = 1; i <= alunos; i++){
        printf("Aluno %d | Nota: ", i);
        scanf("%d", &nota);
        notatotal += nota;
        if(nota >= 7) alunos_ap++;
        if(nota < 7 && nota >= 4) exame++;
        if(nota < 4) reprovado++;
    }
    
    media = notatotal/alunos;
    int percentual_exame = (exame/alunos)*100;
    int percentual_reprovado = (reprovado/alunos)*100;
    
    printf("Quantidade de Alunos aprovados: %d \n", alunos_ap);
    printf("Media da turma: %d \n", media);
    printf("Percentual - Exame: %i%\n", percentual_exame);
    printf("Percentual - Reprovado: %i%\n", percentual_reprovado);

    return 0;
}
