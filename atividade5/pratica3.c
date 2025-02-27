#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pot(double x, int k) {
    int resultado;
    if (k == 1) {
        return x;
    }
    return x * pot(x, k-1);
}

int potencia(int x, int k) {
    int resultado;
    resultado = x;
    while (k >= 2) {
        resultado *= x;
        k--;
    }
    return resultado;
}


int main(int narg, char *argv[]) {
    int base, exp, resultado_math, resultado, bo;
    printf("Insira a base e o expoente respectivamente separado por espaco:\n");
    scanf("%d %d", &base, &exp);
    resultado_math = pow(base, exp);
    resultado = pot(base, exp);
    bo = potencia(base, exp);
    printf("Valor da funcao de math.h = %d\nValor da funcao local = %d %d", resultado_math, resultado, bo);
    return EXIT_SUCCESS;
}

/*
Escreva uma função de potenciação recursiva, considerando o expoente como sendo um valor inteiro 
positivo (k", k > 0). A função deve seguir o protótipo: double pot (double x, int k). Escreva uma 
função main para testar sua implementação. Compare o resultado da sua função com o valor retorna-
do pela função de potenciação pow, da biblioteca de math.h padrão de C.
*/