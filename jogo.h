#ifndef JOGO_H
#define JOGO_H

extern char tabuleiro[3][3];
extern char jogadorAtual;

void inicializarTabuleiro();
void mostrarTabuleiro();
int verificarVitoria();
int verificarEmpate();
void trocarJogador();
void jogar();
void limparTela();

#endif
