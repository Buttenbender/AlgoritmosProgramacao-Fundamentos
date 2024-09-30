/*
* Programa: Atv3.c
* Descrição: Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>

int main() {
    int numero, i;
    char continuar;
    
    do {
        do {
            printf("Entre com um número (1 a 9): ");
            scanf("%d", &numero);
            
            if (numero < 1 || numero > 9) {
                printf("Número inválido! Por favor, digite um número entre 1 e 9!\n");
            }
        } while (numero < 1 || numero > 9);
        
        printf("Tabuada de %d:\n", numero);
        
        for (i = 0; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
        
        printf("Calcular outro número (S/N)? ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    
    printf("Obrigado por usar o programa!");
    
    return 0;
}