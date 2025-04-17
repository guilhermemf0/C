#include <stdio.h>

int main() {
    int num1, num2, i, multiplicar;
    
    printf("Informe os dois numeros para multiplicar: \n");
    scanf("%i%i", &num1, &num2);
    
    multiplicar = num1;
    
    for(i = 1; i < num2; i++){
        num1 += multiplicar;
    }
    
    printf("Resultado: %i", num1);
    return 0;
}