#include <stdio.h>

int main() {
    int num;

    printf("Digite o número: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("O número é divisível por 3.");
    }
    else {
        printf("O número não é divisível por 3.");
    }

    return 0;
}