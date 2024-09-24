#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaUsuario, numUsuario, numSorteado, soma, parOuImpar;

    printf("Escolha PAR ou ÍMPAR (digite 1 para par ou 2 para ímpar): ");
    scanf("%d", &parOuImpar);

    printf("Escolha um número de 0 a 5: ");
    scanf("%d", &numUsuario);

    if (numUsuario < 0 || numUsuario > 5) {
        printf("Número digitado é inválido!");
        return 1;
    }

    srand(time(NULL));
    numSorteado = rand() % 6;

    printf("O número sorteado foi: %d\n", numSorteado);

    soma = numUsuario + numSorteado;

    if ((soma % 2 == 0 && parOuImpar == 1) || (soma % 2 != 0 && parOuImpar == 2)) {
        printf("Você venceu!\n");
    }
    else {
        printf("O programa venceu!\n");
    }

    return 0;
}