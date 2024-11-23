#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia(int x1, int x2, int y1, int y2, int z1, int z2) {
    float sub1, sub2, sub3;
    sub1 = pow((x2 - x1), 2);
    sub2 = pow((y2 - y1), 2);
    sub3 = pow((z2 - z1), 2);
    return sqrt(sub1 + sub2 + sub3);
}

int main(int narg, char *argv[]) {
    int coordenada_x1, coordenada_x2, coordenada_y1, coordenada_y2, coordenada_z1, coordenada_z2;
    float calculo;

    printf("Calculo da distancia euclidiana:\n");
    printf("Digite as coordenadas do ponto 1 separadas por espaco:\n");
    scanf("%d %d %d", &coordenada_x1, &coordenada_y1, &coordenada_z1);
    printf("Digite as coordenadas do ponto 2 separadas por espaco:\n");
    scanf("%d %d %d", &coordenada_x2, &coordenada_y2, &coordenada_z2);

    calculo = distancia(coordenada_x1, coordenada_x2, coordenada_y1, coordenada_y2, coordenada_z1, coordenada_z2);
    printf("Calculo da distancia = %.2f", calculo);
    return EXIT_SUCCESS;
}


/*
Implemente uma função que calcule a distância euclidiana de dois pontos no espaço (x1, y1, z1) e (x2, 
y2, z2)
*/