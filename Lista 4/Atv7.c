/*
* Programa: Atv7.c
* Descrição: Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50], primeiro[50];
    int i;
    
    printf("Digite 5 nomes:\n");
    for (i = 0; i< 5; i++) {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
    
    strcpy(primeiro, nomes[0]);
    
    for (i = 1; i < 5; i++) {
        if (strcmp(nomes[i], primeiro) < 0) {
            strcpy(primeiro, nomes[i]);
        }
    }
    
    printf("O primeiro nome em ordem alfabética é: %s\n", primeiro);
    
    return 0;
}