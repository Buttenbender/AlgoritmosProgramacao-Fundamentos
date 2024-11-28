#include <stdio.h>

int main() {
    char respostas[10] = {'?', '?', '?', '?', '?', '?', '?', '?', '?', '?'};
    int contagemCertas = 0;
    
    printf("Digite as respostas:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &respostas[i]);
    }
    printf("\n");
    
    if (respostas[0] == 'a') {
        printf("Questão 1: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 1: Resposta Incorreta. A resposta correta é a.\n");
    }
    
    if (respostas[1] == 'f') {
        printf("Questão 2: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 2: Resposta Incorreta. A resposta correta é f.\n");
    }
    
    if (respostas[2] == 'c') {
        printf("Questão 3: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 3: Resposta Incorreta. A resposta correta é c.\n");
    }
    
    if (respostas[3] == 'd') {
        printf("Questão 4: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 4: Resposta Incorreta. A resposta correta é d.\n");
    }
    
    if (respostas[4] == 'd') {
        printf("Questão 5: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 5: Resposta Incorreta. A resposta correta é d.\n");
    }
    
    if (respostas[5] == 'a') {
        printf("Questão 6: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 6: Resposta Incorreta. A resposta correta é a.\n");
    }
    
    if (respostas[6] == 'e') {
        printf("Questão 7: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 7: Resposta Incorreta. A resposta correta é e.\n");
    }
    
    if (respostas[7] == 'e') {
        printf("Questão 8: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 8: Resposta Incorreta. A resposta correta é e.\n");
    }
    
    if (respostas[8] == 'b') {
        printf("Questão 9: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 9: Resposta Incorreta. A resposta correta é b.\n");
    }
    
    if (respostas[9] == 'a') {
        printf("Questão 10: Resposta Correta\n");
        contagemCertas++;
    }
    else {
        printf("Questão 10: Resposta Incorreta. A resposta correta é a.\n");
    }
    
    printf("A pontuação do estudante é %d/10!\n", contagemCertas);
}