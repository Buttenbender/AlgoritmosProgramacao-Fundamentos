/*
* Programa: Atv4.c
* Descrição: Permite que um aluno calcule a sua média final somando a nota do grau A e a do grau B
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/09/2024
* Última modificação: 02/09/2024
*/

#include <stdio.h>

int main() {
    double nota1, nota2, notaFinal;

    printf("Digite a sua nota do Grau A: ");
    scanf("%lf", &nota1);

    printf("Digite a sua nota do Grau B: ");
    scanf("%lf", &nota2);

    notaFinal = (nota1 + 2 * nota2) / 3;

    printf("A sua média final é: %2.lf\n", notaFinal);

    return 0;
}
