#include <stdlib.h>
#include <stdio.h>
#include "abb.h"

void inicializar(ArvoreBB **a) {
    *a = NULL;
}

int inserir_interativo(ArvoreBB **a, int chave, float val) {
    ArvoreBB *novo = (ArvoreBB*)malloc(sizeof(ArvoreBB));
    if(!novo) {
        return 0; //verifica se houve falha na alocação de memoria
    }

    novo->chave = chave;
    novo->valor = val;
    novo->esq = novo->dir = NULL;

    if(*a == NULL) {
        *a = novo;
        return 1; //operação bem sucedida
    }

    ArvoreBB *atual = *a;
    ArvoreBB *y = NULL;
    while(atual != NULL) {
        y = atual;
        if (novo->chave < atual->chave) {
            atual = atual->esq;
        } else if(novo->chave > atual->chave) {
            atual = atual->dir;
        } else {
            free(novo); //chave já existe
            return 0;
        }
    }

    if (novo->chave > y->chave) {
        y->dir = novo;
    } else {
        y->esq = novo;
    }
    return 1; //operação bem sucedida
}

int inserir_recursivo(ArvoreBB **a, int chave, float val) {
    if (*a == NULL) {
        *a = (ArvoreBB*)malloc(sizeof(ArvoreBB));
        if (!*a) {
            return 0;
        }
        (*a)->chave = chave;
        (*a)->valor = val;
        (*a)->esq = (*a)->dir = NULL;
        return 1;
    }

    if(chave < (*a)->chave) {
        return inserir_recursivo(&(*a)->esq, chave, val);
    } else if(chave > (*a)->chave) {
        return inserir_recursivo(&(*a)->dir, chave, val);
    }

    return 0; //já existe
}

float buscar_interativo(ArvoreBB *a, int chave) {
    while(a != NULL) {
        if(a->chave == chave) {
            printf("Valor encontrado = %.2f", a->valor);
            return a->valor;
        }
        else if(chave < a->chave) {
            a = a->esq;
        } else {
            a = a->dir;
        }
    }
    printf("Chave %d inexistente ", chave);
    return -99999.99; 
}

float buscar_recursivo(ArvoreBB *a, int chave) {
    if(a == NULL) {
        printf("Chave %d inexistente ", chave);
        return -99999.99;
    }

    if(a->chave == chave) {
        return a->valor;
    } else if(chave < a->chave) {
        return buscar_recursivo(a->esq, chave);
    } else {
        return buscar_recursivo(a->dir, chave);
    }
}

void listar_elementos(ArvoreBB *a) {
    if(a != NULL) {
        listar_elementos(a->esq);
        printf("%d \n", a->chave);
        listar_elementos(a->dir);
    }
}
