/*
* Programa: Atv5.c
* Descrição: Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
* de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
* e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
* estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
* média geral dos alunos.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>

int main() {
    int qntdAlunos, i;
    float grauA, grauB, media, grauC, soma = 0.0, mediaFinal;
    char substituir;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qntdAlunos);
    
    for (i = 0; i < qntdAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        
        printf("Digite a nota do Grau A: ");
        scanf("%f", &grauA);
        
        printf("Digite a nota do Grau B: ");
        scanf("%f", &grauB);
        
        media = (grauA * (1.0 / 3.0)) + (grauB * (2.0 / 3.0));
        
        printf("Sua média é %.2f.\n", media);
        
        if (media >= 6.0) {
            printf("APROVADO\n");
        }
        else {
            printf("Aluno em recuperação!\n");
            
            printf("Digite a nota do Grau C: ");
            scanf("%f", &grauC);
            
            printf("Você deseja substituir a nota do Grau A ou B (A ou B)? ");
            scanf(" %c", &substituir);
            
            if (substituir == 'A' || substituir == 'a') {
                media = (grauC * (1.0 / 3.0)) + (grauB * (2.0 / 3.0));
            }
            else if (substituir == 'B' || substituir == 'b') {
                media = (grauA * (1.0 / 3.0)) + (grauC * (2.0 / 3.0));
            }
            else {
                printf("Opção Inválida! Por favor, ecolha o Grau A ou o Grau B.\n");
                continue;
            }
            
            printf("Sua média com a recuperação é %.2f.\n", media);
            
            if (media >= 6.0) {
                printf("APROVADO\n");
            }
            else {
                printf("REPROVADO\n");
            }
        }
        
        soma += media;
    }
    
    mediaFinal = soma / qntdAlunos;
    
    printf("A média final dos %d alunos é %.2f.\n", qntdAlunos, mediaFinal);
    
    return 0;
}