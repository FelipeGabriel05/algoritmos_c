#include <stdio.h>
#include <stdlib.h>

int Verifica_num(int n, int inv, int verificador_n) {
    if(n == 0) {
        if(inv == verificador_n) {
            return 1;
        } else {
            return 0;
        }
    }
    return Verifica_num(n / 10, inv * 10 + n % 10, verificador_n);
}

int main(int narg, char *argv[]) {
    int num, resultado;

    printf("Insira um numero inteiro e positivo:\n");
    scanf("%d", &num);
    if(num <= 0) {
        printf("Invalido");
    } else {
        resultado = Verifica_num(num, 0, num);
        printf("%d", resultado);
    }
    return EXIT_SUCCESS;
}

/*
Faça um programa em C que defina e utilize uma função recursiva que verifique se um determinado 
número inteiro e positivo com até 7 dígitos é ou não um palíndromo. Se for, a função deve retornar 1. 
Caso contrário, zero. Um número palíndromo é um número que é igual à sua própria leitura de trás pa-
ra frente. São exemplos de palíndromos: 1643461 / 7557 / 131 / 2 / 123321.
*/