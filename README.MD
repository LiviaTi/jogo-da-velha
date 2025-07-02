<h1>🎮 Jogo da Velha em C (Terminal)</h1>

<p>Este é um jogo da velha (tic-tac-toe) simples feito em <strong>linguagem C</strong>, jogável no terminal entre dois jogadores locais. O projeto conta com uma <strong>interface melhorada</strong>, opção de <strong>reinício automático</strong> ao final da partida e código organizado em múltiplos arquivos.</p>

<hr>

<h2>✨ Funcionalidades</h2>
<ul>
  <li>Interface amigável no terminal</li>
  <li>Dois jogadores locais: <code>X</code> e <code>O</code></li>
  <li>Verificação automática de vitória ou empate</li>
  <li>Limpa a tela a cada jogada para melhor visualização</li>
  <li>Reinício de partida sem precisar fechar o programa</li>
  <li>Código modularizado (<code>main.c</code>, <code>jogo.c</code>, <code>jogo.h</code>)</li>
</ul>

<hr>

<h2>📁 Estrutura do Projeto</h2>
<pre>
├── main.c       // Função principal e controle do loop de jogo
├── jogo.c       // Implementação das regras e lógica do jogo
├── jogo.h       // Declarações das funções e variáveis globais
</pre>

<hr>

<h2>🚀 Como Compilar e Executar</h2>

<h3>🛠️ Requisitos</h3>
<ul>
  <li>Compilador C (ex: <code>gcc</code>)</li>
  <li>Terminal (Linux, macOS ou Windows com WSL)</li>
</ul>

<h3>📦 Compilação</h3>
<pre><code>gcc main.c jogo.c -o jogo
./jogo
</code></pre>

<hr>

<h2>💻 Exemplo de Execução</h2>
<pre>
   0   1   2
0    |   |   
  ---|---|---
1    |   |   
  ---|---|---
2    |   |   

Jogador X, digite a linha e a coluna (0-2): 1 1
</pre>



