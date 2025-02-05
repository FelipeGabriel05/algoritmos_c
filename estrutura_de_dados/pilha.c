#include <stdio.h>
#include <stdlib.h>

void front_vetor(int *vetorA, int n) {
    for(int i = 0; i < n; i++) {
        printf("indice [%d]: %d\n", i, vetorA[i]);
    }
    printf("\n");
}

int pilha_vazia_p1(int *vetorA, int topo_p1) {
    if(topo_p1 == -1) 
        return 1;
    return 0;
}

int pilha_vazia_p2(int *vetorA, int topo_p2, int n) {
    if(topo_p2 == n)
        return 1;
    return 0;
}   

int pilha_cheia(int *vetorA, int topo_p1, int topo_p2) {    
    if (topo_p1 + 1 == topo_p2)
        return 1;
    return 0;
}

int push_p1(int *vetorA, int *topo_p1, int *topo_p2, int x){
    if(pilha_cheia(vetorA, *topo_p1, *topo_p2))
        return -1; //overflow
    (*topo_p1)++;
    vetorA[*topo_p1] = x;
    front_vetor(vetorA, 10);
}

int push_p2(int *vetorA, int *topo_p2, int *topo_p1, int x) {
    if(pilha_cheia(vetorA, *topo_p1, *topo_p2))   
        return -1; //overflow
    (*topo_p2)--;
    vetorA[*topo_p2] = x;
    front_vetor(vetorA, 10);
}

int pop_p1(int *vetorA, int *topo_p1) {
    if(pilha_vazia_p1(vetorA, *topo_p1))
        return  -1; //underflow
    (*topo_p1)--;
    front_vetor(vetorA, 10);
    return vetorA[*topo_p1 + 1];
}

int pop_p2(int *vetorA, int *topo_p2) {
    if(pilha_vazia_p2(vetorA, *topo_p2, 10))
        return -1; //underflow
    (*topo_p2)++;
    front_vetor(vetorA, 10);
    return vetorA[*topo_p2 + 1];
}

int main(int narg, char *argv[]) {
    int vetorA[10] = {0};
    int topo_p1, topo_p2;
    topo_p1 = -1;
    topo_p2 = 10;

    push_p1(vetorA, &topo_p1, &topo_p2, 10);
    push_p1(vetorA, &topo_p1, &topo_p2, 20);
    push_p1(vetorA, &topo_p1, &topo_p2, 30);
    push_p1(vetorA, &topo_p1, &topo_p2, 50);

    push_p2(vetorA, &topo_p2, &topo_p1, 90);
    push_p2(vetorA, &topo_p2, &topo_p1, 100);
    push_p2(vetorA, &topo_p2, &topo_p1, 300);
    push_p2(vetorA, &topo_p2, &topo_p1, 400);
    push_p2(vetorA, &topo_p2, &topo_p1, 500);
    push_p2(vetorA, &topo_p2, &topo_p1, 600);
    push_p2(vetorA, &topo_p2, &topo_p1, -1);

    int excloi = pop_p1(vetorA, &topo_p1);
    printf("valor %d removido\n", excloi);
    push_p2(vetorA, &topo_p2, &topo_p1, -1);
    return 0;
}