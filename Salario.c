#include <stdio.h>

    int main(void)
    {
        float horasTrabalhadas, valorHora, percentualDesconto, totalDesconto, salarioBruto, salarioLiquido;

        char nome;
        char sobrenome;

        printf("--------------------------------\n");
        //printf pede a informação e o scanf recebe ela
        printf("Escreva o su nome e o ultimo sobrenome:\n");
        scanf("%s %s", &nome, &sobrenome);

        printf("Quantas horas de trabalho?");
        scanf("%f", &horasTrabalhadas);

        printf("Qual o valor da hora?");
        scanf("%f", &valorHora);

        printf("Qual o percentual de desconto?");
        scanf("%f", &percentualDesconto);

        //da valor as variaveis
        
        salarioBruto = horasTrabalhadas * valorHora;
        totalDesconto = (percentualDesconto / 100 ) * salarioBruto;
        salarioLiquido = salarioBruto - totalDesconto;

        printf("Seu nome e.......: %s %s\n", nome, sobrenome);
        printf("Salario Bruto ....: %7.2f\n", salarioBruto);
        printf("Descontos ........: %7.2f\n", totalDesconto);
        printf("Salario liquido ..: %7.2f\n", salarioLiquido);
        printf("-----------------------------------------\n");

        return 0;
    }
