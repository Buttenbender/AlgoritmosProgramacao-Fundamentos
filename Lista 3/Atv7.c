/*
* Programa: Atv7.c
* Descrição: Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
* deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
* segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é
* 318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    float salario, desconto;

    printf("Digite o salário a ser calculado: ");
    scanf("%f", &salario);

    desconto = salario * 0.11;

    if (desconto > 318.20) {
        desconto = 328.20;
    }

    printf("O valor do desconto é de: %.2f\n", desconto);

    return 0;
}
