#include <stdio.h>

void leVetores(int *vet1, int *vet2) {
	printf("Digite os 10 números do Vetor 1:\n");
	for(int i = 0; i < 10; i++) {
		scanf("%i", &vet1[i]);
	}

	printf("Digite os 10 números do Vetor 2:\n");
	for(int i = 0; i < 10; i++) {
		scanf("%i", &vet2[i]);
	}
}

void subtracaoVetores(int *vet1, int *vet2, int *vet3){
    for(int i = 0; i < 10; i++) {
		vet3[i] = vet1[i] - vet2[i];
	}
}

void imprimeVetor3(int *vet3){
    printf("Vetor 3: ");
    for(int i = 0; i < 10; i++) {
		printf("%i ", vet3[i]);
	}
}

int main() {
	int vet1[10], vet2[10], vet3[10];

	leVetores(vet1, vet2);
	subtracaoVetores(vet1, vet2, vet3);
	imprimeVetor3(vet3);

	return 0;
}