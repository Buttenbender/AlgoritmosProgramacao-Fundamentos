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