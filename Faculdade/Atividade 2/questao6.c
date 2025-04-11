#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Digite os números: \n");
    scanf("%i%i%i", &num1, &num2, &num3);
    
    if(num1 < num2 && num1 < num3){
        printf("O número 1 é o menor número dentro todos.");
    } else if(num2 < num1 && num2 < num3){
        printf("O número 2 é o menor número dentro todos.");
    } else if(num3 < num1 && num3 < num2){
        printf("O número 3 é o menor número dentro todos.");
    } else if(num1 == num2 && num1 == num3) {
        printf("Os números são iguais, logo todos são menores");
    } else if(num1 == num2){
        printf("O número 1 e o número 2 são os menores");
    } else if(num1 == num3){
        printf("O número 1 e o número 3 são os menores");
    } else if(num2 == num3){
        printf("O número 2 e o número 3 são os menores");
    }

    return 0;
}