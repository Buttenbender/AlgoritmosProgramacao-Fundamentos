/*
* Programa: Atv11.c
* Descrição: Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de
* cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50,
* R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao
* solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram
* exibidas informações sobre as demais cédulas):
* 1 nota(s) de R$ 10.
* 1 nota(s) de R$ 5.
* 3 nota(s) de R$ 1
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    int valor, qntd;

    int notas[] = {100, 50, 20, 10, 5, 1};
    int numNotas = sizeof(notas) / sizeof(notas[0]);

    printf("Digite o valor a ser sacado: R$");
    scanf("%d", &valor);

    printf("Notas necessárias:\n");

    for (int i = 0; i < numNotas; i++) {
        if (valor >= notas[i]) {
            qntd = valor / notas[i];
            valor %= notas[i];

            printf("%d nota(s) de R$ %d\n", qntd, notas[i]);
        }
    }

    return 0;
}
