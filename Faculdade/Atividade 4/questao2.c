#include <stdio.h>

void verificaVogal(char letra){
    if(
        letra == 'a' || letra == 'A' ||
        letra == 'e' || letra == 'E' ||
        letra == 'i' || letra == 'I' ||
        letra == 'o' || letra == 'O' ||
        letra == 'u' || letra == 'U'
    ) printf("  A letra '%c' é uma vogal.", letra);
    else printf("  A letra '%c' não é uma vogal.", letra);
}

int main(){
    char letra;
    
    printf("***Verificador de Vogais***\n\n");
    printf("  Letra: ");
    scanf(" %c", &letra);

    verificaVogal(letra);

    return 0;
}