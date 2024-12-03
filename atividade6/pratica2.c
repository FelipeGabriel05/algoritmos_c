#include <stdio.h>
#include <stdlib.h>

void verifica_pg(int *vetor, int n) {
    int razao, i, verifica;
    if(vetor[1] % vetor[0] != 0) {
        printf("Nao e uma progressao geometrica");
    } else {
        razao = vetor[1] / vetor[0];
        verifica = 0;
        for(i = 1; i < n; i++) {
            if(vetor[i] % razao != 0) {
                verifica == 1;
            }
        }

        if (verifica == 0) {
            printf("E uma progressao geometrica\n");
            printf("razao: %d", razao);
        } else {
            printf("Nao e uma progressao geometrica");
        }
    }
}

int main(int narg, char *argv[]) {
    int i, total_numeros, vetor[100], numero;

    printf("Quantos numeros serao passados: \n");
    scanf("%d", &total_numeros);
    for(i = 0; i < total_numeros; i++) {
        printf("Digite o numero: \n");
        scanf("%d", &numero);
        if(numero >= 0 && numero <= 1000) {
            vetor[i] = numero;
        }
    }
    
    if (vetor[0] == 0 || total_numeros < 2) {
        printf("Nao e uma progressao geometrica.\n");
    } else {
        verifica_pg(vetor, total_numeros);
    }

    return EXIT_SUCCESS;
}