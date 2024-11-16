#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    int dia_atual, ano_atual, mes_atual, idade;
    int dia_nasc, ano_nasc, mes_nas;

    printf("Insira as datas separado por espaco sem barras\nData de nascimento sendo dia mes ano respectivamente:\n");
    scanf("%d %d %d", &dia_nasc, &mes_nas, &ano_nasc);
    printf("Insira a data atual: \n");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);

    idade = ano_atual - ano_nasc;
    if (idade < 16) {
        printf("Nao e eleitor ainda");
    } else if (idade >= 16 && idade < 18 || idade > 65) {
        printf("Eleitor facultativo");
    } else if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatorio");
    }
    return EXIT_SUCCESS;
}

/*
Faça um programa em C que receba dia, mês e 
ano atual e dia, mês e ano de nascimento de uma 
pessoa e mostre se esta pessoa não é eleitor ain-
da (idade menor que 16 anos), se é eleitor facul-
tativo (idade entre 16 e 18 anos ou maior do que 
65 anos) ou se é eleitor obrigatório (idade entre 
18 e 65 anos).
*/