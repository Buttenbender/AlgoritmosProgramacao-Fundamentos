#include <stdio.h>

int main() {
    int num, resultado;

    printf("Digite o número: ");
    scanf("%d", &num);

    if (num > 0) {
        resultado = num * 2;
    }
    else {
        resultado = num * 3;
    }

    printf("O resultado é: %d.\n");

    return 0;
}