#include <stdio.h>

int main() {
    int dias, semanas, dias_restantes;

    printf("Digite a quantidade de dias até a prova: ");
    scanf("%d", &dias);
    
    semanas = dias / 7;
    dias_restantes = dias % 7;

    printf("Faltam %d semanas e %d dias para a prova.\n", semanas, dias_restantes);

    return 0;
}