#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int fatorial(int fat) {
    long long int calculo;
    calculo = 1;
    for(fat; fat >= 1; fat--) {
        calculo *= fat;
    } 
    return calculo;
}

float Euler(int x) {
    float termo, resultado;
    int contador;
    if (x == 0) {
        return 1;
    }

    resultado = 1 + x;
    termo = 1.0;
    contador = 2;
    while (termo > 1e-6) {
        termo = pow(x, contador) / fatorial(contador);
        resultado += termo;
        contador ++;
    } 
    return resultado;
}

int main(int narg, char *argv[]) {
    int x;

    printf("Calculo do numero de Euler\nDigite um valor inteiro para x:\n");
    scanf("%d", &x);
    printf("%f", Euler(x));
    return EXIT_SUCCESS;
}

/*
Dado que podemos calcular o número de euler elevado a x
Faça um programa em C que defina e utilize uma função iterativa para calcular ?" através deste mé-
todo. Crie quantas funções auxiliares desejar. O valor deve ser calculado enquanto o termo calculado 
for maior que 10./.
*/