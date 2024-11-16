#include <stdio.h>
#include <stdlib.h>

int main(int narg, char * argv[])
{
    int dia_nascido, mes_nascido, ano_nascido;
    int dia_atual, mes_atual, ano_atual;
    float dias, anos;

    dia_atual = 30;
    mes_atual = 10;
    ano_atual = 2024;
    printf("Dia do nascimento: ");
    scanf("%d", &dia_nascido);

    printf("Mes: ");
    scanf("%d", &mes_nascido);

    printf("Ano: ");
    scanf("%d", &ano_nascido);

    dia_nascido = dia_atual - dia_nascido;
    if(dia_nascido < 0) 
    {
        dia_nascido = dia_nascido * -1;
    };
    mes_nascido = mes_nascido - mes_atual;
    if(mes_nascido < 0)
    {
        mes_nascido = mes_nascido * -1;
    };
    anos = (ano_atual - ano_nascido)*365.25;
    dias = dia_nascido + mes_nascido*30 + anos;
    printf("Anos vividos: %.2f", dias);
    return EXIT_SUCCESS;
}

/*
Faça um programa em	linguagem C	que	receba separadamente dia, mês e	ano	de	
nascimento	de	uma	pessoa	e	dia,	mês	e	ano	de	hoje,	calcule	e	mostre	a	idade	da	pessoa	
em	 dias,	 considerando	 os	 dias	 de	 nascimento	e	 de	 hoje	 como	 dias	vividos.	Considerar	as	
diferenças	de	anos	bissextos.
*/