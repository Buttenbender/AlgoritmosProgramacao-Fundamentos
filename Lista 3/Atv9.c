#include <stdio.h>

int main() {
    float euro, dolar, valor, resultado;
    int opc;

    printf("Informe o valor do Euro em Reais hoje: ");
    scanf("%f", &euro);

    printf("Informe o valor do Dolar em Reais hoje: ");
    scanf("%f", &dolar);

    while (opc != 7) {
        printf("Menu de Opções:\n");
        printf("1) Converter de Real para Euro\n");
        printf("2) Converter de Real para Dolar\n");
        printf("3) Converter de Euro para Dolar\n");
        printf("4) Converter de Euro para Real\n");
        printf("5) Converter de Dolar para Euro\n");
        printf("6) Converter de Dolar para Real\n");
        printf("7) Sair\n");

        printf("Escolha uma Opção: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                printf("Digite o valor em Reais: ");
                scanf("%f", &valor);

                resultado = valor / euro;

                printf("Valor em Euros é: %.2f\n", resultado);

                break;
            case 2:
                printf("Digite o valor em Reais: ");
                scanf("%f", &valor);

                resultado = valor / dolar;

                printf("Valor em Dolares é: %.2f\n", resultado);

                break;
            case 3:
                printf("Digite o valor em Euros: ");
                scanf("%f", &valor);

                resultado = (valor * euro) / dolar;

                printf("Valor em Dolares é: %.2f\n", resultado);

                break;
            case 4:
                printf("Digite o valor em Euros: ");
                scanf("%f", &valor);

                resultado = valor * euro;

                printf("Valor em Reais é: %.2f\n", resultado);

                break;
            case 5:
                printf("Digite o valor em Dolares: ");
                scanf("%f", &valor);

                resultado = (valor * dolar) / euro;

                printf("Valor em Euros é: %.2f\n", resultado);

                break;
            case 6:
                printf("Digite o valor em Dolares: ");
                scanf("%f", &valor);

                resultado = valor * dolar;

                printf("Valor em Reais é: %.2f\n", resultado);

                break;
            case 7:
                printf("Saindo do programa...\n");

                break;
            default:
                printf("Opção Inválida! Tente novamente.\n");

                break;
        }
    }

    return 0;
}