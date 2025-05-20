#include <stdio.h>
#include "tabuleiro.h"

int converterColuna(char c) {
    return c - 'a';
}

int main() {
    char tabuleiro[8][8];
    inicializarTabuleiro(tabuleiro);
    mostrarTabuleiro(tabuleiro);

    char colOrig, colDest;
    int linOrig, linDest;

    while (1) {
        printf("\nMover peça (ex: e2 e4): ");
        scanf(" %c%d %c%d", &colOrig, &linOrig, &colDest, &linDest);

        // Converte para índices do array
        int iOrig = 8 - linOrig;
        int jOrig = converterColuna(colOrig);
        int iDest = 8 - linDest;
        int jDest = converterColuna(colDest);

        if (moverPeça(tabuleiro, iOrig, jOrig, iDest, jDest)) {
            mostrarTabuleiro(tabuleiro);
        } else {
            printf("Movimento inválido!\n");
        }
    }

    return 0;
}
