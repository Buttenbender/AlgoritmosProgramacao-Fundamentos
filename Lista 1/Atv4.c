/*
* Programa: Atv4.c
* Descrição: Tornar a atividade 3 mais flexível
* Autor: João Pedro Bütenbender da Silva
* Data de criação: 29/08/2024
* Última modificação: 29/08/2024
*/

#include <stdio.h>

int main() {
    char questao[] = "Qual o verdadeiro nome do super-herói Batman?";
    char alternativas[5][100] = {
        "Bruce Wayne",
        "Clark Kent",
        "Peter Parker",
        "Tony Stark",
        "Steve Rogers"
    };

    char respostaCorreta = 'a';
    char resposta;

    printf("%s\n", questao);
    printf("a) %s\nb) %s\nc) %s\nd) %s\ne) %s\n", alternativas[0], alternativas[1], alternativas[2], alternativas[3], alternativas[4]);

    printf("Digite sua resposta: ");
    scanf(" %c", &resposta);

    if (resposta == respostaCorreta) {
        printf("Você respondeu a alternativa %c.\nSua resposta está... Correta!\n", resposta);
    }
    else {
        printf("Você respondeu a alternativa %c.\n", resposta);
        printf("Sua resposta está... Errada!\nResposta correta era a alternativa %c.\n", respostaCorreta);
    }

    return 0;
}
