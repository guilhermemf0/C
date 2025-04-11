#include <stdio.h>

int main()
{
    char categoria;
    float percurso, litros;
    
    printf("Me indique a categoria (a, b, c): ");
    scanf("%c", &categoria);
    
    float consumoa = 15;
    float consumob = 12;
    float consumoc = 10;
    
    if(categoria == 'a' || categoria == 'A'){
        printf("\n Me indique o percurso (km): ");
        scanf("%f", &percurso);
        if(percurso > 0){
            litros = percurso/consumoa;
            printf("O consumo estimado do combustível do carro é de %.2f L. (%.0f km/L)", litros, consumoa);
        }
        
    } else if(categoria == 'b' || categoria == 'B'){
        printf("\n Me indique o percurso (km): ");
        scanf("%f", &percurso);
        if(percurso > 0){
            litros = percurso/consumob;
            printf("O consumo estimado do combustível do carro é de %.2f L. (%.0f km/L)", litros, consumob);
        }
        
    } else if(categoria == 'c' || categoria == 'C'){
        printf("\n Me indique o percurso (km): ");
        scanf("%f", &percurso);
        if(percurso > 0){
            litros = percurso/consumoc;
            printf("O consumo estimado do combustível do carro é de %.2f L. (%.0f km/L)", litros, consumoc);
        }
    } else {
        printf("Categoria Inválida.");
    }
    

    return 0;
}