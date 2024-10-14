#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int posHamster1 = 0, posHamster2 = 0, movimento1, movimento2;
    
    srand(time(0));
    
    // loop até que algum hamster chegue na posição 12
    while (posHamster1 < 12 && posHamster2 < 12) {
        // sorteio dos movimentos
        movimento1 = rand() % (5 - 1 + 1) + 1;
        movimento2 = rand() % (5 - 1 + 1) + 1;
        
        //calculando a posição do hamster 1
        if (movimento1 == 1) {
            posHamster1 += 1;
        }
        else if (movimento1 == 2) {
            posHamster1 += 2;
        }
        else if (movimento1 == 4) {
            posHamster1 -= 1;
        }
        else if (movimento1 == 5) {
            posHamster1 -= 2;
        }
        if (posHamster1 < 0) {
            posHamster1 = 0;
        }
        
        // calculando a posição do hamster 2
        if (movimento2 == 1) {
            posHamster2 += 1;
        }
        else if (movimento2 == 2) {
            posHamster2 += 2;
        }
        else if (movimento2 == 4) {
            posHamster2 -= 1;
        }
        else if (movimento2 == 5) {
            posHamster2 -= 2;
        }
        if (posHamster2 < 0) {
            posHamster2 = 0;
        }
        
        // limpando a tela
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        
        // exibindo a posição dos hamsters
        printf("H1: ");
        for (int i = 0; i < posHamster1; i++) {
            printf("*");
        }
        printf("\n");
        
        printf("H2: ");
        for (int i = 0; i < posHamster2; i++) {
            printf("*");
        }
        printf("\n");
        
        printf("Pressione Enter para continuar para o próximo turno...");
        getchar();
    }
    
    // declarando o vencedor
    if (posHamster1 >= 12 && posHamster2 >= 12) {
        printf("Empate!\n");
    }
    else if (posHamster1 >= 12) {
        printf("Hamster 1 venceu!\n");
    }
    else {
        printf("Hamster 2 venceu!\n");
    }

    return 0;
}