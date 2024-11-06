/*
* Programa: Atv1.c
* Descrição: Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
* Depois disso, implemente algoritmos para:
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 06/11/2024
* Última modificação: 06/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int v[10], vInverso[10], vPares[10], vImpares[10];
    int soma = 0, produto = 1, pares = 0, impares = 0;
    int find50 = 0, qntd50 = 0;
    int maior, menor;
    
    for (int i = 0; i < 10; i++) {
        v[i] = 10 + rand() % (90 - 10 + 1);
    }
    
    // a) Imprimir o vetor
    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    
    printf("\n\n");
    
    // b) Verificar se existe o valor 50 neste vetor e c) Verificar o número de ocorrências do valor 50 neste vetor
    for (int i = 0; i < 10; i++) {
        if (v[i] == 50) {
            find50 = 1;
            qntd50++;
        }
    }
    printf("Valor 50 %s encontrado no vetor!\n", find50 ? "foi" : "não foi");
    printf("O valor 50 ocorre %d vez(es) no vetor.\n", qntd50);
    
    printf("\n\n");
    
    // d) Calcular a média dos valores do vetor
    for (int i = 0; i < 10; i++) {
        soma += v[i];
    }
    printf("Média dos valores do vetor: %2.f\n", soma / 10.0);
    
    printf("\n\n");
    
    // e) Encontrar o maior e o menor valor dos elementos do vetor
    maior = menor = v[0];
    
    for (int i = 0; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    printf("Maior número do vetor: %d\n", maior);
    printf("Menor número do vetor: %d\n", menor);
    
    printf("\n\n");
    
    // f) Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
    produto = 1;
    
    for (int i = 0; i < 10; i++) {
        produto *= v[i];
    }
    printf("A soma dos valores do vetor: %d\n", soma);
    printf("O produto acumulado dos valores do vetor: %d\n", produto);
    
    printf("\n\n");
    
    // g) Imprimir o vetor em ordem inversa
    printf("Vetor em ordem inversa: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
    
    printf("\n\n");
    
    // h) Copiar os elementos em ordem inversa para outro vetor
    for (int i = 0; i < 10; i++) {
        vInverso[i] = v[9 - i];
    }
    
    printf("Vetor inverso copiado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vInverso[i]);
    }
    printf("\n");
    
    printf("\n\n");
    
    // i) Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
    // elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
    // conteúdo de vPares e vImpares
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            vPares[pares++] = v[i];
        }
        else {
            vImpares[impares++] = v[i];
        }
    }
    
    printf("Vetor de pares: ");
    for (int i = 0; i < pares; i++) {
        printf("%d ", vPares[i]);
    }
    printf("\n");
    
    printf("Vetor de ímpares: ");
    for (int i = 0; i < impares; i++) {
        printf("%d ", vImpares[i]);
    }
    printf("\n");
    
    return 0;
}