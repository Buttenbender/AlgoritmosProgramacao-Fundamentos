/*
* Programa: Atv6.c
* Descrição: A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma
* quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$
* 1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones
* e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em
* um dia e calcule o total arrecadado.
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
