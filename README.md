# 🧠 Jogo da Memória - Trabalho T3

Repositório referente ao Trabalho T3 da disciplina **Algoritmos e Programação (22760)** — Universidade do Vale do Itajaí (UNIVALI).

## 🎯 Objetivo

Desenvolver uma versão digital do clássico **Jogo da Memória**, aplicando operações sobre matrizes e respeitando restrições específicas de linguagem (sem `funções` nem `structs`). O jogo será jogado **individualmente contra o programa**.

## 🧩 Regras do Jogo

- A matriz principal (4x4) conterá **8 pares aleatórios**.
- A matriz gabarito será gerada com base em uma das seguintes transformações:
  - Sem modificação
  - Transposta
  - Invertida por linha
  - Invertida por coluna
- Uma **matriz do jogo** (vazia) será usada para exibir o estado atual da partida.
- O jogador tem **24 tentativas** (3 vezes o número de pares).
- A cada jogada, o jogador informa duas posições (linha e coluna) para virar.
- Se acertar o par, as posições permanecem visíveis e aparece “**JOGADA OK**”.
- Se errar, as posições voltam a ficar escondidas e aparece “**JOGADA NOK**”.
- O jogo termina quando o jogador encontrar todos os pares ou acabar o número de jogadas.
- Ao final, será exibida uma mensagem de **vitória ou derrota**.
- O jogo reinicia automaticamente após o término.

## ⚙️ Regras de Implementação

- Linguagem: **C/C++** (console)
- **Proibido usar funções ou structs**.
- Uso de `rand()`, `srand()`, `time()`, `system("cls")`, `system("pause")` ou equivalentes permitido e incentivado.
- O código deve ser **organizado, comentado e identificado** com os nomes dos autores.

## 🧪 Avaliação

| Critério                               | Peso   |
|----------------------------------------|--------|
| Organização e clareza do código        | 5%     |
| Identificação e comentários            | 10%    |
| Funcionamento correto                  | 40%    |
| Recursos da linguagem utilizados       | 20%    |
| Apresentação e defesa em aula          | 25%    |

> ⚠️ **IMPORTANTE:** A defesa é **obrigatória**. Sem defesa, a nota é **ZERO**, independente do código entregue.

## 🗓️ Entrega

- **Data limite:** 24/06/2025 às 23:59
- **Modo de entrega:** Upload do código fonte na plataforma da disciplina

---

### 👨‍💻 Integrantes do Grupo

- Nome 1 — RA: xxxx
- Nome 2 — RA: xxxx
- Nome 3 — RA: xxxx
- Nome 4 — RA: xxxx

---

### 📎 Observações Finais

Esse projeto tem como objetivo fixar a manipulação de matrizes e lógica de controle de fluxo, respeitando limitações impostas pelo professor para forçar raciocínio lógico puro. Qualquer “jeitinho” fora das regras pode zerar o trabalho.

