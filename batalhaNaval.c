#include <stdio.h>

int main() {

    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // Declaração da matriz 10x10 
    int tabuleiro[10][10];

    // Inicializa todo o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona um navio na horizontal
    tabuleiro[8][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[8][3] = 3;

    // Posiciona um navio na vertical
    tabuleiro[1][7] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[3][7] = 3;

    // Exibe o tabuleiro 
    printf("   ");
    for (int c = 0; c < 10; c++) {
        printf("%c ", coluna[c]); // imprime as colunas de A a J
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d  ", i + 1); // imprime as fileiras de 1 a 10
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // imprime a água (0) junto com os navios (3)
        }
        printf("\n");
    }

    return 0;
}