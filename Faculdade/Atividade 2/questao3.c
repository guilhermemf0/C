#include <stdio.h>

int main()
{
    char letra;
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || 
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("A letra %c é uma vogal.\n", letra);
    } else {
        printf("A letra %c não é uma vogal.\n", letra);
    }

    return 0;
}