/*
* Programa: Atv5.c
* Descrição: Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
* é ímpar
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite o número: ");
    scanf("%d", &num);

    if (2 % num == 0) {
        printf("O número é par.");
    }
    else {
        printf("O número é impar.");
    }

    return 0;
}
