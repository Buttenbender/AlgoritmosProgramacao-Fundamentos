/*
* Programa: Atv6.c
* Descrição: Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios
* diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o
* exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7
* dias consecutivos e calcule:
* a. O total de tempo exercitado na semana.
* b. A média de tempo diário.
* c. O dia em que o paciente realizou o maior tempo de exercício.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/10/2024
* Última modificação: 02/10/2024
*/

#include <stdio.h>

int main() {
    float tempo, total = 0, maior = 0;
    int diaMaior = 0, i;
    
    for (i = 0; i < 7; i++) {
        printf("Digite o tempo de exercício no dia %d (em minutos): ", i + 1);
        scanf("%f", &tempo);
        
        total += tempo;
        
        if (tempo > maior) {
            maior = tempo;
            diaMaior = i;
        }
    }
    
    printf("Total de tempo exercitado nessa semana: %.2f minutos.\n", total);
    printf("Média diária: %.2f minutos.\n", total / 7);
    printf("Dia com maior tempo de exercício: Dia %d (%.2f minutos).\n", diaMaior + 1, maior);

    return 0;
}