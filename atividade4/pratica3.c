#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main(int narg, char *argv[]) {
    int num1, num2, num3, resultado;

    printf("Digite 3 numeros inteiros separados por espaco:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    resultado = MDC(MDC(num1, num2), num3);
    printf("O resultado do MDC eh %d", resultado);    
    return EXIT_SUCCESS;
}

/*
O máximo divisor comum de três números inteiros positivos, MDC(x,y,z), é igual a MDC(MDC(x,y),z). 
Escreva um programa que capture três números inteiros fornecidos via teclado e imprima o MDC deles, 
usando a função MDC implementada no item 1.
*/