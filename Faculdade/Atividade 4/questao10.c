#include <stdio.h>
#include <math.h>

float calcular_delta(float a, float b, float c) {
    return (b * b) - 4 * a * c;
}

void calcular_raizes(float a, float b, float c) {
    float delta = calcular_delta(a, b, c);

    if (delta < 0) {
        printf("\nNão existem raízes reais.\n");
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("\nA equação possui uma raiz real: x = %.2f\n", x);
    } else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nAs raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
}

int main() {
    float a, b, c;

    printf("*** Equação do 2º grau: ax² + bx + c = 0 ***\n");

    printf("  Digite o valor de a: ");
    scanf("%f", &a);

    printf("  Digite o valor de b: ");
    scanf("%f", &b);

    printf("  Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
        return 0;
    }

    calcular_raizes(a, b, c);

    return 0;
}