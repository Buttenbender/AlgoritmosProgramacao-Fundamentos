/*
* Programa: Atv2.c
* Descrição: Recebe um nome e imprime um "Bem-vindo" para o nome
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 29/08/2024
* Última modificação: 29/08/2024
*/

#include <stdio.h>

int main() {
    char nome[15];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Bem-vindo %s", nome);

    return 0;
}
