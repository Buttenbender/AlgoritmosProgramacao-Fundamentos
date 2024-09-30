/*
* Programa: Atv1.c
* Descrição: Faça um algoritmo para cada coisa pedida
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, num, soma, contPares, contImpares, n, sorteio;
    float media;
    
    srand(time(NULL));
    
    // a. Gerar e escrever todos os números inteiros do intervalo [0, 100]
    printf("Números inteiros de 0 a 100:\n");
    
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    
    printf("\n\n");
    
    //b. Gerar e escrever os números pares do intervalo [20, 50]
    printf("Números pares de 20 a 50:\n");
    
    for (i = 20; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n\n");
    
    //c. Gerar e escrever os números inteiros do intervalo [25, 70] em ordem decrescente
    printf("Números inteiros de 70 a 25 em ordem decrescente:\n");
    
    for (i = 70; i >= 25; i--) {
        printf("%d ", i);
    }
    
    printf("\n\n");
    
    //d. Gerar e escrever os números ímpares do intervalo [25, 95] em ordem decrescente
    printf("Números ímpares de 95 a 25 em ordem decrescente:\n");
    
    for (i = 95; i >= 25; i--) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n\n");
    
    //e. Ler 15 números e escrever a soma e a média dos números lidos
    soma = 0;
    
    printf("Sorteando 15 números:\n");
    
    for (i = 0; i < 15; i++) {
        num = rand() % 101; //sorteio até 100
        printf("%d ", num);
        soma += num;
    }
    
    media = (float)soma / 15;
    
    printf("\nSoma: %d, Média: %.2f\n\n", soma, media);
    
    //f. Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
    //ímpares lidos
    contPares = 0;
    contImpares = 0;
    
    printf("Sorteando 10 números inteiros:\n");
    
    for (i = 0; i < 10; i++) {
        num = rand() % 101;
        printf("%d ", num);
        
        if (num % 2 == 0) {
            contPares++;
        }
        else {
            contImpares++;
        }
    }
    
    printf("\nPares: %d, Ímpares: %d\n\n", contPares, contImpares);
    
    //g. Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
    //“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
    //números positivos e negativos lidos
    contPares = 0; // para positivos
    contImpares = 0; // para negativos
    
    printf("Sorteio de 20 números entre -10 e 10:\n");
    
    for (i = 0; i < 20; i++) {
        sorteio = (rand() % 21) - 10;
        printf("%d ", sorteio);
        
        if (sorteio > 0) {
            printf("POSITIVO\n");
            contPares++;
        }
        else if (sorteio < 0) {
            printf("NEGATIVOS\n");
            contImpares++;
        }
        else {
            printf("NULO\n");
        }
    }
    
    printf("Quantidade de POSITIVOS: %d, NEGATIVOS: %d\n\n", contPares, contImpares);
    
    //h. Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
    //que deverão ser lidos e também deve ser lido do teclado)
    
    printf("Digite a quantidade de números que deseja sortear para somar: ");
    scanf("%d, ", &n);
    
    soma = 0;
    
    printf("Sorteando %d números:\n", n);
    
    for (i = 0; i < n; i++) {
        num = rand() % 101;
        printf("%d ", num);
        soma += num;
    }
    
    printf("\nSoma dos números: %d\n", soma);
    
    return 0;
}