#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

double Comb_sort(int *vetor, int n) {
    struct timeval inicio, fim;
    double tempo_em_segundos = 1.0;

    int gap, i, x, trocas;
    gap = n;
    gettimeofday(&inicio, NULL);
    /* trocas certifica se o algoritmo não precisa fazer mais trocas*/
    while(gap > 1 || trocas) {
        gap = (int)(gap / 1.3);
        if(gap < 1)
            gap = 1;
        
        trocas = 0;
        /*o for interno vai ser executado enquanto o gap chegar a última posição*/
        for(i = 0; (i+gap) < n; i++) {
            if(vetor[i] > vetor[i+gap]) {
                x = vetor[i];
                vetor[i] = vetor[i+gap];
                vetor[i+gap] = x;
                trocas = 1;
            }
        }
    }
    gettimeofday(&fim, NULL);
    //calcula o tempo que levou para fazer o processamento
    tempo_em_segundos = (double) (fim.tv_usec - inicio.tv_usec) / 1000000 + (double) (fim.tv_sec - inicio.tv_sec); 
    printf("Tempo total de processamento do comb_sort = %f segundos\n", tempo_em_segundos);
    return tempo_em_segundos;
}

double Bubble_sort(int *vetor, int n) {
    int i, j, x;
    struct timeval inicio, fim;
    double tempo_em_segundos = 1.0;
    /* Termina na posição n-1, pois a comparação é sempre feita do indice atual com o indice atual + 1. Assim, pegando todos os valores de n*/
    gettimeofday(&inicio, NULL);
    for(j = 0; j < n-1; j++) {
        /* O laço interno faz as comparações, a sua condição de parada impede que comparações desnessárias sejam feitas*/
        for(i = 0; i < n - j - 1; i++) {
            if(vetor[i] > vetor[i+1]) {
                x = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = x;
            }
        }
    }
    gettimeofday(&fim, NULL);
    tempo_em_segundos = (double) (fim.tv_usec - inicio.tv_usec) / 1000000 + (double) (fim.tv_sec - inicio.tv_sec); 
    printf("Tempo total de processamento do bubble_sort = %f segundos\n", tempo_em_segundos);
    return tempo_em_segundos;
}

double Insertion_sort(int *vetor, int n) {
    int j, k, x;
    struct timeval inicio, fim;
    double tempo_em_segundos = 1.0;
    /* j = 1 indica que a primeira posição do vetor está ordenado e logo depois inclui os próximos valores ordenando no subvetor */
    gettimeofday(&inicio, NULL);
    for(j = 1; j < n; j++) {
        x = vetor[j];
        k = j-1;
        while(k >= 0 && vetor[k] > x) {
            vetor[k+1] = vetor[k];
            k--;
        }
        vetor[k+1] = x;
    }
    gettimeofday(&fim, NULL);
    tempo_em_segundos = (double) (fim.tv_usec - inicio.tv_usec) / 1000000 + (double) (fim.tv_sec - inicio.tv_sec); 
    printf("Tempo total de processamento insertion_sort = %f segundos\n", tempo_em_segundos);
    return tempo_em_segundos;
}

double Selection_sort(int *vetor, int n) {
    int i, j, k, x, elemento;
    struct timeval inicio, fim;
    double tempo_em_segundos = 1.0;
    k = 1;
    gettimeofday(&inicio, NULL);
    for(i = 0; i < n; i++) {
        x = vetor[i];
        j = k;
        /* A ideia é sempre pegar o menor valor do vetor */
        for(j; j < n; j++) {        
            if(vetor[j] < x) {
                x = vetor[j];
                elemento = j;
            }
        }
        k++;
        /*E depois troca de acordo com o indice i. Sempre selecionando os menores valores para as posições iniciais*/              
        if(x != vetor[i]) {
            vetor[elemento] = vetor[i];
            vetor[i] = x; 
        }
    }
    gettimeofday(&fim, NULL);
    tempo_em_segundos = (double) (fim.tv_usec - inicio.tv_usec) / 1000000 + (double) (fim.tv_sec - inicio.tv_sec); 
    printf("Tempo total de processamento selection_sort = %f segundos\n", tempo_em_segundos);
    return tempo_em_segundos;
}

void imprimir_vetor(int *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
}

void insertion_numbers(int *vetor, int n) {
    int  i, num,num_rand;

    srand((int)time(NULL));
    for(i = 0; i < n; i++) {
        num = rand() % (100 * n + 1);
        vetor[i] = num;
    }
}

void copia_numbers(int *copia, int *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        copia[i] = vetor[i]; 
    }
}

int main(int narg, char * argv[]) {
    int vetor_original[100], copia[100], num_elementos;
    double tempo_insertion, tempo_comb, tempo_selection, tempo_bubble, total_segundos;
    
    num_elementos = 10;
    insertion_numbers(vetor_original, num_elementos);

    copia_numbers(copia, vetor_original, num_elementos);
    tempo_comb = Comb_sort(copia, num_elementos);

    copia_numbers(copia, vetor_original, num_elementos);
    tempo_bubble = Bubble_sort(copia, num_elementos);

    copia_numbers(copia, vetor_original, num_elementos);
    tempo_insertion = Insertion_sort(copia, num_elementos);

    copia_numbers(copia, vetor_original, num_elementos);
    tempo_selection = Selection_sort(copia, num_elementos);

    total_segundos = tempo_bubble + tempo_insertion + tempo_selection + tempo_comb;
    printf("Tempo total de execucao em segundos : %f\n", total_segundos);

    if(tempo_comb < tempo_bubble && tempo_comb < tempo_selection && tempo_comb < tempo_insertion) {
        printf("Comb sort foi o mais eficiente");
    } else if(tempo_bubble < tempo_comb && tempo_bubble < tempo_insertion && tempo_bubble < tempo_selection) {
        printf("Bubble sort foi o mais eficiente");
    } else if(tempo_selection < tempo_comb && tempo_selection < tempo_insertion && tempo_selection < tempo_bubble) {
        printf("Selection sort foi o mais eficiente");
    } else {
        printf("Insertion sort foi o mais eficiente");
    }
    return EXIT_SUCCESS;
}