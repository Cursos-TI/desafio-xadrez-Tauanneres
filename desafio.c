#include <stdio.h>

// Constantes para definir os limites de movimento
#define MAX_MOVIMENTO_BISPO 5
#define MAX_MOVIMENTO_TORRE 5
#define MAX_MOVIMENTO_RAINHA 8

// Função recursiva para movimentação do Bispo
void moverBispo(int casas, char direcao1, char direcao2) {
    if (casas > 0) {
        printf("Bispo: %s e %s\n", &direcao1, &direcao2);
        moverBispo(casas - 1, direcao1, direcao2);
    }
}

// Função recursiva para movimentação da Torre
void moverTorre(int casas, char direcao) {
    if (casas > 0) {
        printf("Torre: %s\n", &direcao);
        moverTorre(casas - 1, direcao);
    }
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas, char direcao) {
    if (casas > 0) {
        printf("Rainha: %s\n", &direcao);
        moverRainha(casas - 1, direcao);
    }
}

int main() {
    // Nível Novato
    printf("Nível Novato:\n");

    // Bispo (usando while)
    int casas = 0;
    while (casas < MAX_MOVIMENTO_BISPO) {
        printf("Bispo: Cima e Direita\n");
        casas++;
    }

    // Torre (usando do-while)
    casas = 0;
    do {
        printf("Torre: Direita\n");
        casas++;
    } while (casas < MAX_MOVIMENTO_TORRE);

    // Rainha (usando for)
    for (int i = 0; i < MAX_MOVIMENTO_RAINHA; i++) {
        printf("Rainha: Esquerda\n");
    }

    // Nível Aventureiro
    printf("\nNível Aventureiro:\n");

    // Cavalo (usando loops aninhados for e while)
    for (int i = 0; i < 2; i++) {
        int j = 0;
        while (j < 1) {
            printf("Cavalo: Baixo e Esquerda\n");
            j++;
        }
    }

    // Nível Mestre
    printf("\nNível Mestre:\n");

    // Bispo (usando recursão)
    moverBispo(MAX_MOVIMENTO_BISPO, 'C', 'D');

    // Torre (usando recursão)
    moverTorre(MAX_MOVIMENTO_TORRE, 'D');

    // Rainha (usando recursão)
    moverRainha(MAX_MOVIMENTO_RAINHA, 'E');

    // Cavalo (usando loops aninhados com múltiplas variáveis e continue/break)
    for (int i = 0, j = 0; i < 3; i++, j++) {
        if (i == 1) {
            continue; // Pula a iteração quando i for igual a 1
        }
        if (j == 2) {
            break; // Sai do loop quando j for igual a 2
        }
        printf("Cavalo: Cima e Direita\n");
    }

    return 0;
}