/*
* Programa: Atv5.c
* Descrição: Encontre o maior e o menor valor da matriz gerada no exercício anterior.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 18/11/2024
* Última modificação: 18/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int matriz[4][6];
    int maior, menor;
    
    printf("Matriz 4x6:\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = rand() % (10 - (-10) + 1) - 10;
            printf("%3d ", matriz[i][j]);
            
            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
            }
            
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
        printf("\n");
    }
    
    printf("\nMaior valor da matriz: %d\n", maior);
    printf("Menor valor da matriz: %d\n", menor);
    
    return 0;
}