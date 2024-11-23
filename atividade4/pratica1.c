#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main(int narg, char *argv[]) {
    int numero1, numero2, resultado;

    printf("Calculo do mdc, digite dois numeros inteiros separado por espaco:\n");
    scanf("%d %d", &numero1, &numero2);
    resultado = MDC(numero1, numero2);
    printf("O resultado do mdc eh %d: ", resultado);
    return EXIT_SUCCESS;
}

/*
Implemente uma função iterativa (usando laços) para calcular o máximo divisor comum de dois núme-
ros inteiros positivos, MDC(x, y), usando o algoritmo de Euclides. Este algoritmo é baseado no fato de 
que se o resto da divisão de x por y, representado por r, for igual a zero, y é o MDC. Se o resto r for di-
ferente de zero, o MDC de x e y é igual ao MDC de y e r. O processo se repete até que o valor do resto 
da divisão seja zero.
*/