/*
* Programa: Atv3.c
* Descrição: Imagine que você está administrando uma fazenda de abelhas. A cada mês, a colmeia inicial
* dobra de tamanho, mas 3% das abelhas migram para outras colmeias devido às mudanças
* sazonais. Escreva um programa que leia o número de meses e a população inicial da colmeia,
* e exiba a população ao final de cada mês, considerando a migração.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/10/2024
* Última modificação: 02/10/2024
*/

#include <stdio.h>

int main() {
    int meses, i;
    float populacao;
    
    printf("Digite a população inicial de abelhas da colmeia: ");
    scanf("%f", &populacao);
    
    printf("Digite o número de meses: ");
    scanf("%d", &meses);
    
    for (i = 0; i < meses; i++) {
        populacao = populacao * 2;
        populacao = populacao - (populacao * 0.03);
        
        printf("Mês: %d\n", i);
        printf("População: %.2f\n", populacao);
    }
    
    return 0;
}