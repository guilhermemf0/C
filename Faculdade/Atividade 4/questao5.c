#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    if(n <= 0) exit(1);
    int soma = 1;
    
    printf("1 ");
    for(int i = 2; i <= n; i++){
        soma += i;
        printf("+ %i ", i);
    }

    return soma;
}

int main(){
    int n, somatoria;

    printf("  Valor de N (Positivo): ");
    scanf("%i", &n);
    printf("  \nSoma de Inteiros - 1 ao N:\n  ");
    somatoria = soma(n);

    printf(" = %i", somatoria);

    return 0;
}