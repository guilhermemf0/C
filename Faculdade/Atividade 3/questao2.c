#include <stdio.h>

int main() {
    double s = 0, dividendo = 1, divisor = 1, operacao;

    for(int i = 0; i < 100; i++) {
        operacao = dividendo / divisor;
        s += operacao;           
        dividendo *= 2;
        divisor++;                
    }

    printf("A soma total vai ser: %.0lf\n", s);

    return 0;
}
