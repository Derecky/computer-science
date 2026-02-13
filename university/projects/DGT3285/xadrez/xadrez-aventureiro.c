#include <stdio.h>

// Desafio MateCheck - Nível Aventureiro
// Movimentação do Cavalo em L usando Loops Aninhados

// Constantes para definir a quantidade de casas de cada peça
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8
#define MOVIMENTOS_CAVALO 3 // Número de movimentos em L que o cavalo fará

int main() {
  printf("=====================================\n");
  printf("  MATECHECK - NÍVEL AVENTUREIRO\n");
  printf("  Movimentação do Cavalo em L\n");
  printf("=====================================\n\n");

  // ========================================
  // MOVIMENTAÇÃO DO BISPO (Nível Novato)
  // Usando estrutura FOR
  // ========================================
  printf("BISPO: Movendo 5 casas na diagonal superior direita\n");
  printf("-------------------------------\n");

  // O bispo se move na diagonal, então precisamos combinar duas direções
  // Diagonal superior direita = Direita + Cima
  for (int i = 1; i <= CASAS_BISPO; i++) {
    printf("Movimento %d: Direita e Cima (Diagonal)\n", i);
  }

  printf("\n");

  // ========================================
  // MOVIMENTAÇÃO DA TORRE (Nível Novato)
  // Usando estrutura WHILE
  // ========================================
  printf("TORRE: Movendo 5 casas para a direita\n");
  printf("-------------------------------\n");

  int movimento_torre = 1;
  while (movimento_torre <= CASAS_TORRE) {
    printf("Movimento %d: Direita\n", movimento_torre);
    movimento_torre++;
  }

  printf("\n");

  // ========================================
  // MOVIMENTAÇÃO DA RAINHA (Nível Novato)
  // Usando estrutura DO-WHILE
  // ========================================
  printf("RAINHA: Movendo 8 casas para a esquerda\n");
  printf("-------------------------------\n");

  int movimento_rainha = 1;
  do {
    printf("Movimento %d: Esquerda\n", movimento_rainha);
    movimento_rainha++;
  } while (movimento_rainha <= CASAS_RAINHA);

  printf("\n");

  // ========================================
  // MOVIMENTAÇÃO DO CAVALO (Nível Aventureiro)
  // Usando LOOPS ANINHADOS: FOR + DO-WHILE
  // ========================================
  printf("=====================================\n");
  printf("  NÍVEL AVENTUREIRO - CAVALO\n");
  printf("=====================================\n\n");

  printf("CAVALO: Movendo em L (2 casas para baixo + 1 casa para esquerda)\n");
  printf("-------------------------------\n");

  // Loop externo (FOR): controla quantos movimentos em L o cavalo fará
  for (int movimento = 1; movimento <= MOVIMENTOS_CAVALO; movimento++) {
    printf("\nMovimento em L #%d:\n", movimento);

    // Primeira parte do L: 2 casas para baixo
    int passo = 1;
    while (passo <= 2) {
      printf("  Passo %d: Baixo\n", passo);
      passo++;
    }

    // Segunda parte do L: 1 casa para esquerda
    int passo_esquerda = 1;
    do {
      printf("  Passo %d: Esquerda\n", passo + passo_esquerda - 1);
      passo_esquerda++;
    } while (passo_esquerda <= 1);

    printf("  >> Movimento em L completo!\n");
  }

  printf("\n");

  // ========================================
  // MOVIMENTAÇÃO DO CAVALO
  // Usando LOOPS ANINHADOS: FOR + WHILE
  // ========================================
  printf("-------------------------------\n");
  printf("CAVALO: Movimento em L alternativo\n");
  printf("(1 casa para baixo + 2 casas para esquerda)\n");
  printf("-------------------------------\n");

  // Loop externo (FOR): controla quantos movimentos
  for (int mov = 1; mov <= 2; mov++) {
    printf("\nMovimento em L #%d:\n", mov);

    // Loop interno (WHILE): 1 casa para baixo
    int etapa = 1;
    while (etapa <= 1) {
      printf("  Passo 1: Baixo\n");
      etapa++;
    }

    // Loop interno (WHILE): 2 casas para esquerda
    int passos_esq = 1;
    while (passos_esq <= 2) {
      printf("  Passo %d: Esquerda\n", passos_esq + 1);
      passos_esq++;
    }

    printf("  >> Movimento em L completo!\n");
  }

  printf("\n");

  // ========================================
  // RESUMO DOS MOVIMENTOS
  // ========================================
  printf("=====================================\n");
  printf("RESUMO GERAL:\n");
  printf("=====================================\n");
  printf("Nível Novato:\n");
  printf("  Bispo:  %d casas (Diagonal Superior Direita)\n", CASAS_BISPO);
  printf("  Torre:  %d casas (Direita)\n", CASAS_TORRE);
  printf("  Rainha: %d casas (Esquerda)\n", CASAS_RAINHA);
  printf("\nNível Aventureiro:\n");
  printf("  Cavalo: %d movimentos em L (Baixo + Esquerda)\n",
         MOVIMENTOS_CAVALO);
  printf("          Usando loops aninhados!\n");
  printf("=====================================\n");

  return 0;
}
