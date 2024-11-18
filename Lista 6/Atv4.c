/*
* Programa: Atv4.c
* Descrição: Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
* 10. Calcule as somas:
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
    int somaSegundaLinha = 0, somaQuintaColuna = 0;
    int somaColunasPares = 0, somaLinhasImpares = 0;
    int multiplicacao = 0;
    
    printf("Matriz 4x6:\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = rand() % (10 - (-10) + 1) - 10;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // a) Soma dos elementos da segunda linha
    for (int j = 0; j < 6; j++) {
        somaSegundaLinha += matriz[1][j];
    }
    
    // b) Soma dos elementos da quinta coluna
    for (int i = 0; i < 4; i++) {
        somaQuintaColuna += matriz[i][4];
    }
    
    // c) Multiplicação dos elementos da primeira linha pelos da quarta linha
    for (int j = 0; j < 6; j++) {
        multiplicacao += matriz[0][j] * matriz[3][j];
    }
    
    // d) Soma dos elementos das colunas com índices pares (0, 2, 4)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (j % 2 == 0) {
                somaColunasPares += matriz[i][j];
            }
        }
    }
    
    // e) Soma dos elementos das linhas com índices ímpares (1, 3)
    for (int i = 0; i < 4; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < 6; j++) {
                somaLinhasImpares += matriz[i][j];
            }
        }
    }
    
    printf("\nResultados:\n");
    printf("a) Soma dos elementos da segunda linha: %d\n", somaSegundaLinha);
    printf("b) Soma dos elementos da quinta coluna: %d\n", somaQuintaColuna);
    printf("c) Soma das multiplicações da primeira linha pela quarta linha: %d\n", multiplicacao);
    printf("d) Soma dos elementos das colunas com índices pares: %d\n", somaColunasPares);
    printf("e) Soma dos elementos das linhas com índices ímpares: %d\n", somaLinhasImpares);
    
    return 0;
}