#include <stdio.h>
#include <stdlib.h>

float imc(float peso, float altura){
    if(peso < 0 || altura < 0) {
        printf("Valores incorretos.");
        exit(1);
    }
    return peso/(altura*altura);
}

void classificao(float imc){
    printf("Classifição: ");
    if(imc >= 30.0) {
        printf("Obeso");
    } else if(imc >= 25.0) {
        printf("Sobrepeso");
    } else if(imc >= 18.5) {
        printf("Peso normal");
    } else {
        printf("Abaixo do peso");
    }
}

int main()
{
    float peso, altura, resultado;
    
    printf("***Calculo-IMC***\n");
    printf("Digite seu peso (quilogramas): ");
    scanf("%f", &peso);
    
    printf("Digite sua altura (metros): ");
    scanf("%f", &altura);
    
    resultado = imc(peso, altura);
    
    printf("IMC: %.2f\n", resultado);
    classificao(resultado);
    
    return 0;
}
