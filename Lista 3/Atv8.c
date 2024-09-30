/*
* Programa: Atv8.c
* Descrição: Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
* da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
* for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
* tela o valor de venda
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    float valorProduto, valorFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    if (valorProduto < 20.00) {
        valorFinal = valorProduto * 1.45;
    }
    else if (valorProduto >= 20.00 && valorProduto <= 50.00) {
        valorFinal = valorProduto * 1.35;
    }
    else {
        valorFinal = valorProduto * 1.25;
    }

    printf("O produto deverá ser vendido por: R$%.2f\n", valorFinal);

    return 0;
}
