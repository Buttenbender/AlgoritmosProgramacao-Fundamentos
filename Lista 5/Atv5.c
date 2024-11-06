/*
* Programa: Atv5.c
* Descrição: Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
* dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
* dia. Escreva um programa que:
* a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
* b. Calcule o consumo total do mês.
* c. Calcule a média de consumo diário.
* d. Imprima o dia em que houve o maior consumo e o menor consumo de água.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 06/11/2024
* Última modificação: 06/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int consumo[30];
    int total = 0;
    int maiorConsumo = 0, menorConsumo = 5000;
    int diaMaior = 0, diaMenor = 0;
    
    for (int i = 0; i < 30; i++) {
        consumo[i] = 100 + rand() % (500 - 100 + 1);
        total += consumo[i];
        
        if (consumo[i] > maiorConsumo) {
            maiorConsumo = consumo[i];
            diaMaior = i + 1;
        }
        
        if (consumo[i] < menorConsumo) {
            menorConsumo = consumo[i];
            diaMenor = i + 1;
        }
    }
    
    double media = total / 30.0;
    
    printf("Consumo total do mês: %d litros\n", total);
    printf("Média de consumo por dia: %2.f litros\n", media);
    printf("Maior consumo: %d litros no dia %d\n", maiorConsumo, diaMaior);
    printf("Menor consumo: %d litros no dia %d\n", menorConsumo, diaMenor);
    
    return 0;
}