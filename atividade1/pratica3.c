#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[])
{
    char nome[40];
    int filhos, horas_trabalhadas;
    float salario_h, salario_bruto, acrescimo = 0, salario_final;

    printf("Nome do funcionario: ");
    scanf("%s", nome);

    printf("Numero de filhos: ");
    scanf("%d", &filhos);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    
    printf("Salario: ");
    scanf("%f", &salario_h);
    
    salario_bruto = salario_h * horas_trabalhadas;

    if (filhos > 3) 
    {
        acrescimo = (0.03 * filhos) * salario_bruto;
    }

    salario_final = salario_bruto + acrescimo;
    printf("Funcionario: %s \nSalario: %.2f \nAcrescimo de salario: %.2f \nSalario final: %.2f", nome, salario_bruto, acrescimo, salario_final);
    return EXIT_SUCCESS;
}

/*
Faça	um	programa	em	linguagem	C	que	leia	nome	de	um	funcionário,	o	número	de	horas	
trabalhadas,	 o	 valor	 que	 recebe	 por	 horas	 trabalhadas	 e	 o	 número	 de	 filhos,	 com	 estas	
informações,	 calcular	 o	 salário	 deste	 funcionário,	 considerando	 que	 o	 mesmo	 terá	 uma	
gratificação	de	3%	sobre	o	salário	bruto	por	cada	filho,	caso	o	mesmo	possua	acima	de	três	
filhos.	 Escreva	 ao	 final,	 o	 nome	 do	 funcionário,	 seu	 respectivo	 salário	 e	 o	 acréscimo	 de	
salário,	caso	ela	tenha	tido	direito	a	esta	gratificação.
*/