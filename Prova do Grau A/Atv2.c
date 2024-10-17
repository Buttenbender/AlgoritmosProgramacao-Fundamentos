/*
* Programa: Atv2.c
* Descrição: Escreva um programa que sorteie três números inteiros entre 1 e 10. O programa deve
* continuar sorteando até que o primeiro número seja menor que o segundo, e o segundo seja
* menor que o terceiro. Não use o comando break.
* Regras:
* a) A cada iteração, o programa deve exibir os números sorteados.
* b) Quando a condição for atendida (primeiro < e segundo e segundo < terceiro), o
* programa deve imprimir uma mensagem indicando que os números satisfazem a
* condição.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 16/10/2024
* Última modificação: 16/10/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sorteio1, sorteio2, sorteio3;
    
    srand(time(0));
    
    do {
        sorteio1 = 1 + rand() % (10 - 1 + 1);
        sorteio2 = 1 + rand() % (10 - 1 + 1);
        sorteio3 = 1 + rand() % (10 - 1 + 1);
        
        printf("Primeiro número sorteado: %d.\n", sorteio1);
        printf("Segundo número sorteado: %d.\n", sorteio2);
        printf("Terceiro número sorteado: %d.\n", sorteio3);
        
    } while (sorteio1 >= sorteio2 || sorteio2 >= sorteio3);
    
    printf("Programa encerrado!");
    
    return 0;
}