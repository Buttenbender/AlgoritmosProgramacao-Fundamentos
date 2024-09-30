/*
* Programa: Atv8.c
* Descrição: Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a
* execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é
* definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>

int main() {
    char opc;
    int numero, fatorial, i;
    
    do {
        printf("Entre com um número: ");
        scanf("%d", &numero);
        
        if (numero < 0) {
            printf("O número não pode ser negativo!\n");
        }
        else {
            fatorial = 1;
            
            for (i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            
            printf("O fatorial de %d é %d.\n", numero, fatorial);
        }
        
        printf("Caclular outro número (S/N)? ");
        scanf(" %c", &opc);
        
    } while (opc == 's' || opc == 'S');
    
    return 0;
}