#include <stdio.h>

int main() {
    // Tamanho do tabuleiro (ex: 10x10)
    int tabuleiro[10][10] = {0};

    // Dados dos navios
    int navio_horizontal_x = 2;
    int navio_horizontal_y = 4;
    int tamanho_horizontal = 4;

    int navio_vertical_x = 6;
    int navio_vertical_y = 1;
    int tamanho_vertical = 3;

    // Posicionando navio horizontal
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanho_horizontal; i++) {
        tabuleiro[navio_horizontal_x][navio_horizontal_y + i] = 1;
        printf("(%d, %d)\n", navio_horizontal_x, navio_horizontal_y + i);
    }

    // Posicionando navio vertical
    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 2;
        printf("(%d, %d)\n", navio_vertical_x + i, navio_vertical_y);
    }

    return 0;
}