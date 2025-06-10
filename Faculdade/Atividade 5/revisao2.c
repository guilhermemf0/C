#include <stdio.h> //tem mais 18 anos? bebida dentro duma funcao

void verificaIdade(char confirmacao){
    if (confirmacao == 'S'|| confirmacao == 's'){
        printf("pode beber drinks");
    } else if (confirmacao == 'N'|| confirmacao == 'n'){
        printf("pode beber bebidas apenas sem alccol");
    } else {
        printf("Escreve certo, imbecil");
    }
}

int main () {
    char peido;
    printf("Voce tem 18 anos ou mais? (S/N)");
    scanf(" %c", &peido);

    verificaIdade(peido);

    return 0;
}