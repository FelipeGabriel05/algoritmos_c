#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int narg, char *argv[]) {
    Fila *fila = criar_fila();

    enfileirar(fila, "João", 123, 500.75);
    enfileirar(fila, "Maria", 456, 300.50);
    enfileirar(fila, "Pedro", 789, 1000.00);
    return 0;
}