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