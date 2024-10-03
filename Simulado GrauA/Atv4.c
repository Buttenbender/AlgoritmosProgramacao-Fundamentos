/*
* Programa: Atv4.c
* Descrição: Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de
* um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores.
* Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e
* exibir uma mensagem indicando o sensor que disparou a ação.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 02/10/2024
* Última modificação: 02/10/2024
*/

#include <stdio.h>

int main() {
    int i;
    float umidade;
    
    for (i = 0; i < 5; i++) {
        printf("Digite a porcentagem de umidade do sensor %d: ", i + 1);
        scanf("%f", &umidade);
        
        if (umidade < 30.0) {
            printf("Irrigação ativada pelo sensor %d. Umidade: %.2f.\n", i + 1, umidade);
        }
    }
    
    return 0;
}