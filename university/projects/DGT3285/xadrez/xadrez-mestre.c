#include <stdio.h>

// Constantes
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

void moverBispo(int casa_atual, int total_casas) {
  // Caso base: se já moveu todas as casas, retorna
  if (casa_atual > total_casas) {
    return;
  }

  // Imprime o movimento atual
  printf("Movimento %d: Direita e Cima (Diagonal)\n", casa_atual);

  // Chamada recursiva para próxima casa
  moverBispo(casa_atual + 1, total_casas);
}

void moverTorre(int casa_atual, int total_casas) {
  // Caso base
  if (casa_atual > total_casas) {
    return;
  }

  printf("Movimento %d: Direita\n", casa_atual);

  // Chamada recursiva
  moverTorre(casa_atual + 1, total_casas);
}

void moverRainha(int casa_atual, int total_casas) {
  // Caso base
  if (casa_atual > total_casas) {
    return;
  }

  printf("Movimento %d: Esquerda\n", casa_atual);

  // Chamada recursiva
  moverRainha(casa_atual + 1, total_casas);
}

void moverCavalo() {
  printf("CAVALO: Movimento em L (2 casas para cima + 1 casa para direita)\n");
  printf("-------------------------------\n");

  int movimentos_completos = 0;
  int max_movimentos = 1; // 1 movimento em L

  // Loop externo: controla o número de movimentos em L
  for (int movimento = 1; movimento <= max_movimentos; movimento++) {
    printf("\nMovimento em L #%d:\n", movimento);

    int passos_verticais = 0;
    int passos_horizontais = 0;

    // Loop interno: controla os passos do movimento
    for (int passo = 1; passo <= 3; passo++) {

      // Verifica se já completou a parte vertical (2 casas para cima)
      if (passos_verticais >= 2 && passo <= 2) {
        continue; // Pula para o próximo passo
      }

      // Primeira parte: 2 casas para cima
      if (passos_verticais < 2) {
        printf("  Passo %d: Cima\n", passo);
        passos_verticais++;

        // Se completou 2 casas para cima, passa para horizontal
        if (passos_verticais == 2) {
          continue;
        }
      }

      // Segunda parte: 1 casa para direita
      if (passos_verticais == 2 && passos_horizontais < 1) {
        printf("  Passo %d: Direita\n", passo);
        passos_horizontais++;

        // Se completou o movimento em L, sai do loop interno
        if (passos_horizontais == 1) {
          movimentos_completos++;
          printf("  >> Movimento em L completo!\n");
          break; // Sai do loop de passos
        }
      }
    }
  }

  printf("\nTotal de movimentos em L completados: %d\n", movimentos_completos);
}

void moverCavaloAvancado() {
  printf("\nCAVALO: Movimento em L Avançado\n");
  printf("(Com validação e controle de obstáculos simulados)\n");
  printf("-------------------------------\n");

  int obstaculo_encontrado = 0;
  int movimento_valido = 0;

  // Loop externo com múltiplas variáveis de controle
  for (int tentativa = 1, sucessos = 0; tentativa <= 3 && sucessos < 1;
       tentativa++) {
    printf("\nTentativa #%d de movimento:\n", tentativa);

    // Simula verificação de obstáculos (obstáculo na tentativa 2)
    if (tentativa == 2) {
      printf("  ⚠️  Obstáculo detectado! Tentando rota alternativa...\n");
      obstaculo_encontrado = 1;
      continue; // Pula para próxima tentativa
    }

    // Loop interno para os passos do movimento
    for (int etapa = 1; etapa <= 3; etapa++) {

      // Condição múltipla: verifica se deve continuar
      if (obstaculo_encontrado && etapa > 1) {
        printf("  Ajustando trajetória...\n");
        obstaculo_encontrado = 0; // Reseta obstáculo
      }

      // Realiza os movimentos
      if (etapa <= 2) {
        printf("  Passo %d: Cima\n", etapa);
      } else if (etapa == 3) {
        printf("  Passo %d: Direita\n", etapa);
        movimento_valido = 1;
        sucessos++;
        printf("  ✓ Movimento em L bem-sucedido!\n");
        break; // Movimento completo, sai do loop interno
      }
    }

    // Se movimento foi válido, sai do loop externo
    if (movimento_valido) {
      break;
    }
  }
}

int main() {
  printf("=====================================\n");
  printf("     MATECHECK - NÍVEL MESTRE\n");
  printf("  Funções Recursivas e Loops Avançados\n");
  printf("=====================================\n\n");

  // ========================================
  // BISPO - Função Recursiva
  // ========================================
  printf("BISPO: Movendo %d casas na diagonal direita para cima\n",
         CASAS_BISPO);
  printf("(Usando Função Recursiva)\n");
  printf("-------------------------------\n");
  moverBispo(1, CASAS_BISPO);
  printf("\n");

  // ========================================
  // TORRE - Função Recursiva
  // ========================================
  printf("TORRE: Movendo %d casas para a direita\n", CASAS_TORRE);
  printf("(Usando Função Recursiva)\n");
  printf("-------------------------------\n");
  moverTorre(1, CASAS_TORRE);
  printf("\n");

  // ========================================
  // RAINHA - Função Recursiva
  // ========================================
  printf("RAINHA: Movendo %d casas para a esquerda\n", CASAS_RAINHA);
  printf("(Usando Função Recursiva)\n");
  printf("-------------------------------\n");
  moverRainha(1, CASAS_RAINHA);
  printf("\n");

  // ========================================
  // CAVALO - Loops com Continue e Break
  // ========================================
  printf("=====================================\n");
  printf("  MOVIMENTAÇÃO AVANÇADA DO CAVALO\n");
  printf("  (Loops aninhados + Continue/Break)\n");
  printf("=====================================\n\n");

  moverCavalo();
  moverCavaloAvancado();

  return 0;
}
