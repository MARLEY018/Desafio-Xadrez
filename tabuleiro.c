#include <stdio.h>
#include "tabuleiro.h"

void inicializarTabuleiro(char tabuleiro[8][8]) {
    // Peões
    for (int i = 0; i < 8; i++) {
        tabuleiro[1][i] = 'P'; // Peões pretos
        tabuleiro[6][i] = 'p'; // Peões brancos
    }

    // Torres, cavalos, bispos, dama, rei
    char pecas[] = {'T', 'C', 'B', 'D', 'R', 'B', 'C', 'T'};
    for (int i = 0; i < 8; i++) {
        tabuleiro[0][i] = pecas[i];      // Pretas
        tabuleiro[7][i] = pecas[i] + 32; // Brancas (letras minúsculas)
    }

    // Espaços vazios
    for (int i = 2; i < 6; i++)
        for (int j = 0; j < 8; j++)
            tabuleiro[i][j] = '.';
}

void mostrarTabuleiro(char tabuleiro[8][8]) {
    printf("\n  a b c d e f g h\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int moverPeça(char tabuleiro[8][8], int linOrig, int colOrig, int linDest, int colDest) {
    if (linOrig < 0 || linOrig > 7 || colOrig < 0 || colOrig > 7 ||
        linDest < 0 || linDest > 7 || colDest < 0 || colDest > 7) {
        return 0; // movimento inválido
    }

    char peca = tabuleiro[linOrig][colOrig];
    if (peca == '.') return 0;

    // Move a peça
    tabuleiro[linDest][colDest] = peca;
    tabuleiro[linOrig][colOrig] = '.';

    return 1;
}
