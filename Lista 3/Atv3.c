/*
* Programa: Atv3.c
* Descrição: Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo
* o resultado
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    int num, resultado;

    printf("Digite o número: ");
    scanf("%d", &num);

    if (num > 0) {
        resultado = num * 2;
    }
    else {
        resultado = num * 3;
    }

    printf("O resultado é: %d.\n");

    return 0;
}
