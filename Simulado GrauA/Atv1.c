/*
* Programa: Atv1.c
* Descrição: Faça um programa que leia números inteiros até que o usuário digite 0. 
* No final, imprima a porcentagem de números positivos, negativos, divisíveis por 
* 2, e divisíveis por 5.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/10/2024
* Última modificação: 02/10/2024
*/

#include <stdio.h>

int main() {
    int num = 1, total = 0, positivos = 0, negativos = 0, div2 = 0, div5 = 0;
    
    do {
        printf("Digite um número inteiro (Se quiser parar o programa, digite 0): ");
        scanf("%d", &num);
        
        if (num !=0) {
            total++;
            
            if (num > 0) {
                positivos++;
            }
            else if (num < 0) {
                negativos++;
            }
            
            if (num % 2 == 0) {
                div2++;
            }
            if (num % 5 == 0) {
                div5++;
            }
        }
        
    } while (num != 0);
    
    if (total > 0) {
        printf("Porcentagem de Positivos: %.2f.\n", positivos / (float) total * 100);
        printf("Porcentagem de Negativos: %.2f.\n", negativos / (float) total * 100);
        printf("Porcentagem de Divisiveis por 2: %.2f.\n", div2 / (float) total * 100);
        printf("Porcentagem de Divisiveis por 5: %.2f.\n", div5 / (float) total * 100);
    }
    else {
        printf("Nenhum número foi digitado!");
    }

    return 0;
}