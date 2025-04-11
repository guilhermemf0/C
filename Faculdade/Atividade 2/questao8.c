#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, x;
    
    printf("Digite os valores de a, b, c (ax² + bx + c):\n");
    scanf("%f%f%f", &a, &b, &c);
    
    float delta = (b * b) - (4 * a * c);
    
    if (delta < 0){
        printf("Não existe solução real para as raízes (delta negativo).\n");
    } else if(delta == 0){
        printf("Só existe uma solução real. (delta = 0). \n");
        float x = (-b)/ (2 * a);
        printf("A raíz é %.2f", x);
    } else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a); 
        
        printf("As raízes da equação são:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    
    return 0;
}