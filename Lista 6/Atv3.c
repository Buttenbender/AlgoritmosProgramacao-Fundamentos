/*
* Programa: Atv3.c
* Descrição: Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
* matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
* elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 18/11/2024
* Última modificação: 18/11/2024
*/

#include <stdio.h>

int main() {
    int identidade[4][4];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                identidade[i][j] = 1;
            }
            else {
                identidade[i][j] = 0;
            }
        }
    }
    
    printf("Matriz identidade 4x4:\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", identidade[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}