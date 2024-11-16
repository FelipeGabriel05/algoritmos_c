#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[])
{
    char num[3], inv[4];
    
    printf("Insira um numero: ");
    scanf("%s", num);
    
    inv[0] = num[2];
    inv[1] = num[1];
    inv[2] = num[0];
    inv[3] = '\0';

    printf("%s -- %s", num, inv);
    return EXIT_SUCCESS;
}

/*
Faça um	programa em	linguagem C que	receba um número inteiro positivo de 3 dígitos,	
calcule	e	mostre	 o	 número	 resultante	 da	inversão desses	3 dígitos,	mostrando o	 número	
lido	e	invertido.	Ex.	351	-- 153	/	240	– 42
*/