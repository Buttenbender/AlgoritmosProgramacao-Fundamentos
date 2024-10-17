/*
* Programa: Atv3.c
* Descrição: Em um experimento geológico, sensores medem o deslocamento de uma placa tectônica (em
* centímetros) a cada dia. Escreva um programa que leia os valores de deslocamento para 5
* dias e exiba:
* a) O deslocamento total ao longo do período.
* b) O maior deslocamento registrado.
* c) A média de deslocamento diário
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 16/10/2024
* Última modificação: 16/10/2024
*/

#include <stdio.h>

int main() {
    float deslocamento, total = 0, maior = 0, media;
    int diaMaior = 0, i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o valor de deslocamento do dia %d (em centímetros): ", i + 1);
        scanf("%f", &deslocamento);
        
        total += deslocamento;
        
        if (deslocamento > maior) {
            maior = deslocamento;
            diaMaior = i;
        }
    }
    
    media = total / 5;
    
    printf("O deslocamento total ao longo do período foi: %.2f cm.\n", total);
    printf("O maior deslocamento registrado foi: Dia %d (%.2f cm).\n", i, maior);
    printf("A média de deslocamento diário foi: %.2f cm.\n", media);

    return 0;
}