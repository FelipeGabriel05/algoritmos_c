#include <stdio.h>
#include <stdlib.h>

int MDC(int x, int y) {
    if (x % y == 0) {
        return y;
    } else {
        return MDC(y, x % y);
    }
}

int main(int narg, char *argv[]) {
    int num1, num2;

    printf("Calculo do mdc\nInsira dois numeros inteiros positivos separados por espaco:\n");
    scanf("%d %d", &num1, &num2);
    printf("O mdc eh: %d", MDC(num1, num2));
    return EXIT_SUCCESS;
}

/*
Implemente uma função recursiva para calcular o máximo divisor comum de dois números inteiros 
positivos, MDC(x, y), usando o algoritmo de Euclides. Este algoritmo é baseado no fato de que se o res-
to da divisão de x por y, representado por r, for igual a zero, y é o MDC. Se o resto r for diferente de 
zero, o MDC de x e y é igual ao MDC de y e r. O processo se repete até que o valor do resto da divisão 
seja zero.
*/