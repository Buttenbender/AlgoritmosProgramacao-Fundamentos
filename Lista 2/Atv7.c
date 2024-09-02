/*
* Programa: Atv7.c
* Descrição: calcula a quantidade de ração necessária de acordo com a quantidade de pássaros
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    int numPassaros, totalRacao;

    printf("Digite a quantidade de pássaros que você possui: ");
    scanf("%d", &numPassaros);

    totalRacao = numPassaros * 30;

    printf("A quantidade de ração necessária será: %d.\n", totalRacao);

    return 0;
}