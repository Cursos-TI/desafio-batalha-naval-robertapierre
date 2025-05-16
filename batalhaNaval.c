#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa tudo com 0 (água)
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3}; // Navio horizontal
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};   // Navio vertical

    // Posição inicial do navio horizontal (linha 2, coluna 4)
    int linha_h = 2;
    int coluna_h = 4;

    // Verifica se cabe no tabuleiro horizontalmente
    if (coluna_h + TAMANHO_NAVIO <= TAMANHO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
        }
    }

    // Posição inicial do navio vertical (linha 5, coluna 7)
    int linha_v = 5;
    int coluna_v = 7;

    // Verifica se cabe no tabuleiro verticalmente
    if (linha_v + TAMANHO_NAVIO <= TAMANHO) {
        // Garante que não há sobreposição com o navio horizontal
        int sobreposicao = 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_v + i][coluna_v] != 0) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
            }
        } else {
            printf("Erro: Sobreposição de navios!\n");
        }
    }

    // Exibe o tabuleiro
    printf("=== Tabuleiro Batalha Naval ===\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

