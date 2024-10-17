/*
* Programa: Atv3.c
* Descrição: Você está desenvolvendo um simulador ambiental que mede o nível de poluição do ar em
* uma cidade. O nível de poluição é medido a cada 3 horas. Escreva um programa que leia 8
* medições (um dia completo) e determine:
* a) A média de poluição diária.
* b) Se alguma medição excedeu 150 ppm (partes por milhão), exiba uma mensagem de
* alerta sobre qualidade do ar.
* c) Ao final, exiba o número total de medições que geraram um alerta.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 16/10/2024
* Última modificação: 16/10/2024
*/

#include <stdio.h>

int main() {
    int i, diasAlerta = 0;
    float nivelPoluicao, total = 0, media;
    
    for (i = 0; i < 8; i++) {
        printf("Digite o valor da %d° medição: ", i + 1);
        scanf("%f", &nivelPoluicao);
        
        total += nivelPoluicao;
        
        if (nivelPoluicao > 150.0) {
            printf("Alerta! A medição excedeu 150 ppm!\n");
            diasAlerta++;
        }
    }
    
    media = total / 8;
    
    printf("Média de poluição diária: %.2f.\n", media);
    printf("Total de medições que geraram alerta: %d medições.\n", diasAlerta);
    
    return 0;
}