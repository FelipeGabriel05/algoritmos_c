#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int n, i, j, boleano;

    printf("Digite um inteiro positvo n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        boleano = 0;
        for(j = 2; j <= i-1; j++) {
            if(i % j == 0) {
                boleano = 1;
            }
        }
        if (boleano == 0 && i != 1) {
            printf("%d\n", i);
        }
    }
    return EXIT_SUCCESS;
}

/*
Faça um programa em linguagem C que receba 
um valor inteiro positivo N e mostre os N primei-
ros números primos, considerando o primeiro 
número primo como sendo 2.
*/