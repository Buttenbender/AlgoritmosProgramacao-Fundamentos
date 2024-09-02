/*
* Programa: Atv3.c
* Descrição: Pergunta qual o nome do Batman e analisa se a resposta está correta ou errada
* Autor: João Pedro Bütenbender da Silva
* Data de criação: 29/08/2024
* Última modificação: 29/08/2024
*/

#include <stdio.h>

int main() {
    char resposta;

    printf("Qual o verdadeiro nome do super-herói Batman?\n");
    printf("a) Bruce Wayne\nb) Clark Kent\nc) Peter Parker\nd) Tony Stark\ne) Steve Rogers\n");
    printf("Digite sua resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'a') {
        printf("Você respondeu a alternativa a.\nSua resposta está... Correta!");
    }
    else {
        printf("Você respondeu a alternativa %c.\n", resposta);
        printf("Sua resposta está... Errada!\nResposta correta era a alternativa a.");
    }

    return 0;
}
