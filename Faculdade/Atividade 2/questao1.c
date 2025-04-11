#include <stdio.h>

int main()
{
    float num1, num2, num3;
    float media;
    
    printf("Digite os números: \n");
    scanf("%f%f%f", &num1, &num2, &num3);
    
    media = (num1 + num2 + num3)/3;
    
    if(num1 > media){
        printf("O número 1 (%.2f) está acima da média (%.2f).", num1, media);
    }
    if(num2 > media){
        printf("O número 2 (%.2f) está acima da média (%.2f).", num2, media);
    }
    if(num3 > media){
        printf("O número 1 (%.2f) está acima da média (%.2f).", num3, media);
    } else if(num1, num2, num3 == media) {
        printf("Todos os números são iguais, logo a média é igual aos números. (%.2f)", media);
    }

    return 0;
}