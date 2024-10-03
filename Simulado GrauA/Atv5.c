/*
* Programa: Atv5.c
* Descrição: Escreva um programa que sorteie um número entre 1 e 100. O usuário deve tentar adivinhar o
* número sorteado, e o programa deve informar se o palpite está muito alto, muito baixo ou
* correto. O programa termina quando o usuário acerta o número.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/10/2024
* Última modificação: 02/10/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numSorteado, numAdivinhado;
    
    srand(time(NULL));
    
    numSorteado = rand() % (100 - 1 + 1) + 1;
    
   do {
        printf("Tente adivinhar um número de 1 a 100: ");
        scanf("%d", &numAdivinhado);
    
        if (numAdivinhado > numSorteado) {
            printf("O palpite está muito alto!\n");
        }
        else if (numAdivinhado < numSorteado) {
            printf("O palpite está muito baixo!\n");
        }
        else {
            printf("Você acertou! O número era: %d.\n", numSorteado);
        }
   } while (numAdivinhado != numSorteado);
   
   return 0;
}