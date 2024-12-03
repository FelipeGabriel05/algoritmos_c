#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int *vetor, int n) {
    int i,j, x, k;

    for(j = 1; j <= n; j++) {
        x = vetor[j];
        i = j-1;
        while(i >= 0 && vetor[i] > x) {
            vetor[i+1] = vetor[i];
            i --;
        }
        vetor[i+1] = x;
    }

    printf("vetor ordenado: [");
    for(k = 0; k <= n; k++) {
        if(k == n) {
            printf("%d", vetor[k]);
        } else {
            printf("%d,", vetor[k]);
        }
    }
    printf("]");
}
int imprimir_vetor(int *vetor, int elementos) {
    int i;

    printf("vetor: ");
    printf("[");
    for(i = 0; i <= elementos; i++) {
        if(i == elementos) {
            printf("%d", vetor[i]);
        } else {
            printf("%d,", vetor[i]);
        }
    }
    printf("]\n");
}

int main(int narg, char *argv[]) {
    int numero, i,vetor[100000];

    i = 0;
    numero = 1;
    while(numero > 0) {
        printf("Insira o valor: \n");
        scanf("%d", &numero);
        if(numero > 0) {
            vetor[i] = numero;
            i++;
        }
    }
    imprimir_vetor(vetor, i-1);
    InsertionSort(vetor, i-1);
    return EXIT_SUCCESS;
}