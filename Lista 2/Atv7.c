/*
* Programa: Atv7.c
* Descrição: Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar
* seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que
* leia o número de pássaros que o criador possui e calcule a quantidade total de ração
* necessária por dia.
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
