#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    float num1, num2, div;
    printf("Digite dois numeros reais separados por espaco sendo numerador e denominador respectivamente\n");
    scanf("%f %f", &num1, &num2);
    
    if (num2 == 0) {
        printf("Impossivel dividir por zero");
    } else {
        div = num1 / num2;
        printf("Resultado e %f", div);
    }
    return EXIT_SUCCESS;
}

/*
Faça um programa em C que leia do teclado dois 
números reais e mostre a divisão do primeiro 
número pelo segundo, resguardando-se do caso 
do denominador ser zero
*/