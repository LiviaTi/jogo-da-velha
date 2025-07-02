#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"

char tabuleiro[3][3];
char jogadorAtual = 'X';

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void inicializarTabuleiro() {
    jogadorAtual = 'X'; // Reinicia sempre com X
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

void mostrarTabuleiro() {
    printf("\n");
    printf("   0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d  %c | %c | %c\n", i, tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2) printf("  ---|---|---\n");
    }
    printf("\n");
}

int verificarVitoria() {
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[i][0] == jogadorAtual && tabuleiro[i][1] == jogadorAtual && tabuleiro[i][2] == jogadorAtual) ||
            (tabuleiro[0][i] == jogadorAtual && tabuleiro[1][i] == jogadorAtual && tabuleiro[2][i] == jogadorAtual)) {
            return 1;
        }
    }
    if ((tabuleiro[0][0] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][2] == jogadorAtual) ||
        (tabuleiro[0][2] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][0] == jogadorAtual)) {
        return 1;
    }
    return 0;
}

int verificarEmpate() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}

void trocarJogador() {
    jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
}

void jogar() {
    int linha, coluna;
    while (1) {
        printf("Jogador %c, digite a linha e a coluna (0-2): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);
        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = jogadorAtual;
            break;
        } else {
            printf("❌ Jogada inválida. Tente novamente.\n");
        }
    }
}
