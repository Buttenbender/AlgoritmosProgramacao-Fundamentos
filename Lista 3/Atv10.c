#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numFaces, sorteio;

    printf("Informe o número de faces do dado que deseja sortear (4, 6, 8, 10, 12, 16): ");
    scanf("%d", &numFaces);

    if (numFaces !=4 && numFaces !=6 && numFaces !=8 && numFaces !=10 && numFaces !=12 && numFaces !=16) {
        printf("Número de faces inválido! Por favor informe um dos valores permitidos!");
        return 1;
    }

    srand(time(NULL));

    sorteio = (rand() % numFaces) + 1;

    printf("Você rolou o dado de %d faces e o sorteio foi: %d\n", numFaces, sorteio);

    return 0;
}