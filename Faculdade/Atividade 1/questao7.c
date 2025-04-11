#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4;
    int peso1, peso2, peso3, peso4;

    printf("Digite as notas: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    printf("Digite os pesos: \n");
    scanf("%d %d %d %d", &peso1, &peso2, &peso3, &peso4);

    float mediaponderada = (nota1*peso1 + nota2*peso2 + nota3*peso3 + nota4*peso4) / (peso1 + peso2 + peso3 + peso4);

    printf("A média ponderada é %.2f\n", mediaponderada);

    return 0;
}