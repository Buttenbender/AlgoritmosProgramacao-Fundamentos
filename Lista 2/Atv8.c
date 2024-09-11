/*
* Programa: Atv8.c
* Descrição: Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa
* que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.
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
