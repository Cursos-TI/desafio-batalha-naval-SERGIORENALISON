#include <stdio.h>

int main() {

    int tabuleiro[10][10];

    // Inicializa toda a matriz com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ---------------------------------------------------
    // POSICIONAMENTO DE NAVIOS
    // ---------------------------------------------------

    // NAVIO 1 – VERTICAL (tamanho 4)
    int linha_inicio_v = 1;
    int coluna_v = 3;

    for (int i = 0; i < 4; i++) {
        tabuleiro[linha_inicio_v + i][coluna_v] = 3;
    }

    // NAVIO 2 – HORIZONTAL (tamanho 5)
    int linha_h = 6;
    int coluna_inicio_h = 2;

    for (int i = 0; i < 5; i++) {
        tabuleiro[linha_h][coluna_inicio_h + i] = 3;
    }

    // NAVIO 3 – DIAGONAL PRINCIPAL (↘) (tamanho 4)
    int linha_diag1 = 2;
    int coluna_diag1 = 2;

    for (int i = 0; i < 4; i++) {
        tabuleiro[linha_diag1 + i][coluna_diag1 + i] = 3;
    }

    // NAVIO 4 – DIAGONAL SECUNDÁRIA (↙) (tamanho 4)
    int linha_diag2 = 2;
    int coluna_diag2 = 7;

    for (int i = 0; i < 4; i++) {
        tabuleiro[linha_diag2 + i][coluna_diag2 - i] = 3;
    }

    // ---------------------------------------------------
    // EXIBIÇÃO DO TABULEIRO COMPLETO
    // ---------------------------------------------------

    printf("=== BATALHA NAVAL - NIVEL AVENTUREIRO ===\n\n");
    printf("Legenda: 0 = Agua | 3 = Navio\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}