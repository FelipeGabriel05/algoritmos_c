#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int ano;
    printf("Digite o ano e descubra se e bissexto: \n");
    scanf("%d", &ano);
    
    if (ano < 1752) {
        printf("Nao e bissexto");
    } else if (ano % 400 == 0 && ano % 100 == 0) {
        printf("bissexto");
    } else if (ano % 4 == 0 && ano % 400 != 0 && ano % 100 != 0) {
        printf("bissexto");
    } else {
        printf("Nao e bissexto");
    }
    return EXIT_SUCCESS;
}

/*
Faça um programa em C que receba do teclado 
um ano e descubra se este ano lido é bissexto. 
Um ano é bissexto se ele for múltiplo de 4, exce-
to quando ele for múltiplo de 100. Os anos múl-
tiplos de 100 somente são bissextos quando são 
múltiplos de 400, usado a partir de 1752 (por 
exemplo 1800 não é bissexto, mas 2000 é). Con-
sidere que nenhum ano antes de 1752 é bissexto
*/