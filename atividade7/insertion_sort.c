#include <stdio.h>
#include <stdlib.h>

void Insertion_sort(int *vetor, int n) {
    int j, k, x;
    /* j = 1 indica que a primeira posição do vetor está ordenado e logo depois inclui os próximos valores ordenando no subvetor */
    for(j = 1; j < n; j++) {
        x = vetor[j];
        k = j-1;
        while(k >= 0 && vetor[k] > x) {
            vetor[k+1] = vetor[k];
            k--;
        }
        vetor[k+1] = x;
    }
}