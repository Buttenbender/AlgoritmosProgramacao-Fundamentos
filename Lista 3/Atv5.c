#include <stdio.h>

int main() {
    int num;

    printf("Digite o número: ");
    scanf("%d", &num);

    if (2 % num == 0) {
        printf("O número é par.");
    }
    else {
        printf("O número é impar.");
    }

    return 0;
}