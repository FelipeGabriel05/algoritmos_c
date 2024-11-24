#include <stdio.h>
#include <stdlib.h>

int resto_div(int numerador, int denominador) {
    if (numerador < denominador) {
        return numerador;
    }
    return resto_div(numerador - denominador, denominador);
}

int main(int narg, char *argv[]) {
    int n, d;

    printf("Resto da divisao\nInsira dois numeros interios positivos separados por espaco:\n");
    scanf("%d %d", &n, &d);
    printf("Resto da divisao eh = %d", resto_div(n, d));
    return EXIT_SUCCESS;
}