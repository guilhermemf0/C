#include <stdio.h>

int main(){
    float distancia, litro;
    char local[50];
    printf("Digite o local de origem: \n");
    scanf("%s", local);
    printf("Digite a distância até a UENP: (Em KM) \n");
    scanf("%f", &distancia);
    printf("Digite a quantia gasta de gasolina: (EM L) \n");
    scanf("%f", &litro);
    float consumo_litro = (distancia / litro);
    printf("A distância da UENP até %s é %.2f Km, nesse percurso é gasto %.2f litros, e o consumo médio é %.2f Km/L.", local, distancia, litro, consumo_litro);
    return 0;
}