#include <stdio.h>

int main() {
    //Criação e Definição de uma matriz de 2 linhas e 3 colunas
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //Ponteiros aponta para a matriz
    int (*ptr)[3] = mat;

    //Aumenta 1 endereço, então iria de [0] para [1] que seria o
    ptr++;

    //A saída seria 6, alternativa d)
    printf("%d\n", (*ptr)[2]);

    return 0;
}
