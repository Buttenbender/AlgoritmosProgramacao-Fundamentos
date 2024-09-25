/*
* Programa: Atv2.c
* Descrição: Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A
* + C
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    int a, b, c, soma1, soma2;

    printf("Digite o primeiro número (A): ");
    scanf("%d", &a);
    printf("Digite o segundo número (B): ");
    scanf("%d", &b);
    printf("Digite o terceiro número (C): ");
    scanf("%d", &c);

    soma1 = a + b;
    soma2 = a + c;

    if (soma1 < soma2) {
        printf("A soma de A + B é menor que a soma de A + C.");
    }
    else if (soma1 == soma2) {
        printf("A soma de A + B é igual a soma de A + C.");
    }
    else {
        printf("A soma de A + B é maior que a soma de A + C.");
    }

    return 0;
}
