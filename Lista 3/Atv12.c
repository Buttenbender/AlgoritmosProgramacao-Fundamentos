/*
* Programa: Atv12.c
* Descrição: A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
* algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 24/09/2024
* Última modificação: 24/09/2024
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    }
    else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    }
    else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } 
    else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    }
    else if (idade >= 18) {
        printf("Categoria: Sênior\n");
    }
    else {
        printf("Idade inválida para as categorias!\n");
    }

    return 0;
}
