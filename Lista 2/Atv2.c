/*
* Programa: Atv2.c
* Descrição: Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a
* cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o
* valor total em reais que ele precisará pagar.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double dolar;
    double real;

    printf("Digite o valor em dólares: ");
    scanf("%lf", &dolar);

    real = dolar * 5.61;

    printf("O valor em reais é: %.2lf\n", real);

    return 0;
}
