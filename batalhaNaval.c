#include <stdio.h>

int main() {

    // -----------------------------------------------------
    // MATRIZ DO CONE (5x5)
    // -----------------------------------------------------
    int cone[5][5] = {0}; // Inicializa tudo com zero

    // Preenchendo o cone:
    // i = linha | j = coluna
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            // Região do cone:
            // O cone deve aumentar conforme a linha desce.
            if( (j >= 2 - i) && (j <= 2 + i) && i <= 2 ){
                cone[i][j] = 1;
            }
        }
    }

    // -----------------------------------------------------
    // MATRIZ DA CRUZ (5x5)
    // -----------------------------------------------------
    int cruz[5][5] = {0};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            // Linha central ou coluna central
            if(i == 2 || j == 2){
                cruz[i][j] = 1;
            }
        }
    }

    // -----------------------------------------------------
    // MATRIZ DO OCTAEDRO (5x5)
    // -----------------------------------------------------
    int octaedro[5][5] = {0};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            // Fórmula do octaedro (distância de Manhattan)
            // Centro: (2,2)
            int distancia = abs(i - 2) + abs(j - 2);

            if(distancia <= 1){
                octaedro[i][j] = 1;
            }
        }
    }

    // -----------------------------------------------------
    // EXIBINDO AS MATRIZES
    // -----------------------------------------------------

    printf("=== HABILIDADE EM CONE ===\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n=== HABILIDADE EM CRUZ ===\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n=== HABILIDADE EM OCTAEDRO ===\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}