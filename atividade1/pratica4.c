#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[])
{
    float compra_dolar, taxa, percentual_ICMS, percentual_lucro;
    float valor_real, icms, lucro, valor_final;

    printf("Compra em dolares: ");
    scanf("%f", &compra_dolar);

    printf("Taxa do dolar: ");
    scanf("%f", &taxa);

    printf("Percentual de ICMS: ");
    scanf("%f", &percentual_ICMS);

    printf("Percentual de lucro da empresa: ");
    scanf("%f", &percentual_lucro);

    valor_real = compra_dolar * taxa;
    icms = valor_real * (percentual_ICMS / 100);
    lucro = valor_real * (percentual_lucro / 100);
    valor_final = valor_real + icms + lucro;
    
    printf("%.2f", valor_final);
    return EXIT_SUCCESS;
}

/*
Faça	um	programa	em	linguagem	C que	lê o	valor	de	uma	compra	em	dólares,	a	taxa	do	
dólar	no	dia	da	compra,	o	percentual	de	ICMS	e	o	percentual	de	lucro	da	empresa;	e	que	
calcule	e	escreva	o	valor	a	ser	pago	em	reais,	sabendo-se	que	o	percentual	de	lucro	e	o	
percentual	de ICMS	incidem	sobre	o	valor	em	reais.
*/