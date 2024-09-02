/*
* Programa: Atv1.c
* Descrição: lê uma quantidade de tempo em minutos e transforma em segundos
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double minutos;
    double segundos;

    printf("Digite a quantidade de tempo em minutos: ");
    scanf("%lf", &minutos);

    segundos = minutos * 60;

    printf("%.2lf minutos é igual a %.2lf segundos\n", minutos, segundos);

    return 0;
}
