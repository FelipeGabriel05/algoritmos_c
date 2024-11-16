#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int n, invertido, resto;
    printf("Digite um numero inteiro de ate 10 digitos:\n");
    scanf("%d", &n);
    
    invertido = 0;
    while (n != 0) {
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n /= 10;
    }

    printf("Invertido = %d", invertido);
    return EXIT_SUCCESS;
}

/*
Faça um programa em linguagem C que receba 
do usuário um valor inteiro de até 10 dígitos e 
mostre o número inteiro invertido. A inversão 
deve ser feita através de cálculos apenas.
*/