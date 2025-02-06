typedef struct No {
    char nome[250];
    int conta;
    float valor;
    struct Fila *prox;
} No;

typedef struct{
    Fila *inicio;
    Fila *fim;
} Fila;

Fila* criar_fila();
int enfileirar(Fila **f, char nome[250], int conta, float valor);
int consulta_conta_proximo(Fila *f);
float consulta_valor_proximo(Fila *f);
int fila_vazia(Fila *f);
char *desenfileirar(Fila **f);