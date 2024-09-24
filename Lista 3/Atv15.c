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