#include <stdio.h>
#include <stdlib.h>

void numeros(int n){
    if(n <= 0) exit(1);

    for( ; n > 0; n--){
        if(n == 1) { printf("%i", n); break;}
        printf("%i, ", n);
    }
}

int main(){
    int n;

    printf("  Valor de N (Positivo): ");
    scanf("%i", &n);
    printf("  \nValores de N até 1:\n  ");
    numeros(n);

    return 0;
}