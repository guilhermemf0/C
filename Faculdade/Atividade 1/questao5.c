#include <stdio.h>

int main() {
    float preco_original, desconto, preco_final;
    
    printf("Digite o preço original e o desconto aplicado: \n");
    scanf("%f %f", &preco_original, &desconto);
    
    if (desconto >= 1) {
    		if (desconto <=99) {
    			preco_final = preco_original - preco_original*desconto/100;
    			printf("O preço do produto com desconto seria: %.2f", preco_final);
    		} else {
    			printf("Desconto acima ou igual a 100 não é aplicável.");
    		}
    } else {
    	preco_final = preco_original - preco_original*desconto;
    		printf("O preço do produto com desconto seria: %.2f", preco_final);
    }
    return 0;
}