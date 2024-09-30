/*
* Programa: Atv9.c
* Descrição: Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do
* teclado.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>

int main() {
    int num, i, j;
    char caracter;
    
    printf("Entre com um número: ");
    scanf("%d", &num);
    
    printf("Entre com um caracter: ");
    scanf(" %c", &caracter);
    
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", caracter);
        }
        printf("\n");
    }
    
    return 0;
}