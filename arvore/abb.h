typedef struct ArvoreBB {
    int chave;
    float valor;
    struct ArvoreBB *esq;
    struct ArvoreBB *dir;
} ArvoreBB;

void inicializar(ArvoreBB **a);
int inserir_interativo(ArvoreBB **a, int chave, float val);
int inserir_recursivo(ArvoreBB **a, int chave, float val);
float buscar_interativo(ArvoreBB *a, int chave);
float buscar_recursivo(ArvoreBB *a, int chave);
void listar_elementos(ArvoreBB *a);