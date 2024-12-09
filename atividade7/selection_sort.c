#include <stdio.h>
#include <stdlib.h>

void Selection_sort(int *vetor, int n) {
    int i, j, k, x, elemento;

    k = 1;
    for(i = 0; i < n; i++) {
        x = vetor[i];
        j = k;
        /* A ideia é sempre pegar o menor valor do vetor */
        for(j; j < n; j++) {        
            if(vetor[j] < x) {
                x = vetor[j];
                elemento = j;
            }
        }
        k++;
        /*E depois troca de acordo com o indice i. Sempre selecionando os menores valores para as posições iniciais*/              
        if(x != vetor[i]) {
            vetor[elemento] = vetor[i];
            vetor[i] = x; 
        }
    }
}