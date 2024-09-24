#include <stdio.h>

int main() {
    double num1, num2, resposta;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o divisor: ");
    scanf("%lf", &num2);

    if (num2 != 0) {
        resposta = num1 / num2;

        printf("A resposta final é %lf.\n", resposta);
    }
    else {
        printf("Impossível de resolver, pois o divisor é 0.");
    }

    return 0;
}