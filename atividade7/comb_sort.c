#include <stdio.h>
#include <stdlib.h>

void comb_sort(int *vetor, int n) {
    int gap, i, x, trocas;

    gap = n;
    /* trocas certifica se o algoritmo não precisa fazer mais trocas*/
    while(gap > 1 || trocas) {
        gap = (int)(gap / 1.3);
        if(gap < 1)
            gap = 1;
        
        trocas = 0;
        /*o for interno vai ser executado enquanto o gap chegar a última posição*/
        for(i = 0; (i+gap) < n; i++) {
            if(vetor[i] > vetor[i+gap]) {
                x = vetor[i];
                vetor[i] = vetor[i+gap];
                vetor[i+gap] = x;
                trocas = 1;
            }
        }
        printf("%d", gap);
    }
}