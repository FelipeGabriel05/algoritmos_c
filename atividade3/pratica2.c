#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int n, atual, anterior;
    
    anterior = 1;
    atual = 1;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &n);
    if (n > 0) {
        while(atual < n) {
            if(atual == 1) {
                printf("\n%d\n%d\n", anterior, atual);
            }
            atual = anterior + atual;
            anterior = atual - anterior;
            if (atual < n) {
                printf("%d\n", atual);
            }
        }
    }
    return EXIT_SUCCESS;
}

/*
Faça um programa em linguagem C que receba 
um valor inteiro positivo N e mostre todos os 
números da sequência Fibonacci que sejam me-
nores do que N.
*/