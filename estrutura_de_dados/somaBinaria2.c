#include <stdio.h>
#include <stdlib.h>

void Soma(int *vetorA, int *vetorB, int *vetorC, int n) {
    int x, i, soma;
    x = 0; 
    for(i = n-1; i >= 0; i--) {
        soma = vetorA[i] + vetorB[i] + x;
        vetorC[i+1] = soma % 2;
        x = soma/2;
    }
    vetorC[0] = x;
}

int main(int narg, char *argv[]) {
    int vetorA[4] = {1, 0, 0, 1};
    int vetorB[4] = {1, 1, 1, 1};   
    int vetorC[5], j, k, l;
    Soma(vetorA, vetorB, vetorC, 4);

    for (l = 0; l < 5; l++) {
        printf("%d\n", vetorC[l]);
    }
    return 0;
}