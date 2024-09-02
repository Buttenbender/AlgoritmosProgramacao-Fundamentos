/*
* Programa: Atv5.c
* Descrição: calcula quantos litros dá para abastecer considerando o valor do litro e o valor disponível para gastar
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double precoLitro, valorDisponivel, litros;

    printf("Digite o preço do litro da gasolina: ");
    scanf("%lf", &precoLitro);

    print("Digite o valor disponível para abastecer: ");
    scanf("%lf", &valorDisponivel);

    litros = valorDisponivel / precoLitro;

    printf("Você pode abastecer %.2lf litros de gasolina.\n", litros);

    return 0;
}