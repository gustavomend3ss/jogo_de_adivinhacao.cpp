# 🎯 Jogo da Adivinhação (C++)

Jogo de adivinhação em C++ executado no terminal. O objetivo é descobrir o número secreto gerado aleatoriamente, escolhendo um nível de dificuldade e tentando acertar dentro do limite de tentativas.

---

## ✅ Funcionalidades

- 🎲 Número secreto gerado aleatoriamente (`0` a `99`)
- 🧩 3 níveis de dificuldade:
  - **Fácil (F)** → 15 tentativas  
  - **Médio (M)** → 10 tentativas  
  - **Difícil (D)** → 5 tentativas
- 📌 Dica após cada chute:
  - Informa se o chute foi **maior** ou **menor** que o número secreto
- ⭐ Sistema de pontuação:
  - Pontuação inicial: **1000.0**
  - Penalidade por erro: `|chute - numero_secreto| / 2.0`
  - A pontuação vai diminuindo a cada tentativa

---

## 🧠 Como funciona a pontuação

A cada tentativa, o jogo calcula quantos pontos você perde com base na distância do seu chute para o número secreto:

pontos_perdidos = abs(chute - numero_secreto) / 2.0
pontos = pontos - pontos_perdidos

Quanto mais perto você chegar, menos pontos perde.

---

## 🛠️ Requisitos

- **Windows** (o código usa `windows.h` para configurar UTF-8 no console)
- Compilador C++ (ex.: **g++** via MinGW/MSYS2)


Quanto mais perto você chegar, menos pontos perde.

---

## 🛠️ Requisitos

- **Windows** (o código usa `windows.h` para configurar UTF-8 no console)
- Compilador C++ (ex.: **g++** via MinGW/MSYS2)

---

## ▶️ Como compilar e executar

Dentro da pasta do projeto:

### Compilar (g++)

```bash
g++ joguinho.cpp -o joguinho