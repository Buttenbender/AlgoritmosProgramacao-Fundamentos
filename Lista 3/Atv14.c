#include <stdio.h>

int main() {
    int idade;
    float valor = 300.0, valorAdicional = 0.0, valorFinal;

    printf("Digite a idade do(a) paciente: ");
    scanf("%d", &idade);

    if (idade < 10) {
        valorAdicional = 100.0;
    }
    else if (idade >= 10 && idade <= 30) {
        valorAdicional = 220.0;
    }
    else if (idade >= 31 && idade <= 60) {
        valorAdicional = 395.0;
    }
    else if (idade > 60) {
        valorAdicional = 480.0;
    }

    valorFinal = valor + valorAdicional;

    printf("O valor final é: R$ %.2f\n", valorFinal);

    return 0;
}