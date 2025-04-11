#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    
    if (num == 0){
        printf("O número escolhido é igual a zero. (%i)", num);
    } else if(num > 0){
        printf("O número escolhido é positivo e ");
        if(num % 2 == 0){
            printf("par. (Número: %i).", num);
        } else {
            printf("ímpar. (Número: %i).", num);
        }
    } else {
        printf("O número escolhido é negativo e ");
        if(num % 2 == 0){
            printf("par. (Número: %i).", num);
        } else {
            printf("ímpar. (Número: %i).", num);
        }
    }
    
    return 0;
}