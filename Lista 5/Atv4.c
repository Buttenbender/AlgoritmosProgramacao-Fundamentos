/*
* Programa: Atv4.c
* Descrição: Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um
* programa que:
* a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
* b. Calcule o total de passos dados na semana.
* c. Calcule a média diária de passos.
* d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
* informe quais dias a meta foi alcançada.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 06/11/2024
* Última modificação: 06/11/2024
*/

#include <stdio.h>

int main() {
    int passos[7];
    int total = 0;
    int meta = 10000;
    
    printf("Digite o núemro de passos em cada dia da semana:\n");
    
    for (int i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &passos[i]);
        
        total += passos[i];
    }
    
    printf("Total de passos na semana: %d\n", total);
    
    double media = total / 7.0;
    printf("Média diária de passos: %2.f\n", media);
    
    printf("Dias em que a meta de 10.000 passos foi atingida:\n");
    
    int atingiuMeta = 0;
    
    for (int i = 0; i < 7; i++) {
        if (passos[i] >= meta) {
            printf("Dia %d: %d passos\n", i + 1, passos[i]);
            atingiuMeta = 1;
        }
    }
    
    if (!atingiuMeta) {
        printf("A meta não foi atingida em nenhum dia!\n");
    }
    
    return 0;
}