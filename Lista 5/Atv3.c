/*
* Programa: Atv3.c
* Descrição: Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
* lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
* array com 6 posições e ao final imprima o percentual do resultado de cada face.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 06/11/2024
* Última modificação: 06/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int lancamento;
    int resultados[6] = {0};
    
    printf("Digite quantas vezes você quer jogar o dado: ");
    scanf("%d", &lancamento);
    
    for (int i = 0; i < lancamento; i++) {
        int face = 1 + rand() % (6 - 1 + 1);
        resultados[face - 1]++;
    }
    
    printf("Percentual de resultados para cada face:\n");
    for (int i = 0; i < 6; i++) {
        double percentual = (resultados[i] / (double)lancamento) * 100;
        printf("Face %d: %2.f%%\n", i + 1, percentual);
    }
    
    return 0;
}