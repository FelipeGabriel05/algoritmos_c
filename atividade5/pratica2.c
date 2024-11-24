#include <stdio.h>
#include <stdlib.h>

int MDC(int x, int y) {
    if (x % y == 0) {
        return y;
    } else {
        return MDC(y, x % y);
    }
}

int main(int narg, char *argv[]) {
    int num1, num2;

    printf("Calculo do mdc\nInsira dois numeros inteiros positivos separados por espaco:\n");
    scanf("%d %d", &num1, &num2);
    printf("O mdc eh: %d", MDC(num1, num2));
    return EXIT_SUCCESS;
}