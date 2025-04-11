#include <stdio.h>

int main() {
    char jogo, companhia, horario;

    printf("Qual voce prefere jogar?\n");
    printf("A) Valorant\n");
    printf("B) Minecraft\n");
    printf("Escolha (A/B): ");
    scanf(" %c", &jogo);

    printf("\nVoce prefere jogar:\n");
    printf("A) Sozinho\n");
    printf("B) Com amigos\n");
    printf("Escolha (A/B): ");
    scanf(" %c", &companhia);

    printf("\nQuando voce prefere jogar?\n");
    printf("A) Durante o dia\n");
    printf("B) A noite\n");
    printf("Escolha (A/B): ");
    scanf(" %c", &horario);

    // Determina o perfil com base nas 3 respostas
    if (jogo == 'A' && companhia == 'B' && horario == 'B') {
        printf("\nPerfil: Gamer competitivo noturno!\n");
    } else if (jogo == 'B' && companhia == 'A' && horario == 'A') {
        printf("\nPerfil: Gamer criativo e tranquilo!\n");
    } else if (jogo == 'B' && companhia == 'B' && horario == 'B') {
        printf("\nPerfil: Gamer casual noturno!\n");
    } else if (jogo == 'A' && companhia == 'A' && horario == 'A') {
        printf("\nPerfil: Gamer focado e estratégico!\n");
    } else {
        printf("\nPerfil: Gamer versátil!\n");
    }

    return 0;
}
