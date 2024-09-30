/*
* Programa: Atv10.c
* Descrição: Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
* simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
* começo do programa quantas faces quer, para depois fazer o sorteio
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numFaces, sorteio;

    printf("Informe o número de faces do dado que deseja sortear (4, 6, 8, 10, 12, 16): ");
    scanf("%d", &numFaces);

    if (numFaces !=4 && numFaces !=6 && numFaces !=8 && numFaces !=10 && numFaces !=12 && numFaces !=16) {
        printf("Número de faces inválido! Por favor informe um dos valores permitidos!");
        return 1;
    }

    srand(time(NULL));

    sorteio = (rand() % numFaces) + 1;

    printf("Você rolou o dado de %d faces e o sorteio foi: %d\n", numFaces, sorteio);

    return 0;
}
