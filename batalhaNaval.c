#include <stdio.h>

int main() {

    // O tabuleiro é apenas conceitual, pois só vamos trabalhar com coordenadas.

    // NAVIO 1 – Vertical (3 posições)
    int navio_vertical[3][2];   // linha, coluna

    // NAVIO 2 – Horizontal (4 posições)
    int navio_horizontal[4][2]; // linha, coluna

    // ------------------------------
    // POSICIONAMENTO MANUAL DOS NAVIOS
    // ------------------------------

    // Supondo que o navio vertical começa na linha 2, coluna 5
    int linha_inicial_vertical = 2;
    int coluna_vertical = 5;

    for (int i = 0; i < 3; i++) {
        navio_vertical[i][0] = linha_inicial_vertical + i;  // cresce para baixo
        navio_vertical[i][1] = coluna_vertical;
    }

    // Supondo que o navio horizontal começa na linha 7, coluna 1
    int linha_horizontal = 7;
    int coluna_inicial_horizontal = 1;

    for (int i = 0; i < 4; i++) {
        navio_horizontal[i][0] = linha_horizontal;
        navio_horizontal[i][1] = coluna_inicial_horizontal + i;  // cresce para a direita
    }

    // ------------------------------
    // EXIBIÇÃO DAS COORDENADAS
    // ------------------------------

    printf("=== BATALHA NAVAL - NIVEL NOVATO ===\n\n");

    printf("Navio Vertical (3 partes):\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d -> Linha: %d | Coluna: %d\n",
               i + 1, navio_vertical[i][0], navio_vertical[i][1]);
    }

    printf("\nNavio Horizontal (4 partes):\n");
    for (int i = 0; i < 4; i++) {
        printf("Parte %d -> Linha: %d | Coluna: %d\n",
               i + 1, navio_horizontal[i][0], navio_horizontal[i][1]);
    }

    return 0;
}