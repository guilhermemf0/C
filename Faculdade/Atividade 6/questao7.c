#include <stdio.h>

int main() {
    //Criação e Definição de Vetores
    int vet1[] = {1, 2, 3, 4, 5, 6, 7};
    int vet2[] = {7, 6, 5, 4, 3, 2, 1};

    //Ponteiro 1 aponta para o vetor 1 ou seja, seu valor atual é 1
    int *ptr1 = vet1;
    //Ponteiro 2 aponta para o vetor 1 + 3, se fosse + 0, seria 1, se fosse + 1, seria 2, se fosse + 2, seria 3 e como é +3, seu valor é 4
    int *ptr2 = vet1 + 3;
    //Ponteiro 3 aponta para o vetor 2 + 5, seguindo o racicínio acima, o vet2 + 5 seria o 2, entao o valor do ponteiro atualmente é 2
    int *ptr3 = vet2 + 5;

    //Valor do Ponteiro 1 + 1, então vai de 1 para 2, logo o vet1[0] vai ser 2 agora
    (*ptr1)++;
    //Valor do Ponteiro 2 + 1, então vai de 4 para 5, logo o vet1[3] vai ser 5 agora
    (*ptr2)++;
    //Valor do Ponteiro 3 - 1, então vai de 2 para 1, logo o vet2[5] vai
    (*ptr3)--;

    //A saída seria 2 e 5
    printf("vet1[0]: %d, vet1[3]: %d\n", vet1[0], vet1[3]);
    //A saída seria 7 e 1
    printf("vet2[0]: %d, vet2[5]: %d\n", vet2[0], vet2[5]);

    return 0;
}
