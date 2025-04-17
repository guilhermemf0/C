#include <stdio.h>

int main() {
    double s = 0, dividendo = 1, divisor = 1, operacao;

    while (dividendo <= 99 && divisor <= 50) {
        operacao = dividendo / divisor;
        s += operacao;           
        dividendo += 2;
        divisor++;                
    }

    printf("A soma total vai ser: %.2lf\n", s);

    return 0;
}