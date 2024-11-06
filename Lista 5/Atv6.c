/*
* Programa: Atv6.c
* Descrição: Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
* programa que:
* a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
* acumulada de um jogador.
* b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
* c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
* d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
* mensagem de "Rodada de Destaque" para esse jogador.
* e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
* f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 06/11/2024
* Última modificação: 06/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int pontos[4] = {0};
    int rodadas = 5;
    
    for (int r = 1; r <= rodadas; r++) {
        printf("Rodada %d:\n", r);
        
        for (int j = 0; j < 4; j++) {
            int pontuacaoRodada  = 0 + rand() % (100 - 0 + 1);
            pontos[j] += pontuacaoRodada;
            
            if (pontuacaoRodada > 80) {
                printf("Jogador %d teve uma Rodada de Destaque com %d pontos!\n", j + 1, pontuacaoRodada);
            }
        }
        
        printf("Pontuação acumulada após a rodada %d:\n", r);
        for (int j = 0; j < 4; j++) {
            printf("Jogador %d: %d pontos\n", j + 1, pontos[j]);
        }
        printf("\n");
    }
    
    printf("Pontuação total após 5 rodadas:\n");
    for (int j = 0; j < 4; j++) {
        printf("Jogador %d: %d pontos \n", j + 1, pontos[j]);
    }
    
    int maiorPontuacao = pontos[0];
    int vencedor = 1;
    int empate = 0;
    
    for (int j = 1; j < 4; j++) {
        if (pontos[j] > maiorPontuacao) {
            maiorPontuacao = pontos[j];
            vencedor = j + 1;
            empate = 0;
        }
        else if (pontos[j] == maiorPontuacao) {
            empate = 1;
        }
    }
    
    if (empate) {
        printf("Houve um empate entre os jogadores com a maior pontuação de %d pontos!\n", maiorPontuacao);
    }
    else {
        printf("O jogador %d venceu com %d pontos!\n", vencedor, maiorPontuacao);
    }
    
    return 0;
}