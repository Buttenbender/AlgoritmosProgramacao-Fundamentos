/*
* Programa: Atv2.c
* Descrição: Escreva um programa que sorteie:
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/10/2024
* Última modificação: 02/10/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sorteio;
    
    srand(time(NULL));
    
    // a. Um número entre 130 e 670.
    
    sorteio = rand() % (670 - 130 + 1) + 130;
    printf("Número sorteado: %d.\n", sorteio);
    
    // b. Um número entre -20 e -5.
    
    sorteio = rand() % ((-5) - (-20) + 1) - 20;
    printf("Número sorteado: %d.\n", sorteio);
    
    // c. Um número entre -10 e 10.
    
    sorteio = rand() % (10 - (-10) + 1) - 10;
    printf("Número sorteado: %d.\n", sorteio);
    
    // d. Um número entre 10.5 e 50.2, com uma casa decimal.
    
    sorteio = rand() % (502 - 105 + 1) + 105;
    float resultado = sorteio / 10.0;
    
    printf("Número sorteado: %.1f.\n", resultado);
    
    // e. Um número entre 0 e 100, que seja múltiplo de 5.
    
    sorteio = (rand() % 21) * 5; // existem 21 números múltiplos de 5 entre 0 e 100
    
    printf("Número sorteado: %d.\n", sorteio);
    
    // f. Um caractere entre 'A' (65) e 'Z' (90).
    
    char caractere = rand() % ('Z' - 'A' + 1) + 'A';
    
    printf("Caractere sorteado: %c.\n", caractere);
    
    return 0;
}