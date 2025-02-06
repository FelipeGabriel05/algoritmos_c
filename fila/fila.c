#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criar_fila() {
    Fila *f = (Fila*)malloc(sizeof(Fila*));
    if(f) {
        f->inicio = NULL;
        f->fim = NULL;
    }
    return f;
}

int enfileirar(Fila **f, char nomeF[250], int contaF, float valorF) {
    if(f == NULL) {
        return 0;
    }

    No *novo = (No*)malloc(sizeof(No*));
    if (novo == NULL) {
        return 0; //Falha ao alocar memoria
    }
    novo->conta = contaF;
    novo->valor = valorF;
    strcpy(novo->nome, nomeF);

    novo->prox = NULL;
    if((*f)->fim == NULL) {
        (*f)->inicio = novo;
    } else {
        (*f)->fim->prox = novo;
    }

    (*f)->fim = novo;
    return 1; //se houver erro
}

int fila_vazia(Fila *f) {
    if(f == NULL || f->inicio == NULL) {
        return 1;
    }
    return 0;
}

float consulta_valor_proximo(Fila *f) {
    if(fila_vazia(f)) {
        return -1.0;
    }
    return f->inicio->prox->valor;
}

int consulta_conta_proximo(Fila *f) {
    if(fila_vazia(f)) {
        return -1;
    }
    return f->inicio->prox->conta;
}

char *desenfileirar(Fila **f) {
    if(fila_vazia(f)) {
        return -1;
    }
    No *remove = (*f)->inicio;
    char *nome = strdup(remove->nome);
    (*f)->inicio = (*f)->inicio->prox;

    if((*f)->inicio == NULL) {
        (*f)->fim = NULL;
    }
    free(remove);
    return nome;
}