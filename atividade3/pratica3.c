#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int i, n;
    i = 1;
    n = 1;
    while(i <= 1000) {
        if (n % 2 != 0 && n % 3 != 0 && n % 7 != 0) {
            printf("%d\n", n);
            i ++;
        }
        n ++;
    }
    return EXIT_SUCCESS;
}

/*
Faça um programa em linguagem C que exiba os 
1.000 primeiros números inteiros positivos que 
são ímpares e que não são divisíveis nem por 3 
nem por 7.
*/