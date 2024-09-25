/*
* Programa: Atv14.c
* Descrição: Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
* conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
* conforme a seguinte tabela:
* a) crianças com menos de 10 anos pagam R$100;
* b) dependentes com idade entre 10 e 30 anos pagam R$220;
* c) dependentes com idade entre 31 e 60 anos pagam R$ 395; e
* d) dependentes com mais de 60 anos pagam R$ 480.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    int idade;
    float valor = 300.0, valorAdicional = 0.0, valorFinal;

    printf("Digite a idade do(a) paciente: ");
    scanf("%d", &idade);

    if (idade < 10) {
        valorAdicional = 100.0;
    }
    else if (idade >= 10 && idade <= 30) {
        valorAdicional = 220.0;
    }
    else if (idade >= 31 && idade <= 60) {
        valorAdicional = 395.0;
    }
    else if (idade > 60) {
        valorAdicional = 480.0;
    }

    valorFinal = valor + valorAdicional;

    printf("O valor final é: R$ %.2f\n", valorFinal);

    return 0;
}
