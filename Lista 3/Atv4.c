/*
* Programa: Atv4.c
* Descrição: Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite o número: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("O número é divisível por 3.");
    }
    else {
        printf("O número não é divisível por 3.");
    }

    return 0;
}
