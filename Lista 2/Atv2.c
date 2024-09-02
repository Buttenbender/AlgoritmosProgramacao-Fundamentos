/*
* Programa: Atv2.c
* Descrição: Converte dolar para real
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