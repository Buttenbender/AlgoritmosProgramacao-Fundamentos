/*
* Programa: Atv4.c
* Descrição: Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
* resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
* especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
* após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 30/09/2024
* Última modificação: 30/09/2024
*/

#include <stdio.h>

int main() {
    int divisor, inicio, final, i;
    
    printf("Entre com o valor do divisor: ");
    scanf("%d", &divisor);
    
    printf("Início do intervalo: ");
    scanf("%d", &inicio);
    printf("Final do intervalo: ");
    scanf("%d", &final);
    
    printf("Números divisiveis por %d entre %d e %d:\n", divisor, inicio, final);
    
    for (i = inicio; i <= final; i++) {
        if (i % divisor == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}