/*
* Programa: Atv1.c
* Descrição: Implementando o próprio “shuffle” em arrays: faça um algoritmo que receba um array e embaralhe os seus
* elementos da seguinte maneira: por n vezes (n é o tamanho do array) ele deve sortear dois índices, i e j, e trocá-los
* de lugar. 
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 19/11/2024
* Última modificação: 19/11/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralhar(char array[], int n) {
    for (int a = 0; a < n; a++) {
        int i = rand() % n;
        int j = rand() % n;
        
        char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    srand(time(0));
    
    char array[] = {'a', 'b', 'c', 'd', 'e'};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("Array Inicial:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");
    
    embaralhar(array, n);
    
    printf("Array Embaralhado:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");
    
    return 0;
}