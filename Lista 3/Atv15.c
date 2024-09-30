/*
* Programa: Atv15.c
* Descrição: Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
* normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
* para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
* 1 - À vista em dinheiro, recebe 15% de desconto
* 2 - À vista no cartão de crédito, recebe 10% de desconto
* 3 - Em duas vezes, preço normal de etiqueta sem juros
* 4 - Em três vezes, preço normal de etiqueta mais juros de 10%
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    float valor, valorFinal;
    int opc;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    
    printf("Formas de Pagamento:\n");
    printf("1) A vista em dinheiro\n");
    printf("2) A vista no cartão de crédito\n");
    printf("3) Em duas vezes\n");
    printf("4) Em três vezes\n");
    
    printf("Escolha a forma de pagamento: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            valorFinal = valor * 0.85;
            printf("O valor final a vista em dinheiro é: R$ %.2f\n", valorFinal);
            break;
        case 2:
            valorFinal = valor * 0.90;
            printf("O valor final a vista no cartão de crédito é: R$ %.2f\n", valorFinal);
            break;
        case 3:
            valorFinal = valor;
            printf("O valor em duas vezes é: R$ %.2f\n", valorFinal);
            break;
        case 4:
            valorFinal = valor * 1.10;
            printf("O valor em três vezes é: R$ %.2f\n", valorFinal);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    return 0;
}
