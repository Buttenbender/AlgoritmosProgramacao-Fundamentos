#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opc, populacaoInicial, taxaCrescimento, ciclos, crescimento, condicao;
    
    srand(time(0));
    
    printf("--- Simulação de Crescimento Bacteriano ---\n");
    
    printf("\n1 - Nova Simulação\n");
    printf("2 - Sair do Programa\n");
    printf("\nEscolha sua opção: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            printf("\n--- Digite as Seguintes Informações ---\n");
            
            printf("\nPopulação Inicial de Bactérias: ");
            scanf("%d", &populacaoInicial);
            
            printf("Taxa de Crescimento: ");
            scanf("%d", &taxaCrescimento);
            
            printf("Número de Ciclos: ");
            scanf("%d", &ciclos);
            
            for (int i = 0; i < ciclos; i++) {
                crescimento = (populacaoInicial * taxaCrescimento) / 100;
                populacaoInicial += crescimento;
                
                condicao = rand() % 100;
                
                if (condicao < 20) {
                    populacaoInicial -= (populacaoInicial * 30) / 100;
                    printf("Ciclo %d: População = %d (Condição Ambiental: Alta Temperatura)\n", i + 1, populacaoInicial);
                }
                else if (condicao < 35) {
                    populacaoInicial -= (populacaoInicial * 25) / 100;
                    printf("Ciclo %d: População = %d (Condição Ambiental: Falta de Nutrientes)\n", i + 1, populacaoInicial);
                }
                else if (condicao < 45) {
                    populacaoInicial -= (populacaoInicial * 20) / 100;
                    printf("Ciclo %d: População = %d (Condição Ambiental: Excesso de Umidade)\n", i + 1, populacaoInicial);
                }
                else if (condicao < 50) {
                    populacaoInicial -= (populacaoInicial * 50) / 100;
                    printf("Ciclo %d: População = %d (Condição Ambiental: Radiação Ultravioleta)\n", i + 1, populacaoInicial);
                }
                else if (condicao < 60) {
                    populacaoInicial += (populacaoInicial * 20) / 100;
                    printf("Ciclo %d: População = %d (Condição Ambiental: Condição Favorável)\n", i + 1, populacaoInicial);
                }
                else {
                    printf("Ciclo %d: População = %d\n", i + 1, populacaoInicial);
                }
                
                if (populacaoInicial <= 0) {
                    printf("A população morreu no ciclo %d. Simulação Encerrada.\n", i + 1);
                    return 1;
                }
            }
            
            printf("\nSimulação Concluida. População Final: %d.\n", populacaoInicial);
            
            break;
        case 2:
            printf("\nPrograma Encerrado.\n");
            break;
            
            return 0;
        default:
            printf("\nOpção Inválida!\n");
            break;
    }
}