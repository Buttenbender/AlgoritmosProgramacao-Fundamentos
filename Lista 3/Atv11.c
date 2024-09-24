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