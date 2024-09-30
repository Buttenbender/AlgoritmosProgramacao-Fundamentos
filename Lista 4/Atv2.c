/*
* Programa: Atv2.c
* Descrição: Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
* A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, tentativa, i;
    
    srand(time(NULL));
    
    numeroSorteado = (rand() % 10) + 1;
    
    printf("Tente adivinhar o número entre 1 a 10. Você tem 3 chances!\n");
    
    for (i = 0; i < 3; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &tentativa);
        
        if (tentativa < 1 || tentativa > 10) {
            printf("Digite apenas números entre 1 e 10!");
            continue;
        }
        
        if (tentativa == numeroSorteado) {
            printf("Parabéns, você acertou o número!");
            return 0;
        }
        else if (tentativa < numeroSorteado) {
            printf("O número a adivinhar é maior que %d.\n", tentativa);
        }
        else {
            printf("O número a adivinhar é menor que %d.\n", tentativa);
        }
    }
    
    printf("Suas chances acabaram, o número era: %d.\n", numeroSorteado);
    
    return 0;
}