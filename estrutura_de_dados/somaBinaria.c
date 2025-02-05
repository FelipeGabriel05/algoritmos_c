#include <stdio.h>
#include <stdlib.h>

void Soma(int *vetorA, int *vetorB, int *vetorC, int n) {
    int x, i;

    x = 0;
    for(i = n-1; i >= 0; i--) {
        if(x == 1) {
            if(vetorA[i] == 1 && vetorB[i] == 1) {
                vetorC[i+1] = 1;
            } else if(vetorA[i] == 1 || vetorB[i] == 1) {
                vetorC[i+1] = 0;
            } else {
                vetorC[i+1] = 0;
            }
        } else {
            if(vetorA[i] == 1 && vetorB[i] == 1) {
                vetorC[i+1] = 0;
                x = 1;
            } else if(vetorA[i] == 1 || vetorB[i] == 1) {
                vetorC[i+1] = 1;
                x = 0;
            } else {
                vetorC[i+1] = 0;
                x = 0;
            }
        }
    }
        
    if(x == 1) {
        vetorC[0] = x;
    }
}

 
int main(int narg, char *argv[]) {
    int vetorA[4], vetorB[4], vetorC[5], j, k, l;

    printf("Informe o vetorA\n");
    for(j = 0; j < 4; j++) {
        printf("valor na posicao [%d]: ", j);
        scanf("%d", &vetorA[j]);
    }

    printf("Informe o vetor B: \n");
    for(k = 0; k < 4; k++) {
        printf("valor na posicao [%d]: ", k);
        scanf("%d", &vetorB[k]);
    }
    Soma(vetorA, vetorB, vetorC, 4);

    for (l = 0; l < 5; l++) {
    printf("%d\n", vetorC[l]);
    }
    return 0;
}

//comnplexidade O(n)