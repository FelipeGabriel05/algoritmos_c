#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

int main(int narg, char *argv[]) {
    ArvoreBB *arvore;
    inicializar(&arvore);

    inserir_interativo(&arvore, 6, 2.3);
    inserir_interativo(&arvore, 5, 2.5);
    inserir_interativo(&arvore, 4, 4.9);
    inserir_interativo(&arvore, 2, 5);
    inserir_interativo(&arvore, 7, 8);
    inserir_interativo(&arvore, 9, 9.4);
    buscar_interativo(arvore, 2);
    listar_elementos(arvore);
    return 0;
}