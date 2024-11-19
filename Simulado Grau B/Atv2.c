/*
* Programa: Atv2.c
* Descrição: O jogo "Whack-a-Mole" é um jogo divertido onde toupeiras aparecem aleatoriamente em diferentes buracos, e
* o objetivo do jogador é acertar as toupeiras que surgem. Neste exercício, vamos simular uma versão simplificada do
* surgimento das toupeiras do jogo utilizando uma matriz 4x4. A cada ciclo, quatro toupeiras aparecerão em posições
* aleatórias dentro da matriz, representadas pelo símbolo 'T', enquanto os buracos restantes estarão vazios,
* representados pelo símbolo '-'. Sua tarefa é gerar e exibir três gerações diferentes dessas matrizes.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 19/11/2024
* Última modificação: 19/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

void gerarToupeiras(char matriz[TAM][TAM]) {
   for (int i = 0; i < TAM; i++) {
       for (int j = 0; j < TAM; j++) {
           matriz[i][j] = '-';
       }
   }
   
   for (int t = 0; t < 4; t++) {
       int i, j;
       
       do {
           i = rand() % TAM;
           j = rand() % TAM;
       } while (matriz[i][j] == 'T');
       
       matriz[i][j] = 'T';
   }
}

void exibirMatriz(char matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(0));
    
    char matriz[TAM][TAM];
    
    for (int geracao = 0; geracao < 3; geracao++) {
        printf("Geração %d:\n", geracao + 1);
        gerarToupeiras(matriz);
        exibirMatriz(matriz);
        printf("\n");
    }
    
    return 0;
}