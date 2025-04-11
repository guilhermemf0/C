#include <stdio.h>

int main()
{
	int valor;
	int cafe = 7;
	printf("Digite o valor para a compra de Café: ");
	scanf("%d", &valor);
	if (valor >= cafe){
		if (valor % 5 == 0){
			printf("Dinheiro aceito! \n Calculando a quantia de Cafés e a sobra....\n");
			int resultado = valor / cafe;
			int sobra = valor % cafe;
			printf("Você comprou %d Café(s), o dinheiro perdido foi de %d real(is).", resultado, sobra);
		} else {
			printf("Dinheiro recusado! O valor inserido não está em notas de 5.");
		}
	} else {
		if(valor == 5){
			printf("O dinheiro inserido não é suficiente para a compra de um Café.");
		} else {
			printf("Dinheiro recusado! O valor inserido não está em notas de 5.");
		}
	}
		
	return 0;
}