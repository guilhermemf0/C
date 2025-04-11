#include <stdio.h>

int main(){
    int x, y;
    printf("Digite o valor de X e de Y: \n");
    scanf("%d %d", &x, &y);

    int temp = x;
    x = y;
    y = temp;
    printf("X = %d e o Y = %d\n", x, y);

    return 0;
}