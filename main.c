#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"

int main() {
    char jogarNovamente;

    do {
        inicializarTabuleiro();

        while (1) {
            limparTela();
            mostrarTabuleiro();
            jogar();

            if (verificarVitoria()) {
                limparTela();
                mostrarTabuleiro();
                printf("\n🎉 Jogador %c venceu!\n", jogadorAtual);
                break;
            } else if (verificarEmpate()) {
                limparTela();
                mostrarTabuleiro();
                printf("\n😐 Empate!\n");
                break;
            }
            trocarJogador();
        }

        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente);
    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    printf("Obrigado por jogar!\n");
    return 0;
}
