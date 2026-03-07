🎯 Jogo da Adivinhação em C++

Um jogo simples desenvolvido em **C++** que roda no terminal.  
O objetivo do jogo é descobrir um **número secreto gerado aleatoriamente** dentro de um número limitado de tentativas, dependendo do nível de dificuldade escolhido pelo jogador.

---

📌 Sobre o projeto

O programa gera um número aleatório entre **0 e 99** e o jogador deve tentar adivinhar qual é esse número.

Após cada tentativa, o jogo informa se o chute foi:

- **Maior** que o número secreto
- **Menor** que o número secreto

Além disso, o jogo possui um **sistema de pontuação**, onde o jogador começa com **1000 pontos** e perde pontos dependendo da distância do chute em relação ao número correto.

---

⚙️ Níveis de dificuldade

O jogador pode escolher entre três níveis:

| Dificuldade | Tentativas |
|-------------|------------|
| Fácil (F)   | 15 |
| Médio (M)   | 10 |
| Difícil (D) | 5 |

---

⭐ Sistema de pontuação

A pontuação começa em **1000 pontos**.

A cada erro, o jogo calcula a penalidade usando a fórmula:

```cpp
double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
pontos -= pontos_perdidos;

🖥️ Tecnologias utilizadas

- C++

- Biblioteca padrão do C++:

- iostream

- cstdlib

- ctime

- Biblioteca windows.h para configurar UTF-8 no console

▶️ Como compilar

Entre na pasta do projeto e execute:
g++ joguinho.cpp -o joguinho

Após compilar, execute:
./joguinho