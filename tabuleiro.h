#ifndef TABULEIRO_H
#define TABULEIRO_H

void inicializarTabuleiro(char tabuleiro[8][8]);
void mostrarTabuleiro(char tabuleiro[8][8]);
int moverPeça(char tabuleiro[8][8], int linOrig, int colOrig, int linDest, int colDest);

#endif
