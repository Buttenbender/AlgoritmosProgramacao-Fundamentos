#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'r') {
            frase[i] = 'l';
        }
    }
    
    printf("Frase alterada: %s", frase);
}