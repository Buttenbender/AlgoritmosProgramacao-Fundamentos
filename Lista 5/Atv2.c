/*
* Programa: Atv2.c
* Descrição: Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
* valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
* 12 e 20.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 06/11/2024
* Última modificação: 06/11/2024
*/

#include <stdio.h>

int main() {
    int v[5];
    
    printf("Digite 5 valores:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    printf("Resultado da multiplicação de cada valor pela sua posição:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i] * i);
    }
    printf("\n");
    
    return 0;
}