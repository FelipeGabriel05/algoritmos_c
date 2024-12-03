#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int x, y, z, valor;
    int A[20][20], B[20][20], C[20][20];
    int linha_A, coluna_A, linha_B, coluna_B, linha_C, coluna_C;
    int i, j, k;

    printf("Digite valores inteiros positivos para 3 variaveis, sendo maiores do que 2 e menores ou iguais a 20:\n");
    scanf("%d %d %d", &x, &y, &z);


    for(linha_A = 0; linha_A < x; linha_A++) {
        for(coluna_A = 0; coluna_A < y; coluna_A++) {
            printf("Insira o valor do vetor[%d][%d]:\n", linha_A, coluna_A);
            scanf("%d", &valor);
            A[linha_A][coluna_A] = valor;
        }
    }

    for(linha_B = 0; linha_B < y; linha_B++) {
        for(coluna_B = 0; coluna_B < z; coluna_B++) {
            printf("Insira o valor do vetor[%d][%d]\n", linha_B, coluna_B);
            scanf("%d", &valor);
            B[linha_B][coluna_B] = valor;
        }
    }

    for(i = 0; i < x; i++) {
        for(j = 0; j < z; j++){
            for(k = 0; k < y; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < z; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}