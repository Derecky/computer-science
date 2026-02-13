#include <stdio.h>

#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
  printf("=====================================\n");
  printf("  MATECHECK - MOVIMENTAÇÃO DE PEÇAS\n");
  printf("=====================================\n\n");

  // ========================================
  // MOVIMENTAÇÃO DO BISPO
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
  // MOVIMENTAÇÃO DA TORRE
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
  // MOVIMENTAÇÃO DA RAINHA
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
  // RESUMO DOS MOVIMENTOS
  // ========================================
  printf("=====================================\n");
  printf("RESUMO DOS MOVIMENTOS:\n");
  printf("=====================================\n");
  printf("Bispo:  %d casas (Diagonal Superior Direita)\n", CASAS_BISPO);
  printf("Torre:  %d casas (Direita)\n", CASAS_TORRE);
  printf("Rainha: %d casas (Esquerda)\n", CASAS_RAINHA);
  printf("=====================================\n");

  return 0;
}
