/*
* Programa: Atv5.c
* Descrição: Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para
* ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer.
* Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
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
