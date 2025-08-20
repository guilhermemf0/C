// Teste de mesa, vou adicionar comentários descrevendo linha por linha e sua saída
#include <stdio.h>

int main() {
    //Criação de Variáveis e Definição da Variável Y
    int x, y = 27;
    //Ponteiro 1 = Endereço de X
    int *pt1 = &x;
    //Ponteiro 2 = Endereço de Y
    int *pt2 = &y;
    //Ponteiro que aponta para o endereço do ponteiro 1 que tem o endereço de X
    int **ppt = &pt1;

    //Agora, o ponteiro (que estava apontando para o ponteiro 1 que estava apontando para o x) se igualou ao valor de *pt2, que é 27, ent x = 27 e *pt1 = 27, **pt = 27
    **ppt = *pt2;
    //Aumenta o valor de *pt2 indo para 28
    (*pt2)++;
    //Como x é 27, ele vai para 26, *pt1 vai para 26 e **ppt também
    x--;

    //A saída aqui vai ser 26 e 28
    printf("%d %d\n", *pt1, *pt2);
    //**ppt é 26,então 26 += 28-1 -> 26 += 27 -> 53, x = 53, *pt1 = 53 e *pt2 vai ter diminuído para 27
    (**ppt) += --(*pt2);

    //A saída aqui vai ser 53
    printf("%d\n", **ppt);
    //A saída aqui vai ser 53 e 27
    printf("%d %d\n", x, y);
    //A saída aqui vai ser 0 (false) pq o endereço de pt1 não é o mesmo que o de y
    printf("%d\n", pt1 == &y);
    //A saída aqui vai 1 (true), pq o endereço de x é diferente do endereço de pt2
    printf("%d\n", &x != pt2);

    return 0;
}
