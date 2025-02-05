#include <stdlib.h>
#include <stdio.h>

void Selection(int *A, int n) {
    int menor, k, j;
    for(int i = 0; i < n; i++) {
        menor = A[i];
        for(int j = i+1; j < n; j++) {
            if(A[j] < menor) {
                menor = A[j];
                k = j;
            }
        }
        if(menor != A[i]) {
            A[k] = A[i];
            A[i] = menor;
        }
    }
}


int main(int narg, char *argv[]) {
    int A[100] = {50, 2, 1, 10, 3, 5};
    int menor, k;

    Selection(A, 6);

    printf("[");
    for(int l = 0; l < 6; l++) {
        printf("%d ", A[l]);
    }
    printf("]");

    return 0;
}