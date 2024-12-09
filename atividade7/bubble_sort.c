#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *vetor, int n) {
    int i, j, x;
    /* Termina na posição n-1, pois a comparação é sempre feita do indice atual com o indice atual + 1. Assim, pegando todos os valores de n*/
    for(j = 0; j < n-1; j++) {
        /* O laço interno faz as comparações, a sua condição de parada impede que comparações desnessárias sejam feitas*/
        for(i = 0; i < n - j - 1; i++) {
            if(vetor[i] > vetor[i+1]) {
                x = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = x;
            }
        }
    }
}
