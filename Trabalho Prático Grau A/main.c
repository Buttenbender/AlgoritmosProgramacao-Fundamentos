#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opc, populacao, taxaCrescimento, ciclos, crescimento, condicao;
    
    srand(time(0));
    
    do {
        printf("--- Simulação de Crescimento Bacteriano ---\n");
        printf("\n1 - Nova Simulação\n");
        printf("2 - Sair do Programa\n");
        
        printf("\nEscolha sua opção: ");
        scanf("%d", &opc);
        
        if (opc == 2) {
            break;
        }

        printf("\n--- Digite as Seguintes Informações ---\n");
        printf("\nPopulação Inicial de Bactérias: ");
        scanf("%d", &populacao);
        printf("Taxa de Crescimento (em porcentagem): ");
        scanf("%d", &taxaCrescimento);
        printf("Número de Ciclos: ");
        scanf("%d", &ciclos);
        
        for (int i = 0; i < ciclos; i++) {
            crescimento = (populacao * taxaCrescimento) / 100;
            populacao += crescimento;
            
            condicao = rand() % 100;
            
            if (condicao < 20) {
                populacao -= (populacao * 30) / 100;
                printf("Ciclo %d: População = %d (Condição Ambiental: Alta Temperatura)\n", i + 1, populacao);
            }
            else if (condicao < 35) {
                populacao -= (populacao * 25) / 100;
                printf("Ciclo %d: População = %d (Condição Ambiental: Falta de Nutrientes)\n", i + 1, populacao);
            }
            else if (condicao < 45) {
                populacao -= (populacao * 20) / 100;
                printf("Ciclo %d: População = %d (Condição Ambiental: Excesso de Umidade)\n", i + 1, populacao);
            }
            else if (condicao < 50) {
                populacao -= (populacao * 50) / 100;
                printf("Ciclo %d: População = %d (Condição Ambiental: Radiação Ultravioleta)\n", i + 1, populacao);
            }
            else if (condicao < 60) {
                populacao += (populacao * 20) / 100;
                printf("Ciclo %d: População = %d (Condição Ambiental: Condição Favorável)\n", i + 1, populacao);
            }
            else {
                printf("Ciclo %d: População = %d\n", i + 1, populacao);
            }
            
            if (populacao <= 0) {
                printf("A população morreu no ciclo %d. Simulação Encerrada.\n", i + 1);
                break;
            }
        }
        
        printf("\nSimulação Concluida. População Final: %d.\n\n", populacao);
        
    } while (opc == 1);
    
    printf("\nPrograma Encerrado.\n");
    
    return 0;
}
