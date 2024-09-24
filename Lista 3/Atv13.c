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