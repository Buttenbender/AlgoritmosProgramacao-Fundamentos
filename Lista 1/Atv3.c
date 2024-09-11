/*
* Programa: Atv3.c
* Descrição: Escreva um programa em C que realize o seguinte procedimento:
* a. Imprima na tela a seguinte questão: Qual é o verdadeiro nome do super-herói Batman?
* b. Apresente cinco alternativas para o usuário, cada uma em uma linha: a) Bruce Wayne b)
* Clark Kent c) Peter Parker d) Tony Stark e) Steve Rogers
* c. Armazene a letra correspondente à resposta correta (‘a’) em uma variável.
* d. Solicite ao usuário que digite sua resposta, e a armazene em uma variável.
* e. Ao final, o programa deve exibir na tela a resposta do usuário e a resposta correta. Por
* exemplo, se o usuário digitou como resposta a alternativa ‘d’, a mensagem seria esta:
* Você respondeu alternativa d. A resposta correta é a alternativa a
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
