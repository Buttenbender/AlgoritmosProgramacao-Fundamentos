#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int matriz[5][5];
    int contagem[5] = {0};
    
    printf("Matriz Gerada:\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % (4 - 0 + 1) + 0;
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            contagem[matriz[i][j]]++;
        }
    }
    
    printf("Contagem dos Valores:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Quantidade de valores %d: %d\n", i, contagem[i]);
    }
    
    return 0;
}