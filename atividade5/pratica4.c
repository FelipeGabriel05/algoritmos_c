#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int num) {
    int calculo;
    calculo = 1;
    for (num; num >= 1; num--) {
        calculo *= num;
    }
    return calculo;
}

float Euler(int x, int n, float termo) {
    if(termo <= 1e-6) {
        return 0;
    }
    return termo + Euler(x, n+1, pow(x, n+1)/fat(n+1));
}

int main(int narg, char *argv[]) {
    int x;
    float resultado;
    printf("Insira um valor inteiro:\n");
    scanf("%d", &x);
    resultado = Euler(x, 0, 1);
    printf("%f", resultado);
    return EXIT_SUCCESS;
}

/*Número de Euler calcule o próximo termo enquanto o número for maior que 10^-6*/