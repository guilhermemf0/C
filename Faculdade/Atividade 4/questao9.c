#include <stdio.h>

int multiplicacao(int n1, int n2){
    if(n1 == 0 || n2 == 0) return 0;
    int multiplicacao = 0;
    
    if(n2 < 0){
        for(int i = 0; i > n2; i--){
            multiplicacao -= n1;
        }
    } else {
        for(int i = 0; i < n2; i++){
            multiplicacao += n1;
        }
    }
    
    return multiplicacao;
}

int main(){
    int n1, n2;
    
    printf("***Multiplicação***\n");
    printf("  Quais números serão multiplicados? ");
    scanf("%i%i", &n1, &n2);
    
    printf("Resultado: %i", multiplicacao(n1, n2));
    
    return 0;
}