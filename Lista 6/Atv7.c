/*
* Programa: Atv7.c
* Descrição: Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos
* em positivos e vice-versa. 
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 18/11/2024
* Última modificação: 18/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int matriz[5][5];
    
    printf("Matriz original:\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % (10 - (-10) + 1) - 10;
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = -matriz[i][j];
        }
    }
    
    printf("\nMatriz transformada:\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}