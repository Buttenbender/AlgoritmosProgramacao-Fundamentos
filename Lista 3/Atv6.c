/*
* Programa: Atv6.c
* Descrição: Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
* disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
* um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
* soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
* que o programa venceu
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

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
