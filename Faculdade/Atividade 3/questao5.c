#include <stdio.h>

int main() {
    int x, y;
    
    printf("Informe o valor de X e de Y: \n");
    scanf("%i%i", &x, &y);
    
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    printf("Ordem Crescente: \n");

    for(int i = x+1; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3) printf("%d ", i);
    }
    return 0;
}
