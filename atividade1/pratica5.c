#include <stdio.h>
#include <stdlib.h>

int main(int narg, char * argv[])
{
    float valor_atualizado, valor_original, taxa_mensal, atraso;
    printf("Digite o valor da prestacao original: ");
    scanf("%f", &valor_original);

    printf("Digite o valor da taxa mensal de juros: ");
    scanf("%f", &taxa_mensal);

    printf("Digite o tempo de atraso em meses: ");
    scanf("%f", &atraso);

    valor_atualizado = valor_original + (valor_original*(taxa_mensal/100)*atraso);
    printf("Valor atualizado da prestacao: %.2f", valor_atualizado);

    return EXIT_SUCCESS;
}

/*
Faça	um	programa	em	linguagem	C que	calcule	e	escreva	o	valor	de	uma	prestação	em	
atraso,	utilizando	a	fórmula	abaixo:	
Valor	atualizado	da	prestação	=	valor	original	da	prestação	+	(valor	da	prestação*(taxa
mensal de	juros/100) * tempo	de	atraso em	meses)
*/