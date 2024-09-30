/*
* Programa: Atv6.c
* Descrição: Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
* dos valores sorteados.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valores[5], i, menor, maior;
    float soma = 0.0, media;
    
    srand(time(NULL));
    
    printf("Valores sorteados:\n");
    for (i = 0; i < 5; i++) {
        valores[i] = rand() % 101;
        printf("%d ", valores[i]);
        
        soma += valores[i];
        
        if (i == 0) {
            menor = maior = valores[i];
        }
        else {
            if (valores[i] < menor) {
                menor = valores[i];
            }
            
            if (valores[i] > maior) {
                maior = valores[i];
            }
        }
    }
    printf("\n");
    
    media = soma / 5;
    
    printf("O menor valor é: %d.\n", menor);
    printf("O maior valor é: %d.\n", maior);
    printf("A média final dos valores é: %.2f.\n", media);
    
    return 0;
}