/*
* Programa: Atv6.c
* Descrição: Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a
* informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e
* segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores
* como nota do Grau A e do Grau B.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 18/11/2024
* Última modificação: 18/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    float matriz[10][3];
    
    printf("Grau A   Grau B   Grau Parcial\n");
    
    for (int i = 0; i < 10; i++) {
        matriz[i][0] = ((float)rand() / RAND_MAX) * 10.0;
        matriz[i][1] = ((float)rand() / RAND_MAX) * 10.0;
        
        matriz[i][2] = (0.4 * matriz[i][0]) + (0.6 * matriz[i][1]);
        
        printf("%6.2f   %6.2f   %6.2f\n", matriz[i][0], matriz[i][1], matriz[i][2]);
    }
    
    return 0;
}