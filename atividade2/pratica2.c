#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int narg, char *argv[]){
    float cat_a, cat_b, hip;
    float resultado;

    printf("Digite cateto_a cateto_b e hipotenusa respectivamente com um espaco entre eles:\n");
    scanf("%f %f %f", &cat_a, &cat_b, &hip);

    resultado = sqrt((pow(cat_a, 2) + pow(cat_b, 2)));
    if (resultado == hip) {
        printf("E um triangulo retangulo");
    } else {
        printf("Nao e um triangulo retangulo");
    }

    return EXIT_SUCCESS;
}

/*
Faça um algoritmo que receba as medidas dos 
lados de um triângulo, que podem ser entradas 
em qualquer ordem, e mostre se se trata ou não 
de um triângulo retângulo.
*/