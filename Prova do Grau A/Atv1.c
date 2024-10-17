/*
* Programa: Atv1.c
* Descrição: Escreva um programa que sorteie números inteiros e decimais, respondendo a cada um dos
* subitens abaixo:
* a) Sorteie um número entre -50 e 50.
* b) Sorteie um número par entre 20 e 100.
* c) Sorteie um número decimal entre 0 e 1 com duas casas decimais.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 16/10/2024
* Última modificação: 16/10/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sorteio;
    
    srand(time(0));
    
    // a) Sorteie um número entre -50 e 50.
    sorteio = (-50) + rand() % (50 - (-50) + 1);
    printf("Número entre -50 e 50 sorteado: %d.\n", sorteio);
    
    // b) Sorteie um número par entre 20 e 100.
    sorteio = (rand() % 41) * 2 + 20;
    printf("Número par entre 20 e 100: %d.\n", sorteio);
    
    // c) Sorteie um número decimal entre 0 e 1 com duas casas decimais.
    sorteio = 00 + rand() % (10 - 00 + 1);
    float resultado = sorteio / 10.0;
    printf("Número decimal entre 0 e 1: %.2f.\n", resultado);
    
    return 0;
}