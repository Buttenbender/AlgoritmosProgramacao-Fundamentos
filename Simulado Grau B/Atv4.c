/*
* Programa: Atv4.c
* Descrição: Crie um programa em C que gerencie o cadastro de livros em uma biblioteca. Cada livro possui as seguintes
* informações: título, autor, ano de publicação e número de páginas.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 19/11/2024
* Última modificação: 19/11/2024
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
    int paginas;
} Livro;

Livro cadastrarLivro(char titulo[], char autor[], int ano, int paginas) {
    Livro livro;
    strcpy(livro.titulo, titulo);
    strcpy(livro.autor, autor);
    livro.ano = ano;
    livro.paginas = paginas;
    
    return livro;
}

void exibirLivro(Livro livro) {
    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de Publicação: %d\n", livro.ano);
    printf("Número de Páginas: %d\n", livro.paginas);
    printf("----------------------------------\n");
}

int main() {
    Livro biblioteca[5];
    
    for (int i = 0; i < 5; i++) {
        char titulo[100], autor[100];
        int ano, paginas;
        
        printf("Cadastro do Livro %d\n", i + 1);
        
        printf("Título: ");
        fgets(titulo, sizeof(titulo), stdin);
        titulo[strcspn(titulo, "\n")] = '\0';
        
        printf("Autor: ");
        fgets(autor, sizeof(autor), stdin);
        autor[strcspn(autor, "\n")] = '\0';
        
        printf("Ano de Publicação: ");
        scanf("%d", &ano);
        
        printf("Número de Páginas: ");
        scanf("%d", &paginas);
        
        getchar();
        
        biblioteca[i] = cadastrarLivro(titulo, autor, ano, paginas);
        
        printf("----------------------------------\n");
    }
    
    printf("\nLivros Cadastrados:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Livro %d:\n", i + 1);
        exibirLivro(biblioteca[i]);
    }
    
    return 0;
}