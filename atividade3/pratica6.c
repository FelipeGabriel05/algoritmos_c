#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int n, media_div, i;
    int soma_div, soma_total, j, media_total;

    i = 1;
    j = 1;
    soma_div = 0;
    soma_total = 0;
    while(i <= 10) {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &n);
        if(n % 3 == 0) {
            soma_div += n;
            i ++;
        }
        soma_total += n;
        j ++;
    }
    media_div = soma_div / i;
    media_total = soma_total / j;
    printf("Media dos numeros divisiveis por 3 = %d\nMedia dos demais numeros = %d", media_div, media_total);

    return EXIT_SUCCESS;
}

/*
Faça um programa em linguagem C que permita 
ao usuário entrar números inteiros até que sejam 
entrados 10 números divisíveis por 3. O progra-
ma deverá, então, mostrar a média aritmética 
dos números divisíveis por 3 e a média aritmética 
dos demais números entrados.
*/