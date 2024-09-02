/*
* Programa: Atv9.c
* Descrição: aplica desconto ao valor de uma compra
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double valorCompra, valorComDesconto;

    printf("Digite o valor da compra: ");
    scanf("%lf", &valorCompra);

    valorComDesconto = valorCompra - (valorCompra * 0.15);

    printf("O valor total com o desconto ficou: R$%.2lf.\n", valorComDesconto);

    return 0;
}