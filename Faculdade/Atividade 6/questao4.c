#include <stdio.h>

int main()
{
    int n;

    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int vet[n];
    int *p_inicio = vet;
    int *p_final = vet + (n-1);

    for(int i = 0; i < n; i++){
        printf("Elemento %i: ", i+1);
        scanf("%i", (p_inicio+i));
    }

    if(n % 2 == 0) printf("Os dois ponteiros não irão se encontrar, pois o tamanho do vetor é par, consequentemente, não tendo um meio");
    else {
        while(p_inicio != p_final) {
            p_inicio++;
            p_final--;
        }
        printf("Os ponteiros se encontraram no número: %i", *p_inicio);
    }
}
