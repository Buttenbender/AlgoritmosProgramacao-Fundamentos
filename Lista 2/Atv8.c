/*
* Programa: Atv8.c
* Descrição: converte temperatura de celsius para fahrenheit
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Digite a temperatura em celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("A temperatura em fahrenheit é: %2.lf.\n", fahrenheit);

    return 0;
}