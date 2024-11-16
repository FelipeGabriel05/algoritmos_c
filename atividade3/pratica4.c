#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int n, i, j, verifica, primo;

    printf("Insira um numero inteiro:\n");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        verifica = 0;
        for (j = 2; j <= i-1; j++) {
            if (i % j == 0) {
                verifica = 1;
            }
        }
        if (verifica == 0) {
            primo = i;
        }
    }
    printf("%d", primo);
    return EXIT_SUCCESS;
}

/*
Faça um algoritmo que receba do usuário um 
número inteiro e exiba o maior número primo 
que seja menor do que o número digitado.
*/