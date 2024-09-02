/*
* Programa: Atv10.c
* Descrição: calcula quanto o cliente gastou e aplica o desconto
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double qntCamisetas, qntCalcas, qntCintos, totalCamisetas, totalCalcas, totalCintos, valorTotal, valorComDesconto;

    printf("Digite quantas camisetas o cliente comprou: ");
    scanf("%lf", &qntCamisetas);

    printf("Digite quantas calças o cliente comprou: ");
    scanf("%lf", &qntCalcas);

    printf("Digite quantos cintos o cliente comprou: ");
    scanf("%lf", &qntCintos);

    totalCamisetas = qntCamisetas * 25;
    totalCalcas = qntCalcas * 100;
    totalCintos = qntCintos * 40;

    valorTotal = totalCamisetas + totalCalcas + totalCintos;

    valorComDesconto = valorTotal - (valorTotal * 0.10);

    printf("O valor total com o desconto da compra do cliente ficou: R$%.2lf.\n", valorComDesconto);

    return 0;
}