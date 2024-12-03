#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cartela(int *numeros_jogados, int n) {
    int i, numero;

    for (i = 0; i < n; i++) {
        printf("Digite um numero de 1 a 60 sem repetir:\n");
        scanf("%d", &numero);
        if (numero > 0 && numero < 61) {
            numeros_jogados[i] = numero;
        }
    }
    numeros_jogados;
}

void cartela_sorteada(int *numeros_sorteados) {
    int numero, incremento, n_vetor, repetido;
    srand(time(NULL));
    numero = (rand() % 60) + 1;
    numeros_sorteados[0] = numero;

    incremento = 1;
    repetido = 0;
    while (incremento <= 5) {
        numero = (rand() % 60) + 1;
        for(n_vetor = 0; n_vetor < 6; n_vetor++) {
            if(numero == numeros_sorteados[n_vetor]) {
                repetido = 1;
            }
        }

        if (repetido == 0) {
            numeros_sorteados[incremento] = numero;
            incremento++; 
        }
        repetido = 0;
    }
}

void imprimir_cartela_jogador(int n, int *numeros_jogados) {
    int i;

    for(i = 0; i < n; i++) {
        printf("%d ", numeros_jogados[i]);
    }
    printf("\n");
}

void imprimir_sorteio(int *numeros_sorteados) {
    int i;

    for(i = 0; i < 6; i++) {
        printf("%d ", numeros_sorteados[i]);
    }
    printf("\n");
}

void imprimir_qntd(int *qntd_acertos, int quantidade) {
    int i;

    for(i = 0; i < quantidade; i++) {
        printf("%d ", qntd_acertos[i]);
    }
    printf("\n");
}

int quantidade_acertos(int n, int *numeros_sorteados, int *numeros_jogados, int *qntd_acertos) {
    int qntd, i, j, repetido;

    qntd = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 6; j++) {
            if (numeros_jogados[i] == numeros_sorteados[j]) {
                qntd_acertos[qntd] = numeros_jogados[i];
                qntd ++;

            }
        }
    }
    return qntd;
}

int main(int narg, char *argv[]) {
    int total_numeros, numeros_jogados[15], numeros_sorteados[6], qntd_acertos[15], acertos; 

    printf("Digite um numero para fazer a sua aposta entre 6 e 15:\n");
    scanf("%d", &total_numeros);
    if (total_numeros >= 6 && total_numeros <= 15) {
        cartela(numeros_jogados, total_numeros);
        cartela_sorteada(numeros_sorteados);
        acertos = quantidade_acertos(total_numeros, numeros_sorteados, numeros_jogados, qntd_acertos);

        imprimir_cartela_jogador(total_numeros, numeros_jogados);
        imprimir_sorteio(numeros_sorteados);
        printf("Quantidade de acertos: %d\n", acertos);
        imprimir_qntd(qntd_acertos, acertos);

        if(acertos == 6) {
            printf("Fez a Mega-sena");
        } 
        if(acertos == 5) {
            printf("Fez a Quina");
        }
        if(acertos == 4) {
            printf("Fez a Quadra");
        }

    } else {
        printf("Entrada invalida");
    }
    return EXIT_SUCCESS;    
}