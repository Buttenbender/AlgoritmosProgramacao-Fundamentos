/*
* Programa: Atv6.c
* Descrição: calcula quantos reais em tablets e telefones foram vendidos
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/
 
#include <stdio.h>

int main() {
    double qntTelefones, qntTablets, totalTelefones, totalTablets, valorTotal;

    printf("Digite quantos telefones foram vendidos: ");
    scanf("%lf", qntTelefones);

    printf("Digite quantos tablets foram vendidos: ");
    scanf("%lf", qntTablets);

    totalTelefones = qntTelefones * 1000;
    totalTablets = qntTablets * 1500;

    valorTotal = totalTelefones + totalTablets;

    printf("O valor total vendido hoje foi de: R$%.2lf.\n", valorTotal);

    return 0;
}