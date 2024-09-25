/*
* Programa: Atv13.c
* Descrição: Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme
* as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou
* em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau
* A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o
* grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    float grauA, grauB, grauC, mediaFinal;
    char substituicao;

    printf("Digite sua nota do Grau A: ");
    scanf("%f", &grauA);

    printf("Digite sua nota do Grau B: ");
    scanf("%f", &grauB);

    mediaFinal = (grauA * (1.0 / 3.0)) + (grauB * (2.0 / 3.0));

    printf("Sua média final ficou: %.2f\n");

    if (mediaFinal >= 6.0) {
        printf("Aluno aprovado por média.\n");
    }
    else {
        printf("Aluno em recuperação (Grau C)!\n");

        printf("Deseja substituir a nota do Grau A ou a nota do Grau B? (Digite 'a' ou 'b'): ");
        scanf("%c", &substituicao);

        printf("Digite a nota do Grau C: ");
        scanf("%f", &grauC);

        if (substituicao == 'a') {
            mediaFinal = (grauC * (1.0 / 3.0)) + (grauB * (2.0 / 3.0));
        }
        else if (substituicao == 'b') {
            mediaFinal = (grauA * (1.0 / 3.0)) + (grauC * (2.0 / 3.0));
        }
        else {
            printf("Opção inválida!\n");
            return 1;
        }

        print("Sua nova média final ficou: %.2f\n", mediaFinal);

        if (mediaFinal >= 6.0) {
            printf("Aluno aprovado após substituição.\n");
        }
        else {
            printf("Aluno reprovado após substituição.\n");
        }
    }

    return 0;
}
