#include <stdio.h>
#include <string.h>

#define NUM_INGREDIENTES 7
#define NUM_POCOES 5

typedef struct {
    char nome[30];
    int quantidade;
} Ingrediente;

typedef struct {
    char nome[30];
    int ingredientes[NUM_INGREDIENTES];
    int quantidades[NUM_INGREDIENTES];
} Pocao;

void exibirMenu() {
    printf("\n--- Menu Principal ---\n");
    printf("1. Consultar Ingredientes Disponíveis\n");
    printf("2. Preparar Poção\n");
    printf("3. Reabastecer Ingredientes\n");
    printf("4. Sair do Programa\n");
}

void consultarIngredientes(Ingrediente ingredientes[]) {
    printf("\n--- Ingredientes Disponíveis ---\n");
    
    for (int i = 0; i < NUM_INGREDIENTES; i++) {
        printf("%d. %s: %d\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade);
    }
}

void prepararPocoes(Ingrediente ingredientes[], Pocao pocoes[]) {
    int escolha;
    
    printf("\n--- Poções Disponíveis ---\n");
    
    for (int i = 0; i < NUM_POCOES; i++) {
        printf("%d. %s\n", i + 1, pocoes[i].nome);
    }
    
    printf("Escolha uma poção para preparar: ");
    scanf("%d", &escolha);
    
    if (escolha < 1 || escolha > NUM_POCOES) {
        printf("Poção inválida!");
        return;
    }
    
    Pocao pocaoEscolhida = pocoes[escolha - 1];
    int podePreparar = 1;
    
    printf("\nVerificando Ingredientes...\n");
    
    for (int i = 0; i < NUM_INGREDIENTES; i++) {
        if (pocaoEscolhida.quantidades[i] > 0) {
            if (pocaoEscolhida.quantidades[i] > ingredientes[i].quantidade) {
                printf("- %s: necessário %d, disponível %d\n",
                       ingredientes[i].nome, pocaoEscolhida.quantidades[i], ingredientes[i].quantidade);
                podePreparar = 0;
            }
        }
    }
    
    if (podePreparar) {
        printf("Poção criada com sucesso!\n");
        
        for (int i = 0; i < NUM_INGREDIENTES; i++) {
            if (pocaoEscolhida.quantidades[i] > 0) {
                ingredientes[i].quantidade -= pocaoEscolhida.quantidades[i];
            }
        }
    }
    else {
        printf("Não foi possível preparar a poção!\n");
    }
}

void reabastecerIngredientes(Ingrediente ingredientes[]) {
    int escolha, quantidade;
    
    consultarIngredientes(ingredientes);
    
    printf("Escolha o ingrediente para reabastecer: ");
    scanf("%d", &escolha);
    
    if (escolha < 1 || escolha > NUM_INGREDIENTES) {
        printf("Ingrediente inválido!\n");
        return;
    }
    
    printf("Digite a quantidade para adicionar: ");
    scanf("%d", &quantidade);
    
    if (quantidade > 0) {
        ingredientes[escolha - 1].quantidade += quantidade;
        printf("Ingrediente reabastecido com sucesso!\n");
    }
    else {
        printf("Quantidade inválida!");
    }
}

void inicializarDados(Ingrediente ingredientes[], Pocao pocoes[]) {
    strcpy(ingredientes[0].nome, "Pó de Fenix");
    ingredientes[0].quantidade = 100;
    
    strcpy(ingredientes[1].nome, "Essência Celestial");
    ingredientes[1].quantidade = 50;
    
    strcpy(ingredientes[2].nome, "Raiz de Dragão");
    ingredientes[2].quantidade = 45;
    
    strcpy(ingredientes[3].nome, "Orvalho Lunar");
    ingredientes[3].quantidade = 30;
    
    strcpy(ingredientes[4].nome, "Flores Secas");
    ingredientes[4].quantidade = 200;
    
    strcpy(ingredientes[5].nome, "Elixir Amargo");
    ingredientes[5].quantidade = 20;
    
    strcpy(ingredientes[6].nome, "Lágrimas de Unicórnio");
    ingredientes[6].quantidade = 15;
    
    for (int i = 0; i < NUM_POCOES; i++) {
        for (int j = 0; j < NUM_INGREDIENTES; j++) {
            pocoes[i].quantidades[j] = 0;
        }
    }
    
    strcpy(pocoes[0].nome, "Poção de Cura");
    pocoes[0].quantidades[0] = 30;  // Pó de Fênix
    pocoes[0].quantidades[1] = 20;  // Essência Celestial
    pocoes[0].quantidades[4] = 20;  // Flores Secas
    pocoes[0].quantidades[6] = 10;  // Lágrimas de Unicórnio
    
    strcpy(pocoes[1].nome, "Poção Força da Floresta");
    pocoes[1].quantidades[2] = 30;  // Raiz de Dragão
    pocoes[1].quantidades[3] = 20;  // Orvalho Lunar
    pocoes[1].quantidades[4] = 30;  // Flores Secas

    strcpy(pocoes[2].nome, "Poção Sabedoria da Riqueza");
    pocoes[2].quantidades[0] = 50;  // Pó de Fênix
    pocoes[2].quantidades[1] = 30;  // Essência Celestial

    strcpy(pocoes[3].nome, "Poção Sorte no Amor");
    pocoes[3].quantidades[3] = 10;  // Orvalho Lunar
    pocoes[3].quantidades[4] = 50;  // Flores Secas
    pocoes[3].quantidades[6] = 5;   // Lágrimas de Unicórnio

    strcpy(pocoes[4].nome, "Poção Malvada");
    pocoes[4].quantidades[2] = 15;  // Raiz de Dragão
    pocoes[4].quantidades[5] = 10;  // Elixir Amargo
}

int main() {
    Ingrediente ingredientes[NUM_INGREDIENTES];
    Pocao pocoes[NUM_POCOES];
    int opc;
    
    inicializarDados(ingredientes, pocoes);
    
    do {
        exibirMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &opc);
        
        switch (opc) {
            case 1:
                consultarIngredientes(ingredientes);
                break;
            case 2:
                prepararPocoes(ingredientes, pocoes);
                break;
            case 3:
                reabastecerIngredientes(ingredientes);
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida, tente novamente!\n");
        }
    } while (opc != 4);
    
    return 0;
}