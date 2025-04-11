#include <stdio.h>

int main() {
    float x, y;
    int opcao;
    
    printf("Quais são os valores de X e Y: ");
    scanf("%f%f", &x, &y);
    
    printf("Qual seria a operação? (1 = Média, 2 = Diferença, 3 = Produto, 4 = Divisão) \n");
    scanf("%i", &opcao);
    
    float media = (x + y)/2;
    float diferenca = x - y;
    float produto = x * y;
    float divisao = x/y;
    
    if(opcao == 1){
        printf("A média entre x e y: %.2f", media);
    } else if(opcao == 2){
        if(x >= y){
            printf("A diferença entre x e y: %.2f", diferenca);
        } else {
            diferenca = y - x;
            printf("A diferença entre y e x: %.2f", diferenca);
        }
    } else if(opcao == 3){
        printf("O produto entre x e y: %.2f", produto);
    } else if(opcao == 4){
        if(y != 0){
            printf("A divisão entre x e y: %.2f", divisao);
        } else {
            printf("Erro: Divisão por 0.");
        }
    } else {
        printf("Opção Inválida.");
    }
    
    return 0;
}