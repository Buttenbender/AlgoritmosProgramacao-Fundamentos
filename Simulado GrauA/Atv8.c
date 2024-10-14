/*
* Programa: Atv8.c
* Descrição: Você está desenvolvendo um programa para monitoramento de uma área de floresta. A cada
* dia, são feitos registros da quantidade de chuva (em mm). Escreva um programa que leia os
* registros diários de chuva para uma semana e informe:
* a. O total de chuva acumulada.
* b. O dia com maior quantidade de chuva.
* c. Se em algum dia a chuva foi menor que 5 mm, exiba uma mensagem de alerta sobre
* possível seca.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/10/2024
* Última modificação: 02/10/2024
*/

#include <stdio.h>

int main() {
    int i, diaMaior = 0;
    float qntdChuva, total = 0, maior = 0;
    
    for (i = 0; i < 7; i++) {
        printf("Digite a quantidade de chuva (em mm) do dia %d: ", i + 1);
        scanf("%f", &qntdChuva);
        
        total += qntdChuva;
        
        if (qntdChuva > maior) {
            maior = qntdChuva;
            diaMaior = i;
        }
        
        if (qntdChuva < 5) {
            printf("Alerta de possível seca no dia %d.\n", i + 1);
        }
    }
    
    printf("Total de chuva acumulada: %.2f mm.\n", total);
    printf("Dia com maior quantidade de chuva: Dia %d.\n", diaMaior + 1);
    
    return 0;
}