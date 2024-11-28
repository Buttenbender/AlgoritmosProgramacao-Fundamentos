#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear(int inicio, int fim) {
    int numSorteado;
    
    if (fim > inicio) {
        numSorteado = rand() % (fim - inicio + 1) + inicio;
    }
    else {
        numSorteado = rand() % (inicio - fim + 1) + fim;
    }
    
    return numSorteado;
}

int main() {
    srand(time(0));
    
    int inicio, fim;
    
    printf("Digite um número para ser o início: ");
    scanf("%d", &inicio);
    
    printf("Digite um número para ser o fim: ");
    scanf("%d", &fim);
    
    int numSorteado = sortear(inicio, fim);
    
    printf("O número sorteado foi: %d\n", numSorteado);
    
    return 0;
}