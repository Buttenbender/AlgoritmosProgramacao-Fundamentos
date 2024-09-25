/*
* Programa: Atv1.c
* Descrição: Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for
* diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    double num1, num2, resposta;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o divisor: ");
    scanf("%lf", &num2);

    if (num2 != 0) {
        resposta = num1 / num2;

        printf("A resposta final é %lf.\n", resposta);
    }
    else {
        printf("Impossível de resolver, pois o divisor é 0.");
    }

    return 0;
}
