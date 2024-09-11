/*
* Programa: Atv3.c
* Descrição: Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o
* peso do prato do cliente e calcule o valor a ser pago.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double pesoPrato;
    double valorTotal;

    printf("Digite o peso do prato: ");
    scanf("%lf", &pesoPrato);

    valorTotal = pesoPrato * 40;

    printf("Seu prato ficou: R$%.2lf\n", valorTotal);

    return 0;
}
