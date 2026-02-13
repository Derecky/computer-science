#include <stdio.h>

// Desafio Super Trunfo - Países - NÍVEL MESTRE
// Tema: Comparação com Dois Atributos e Lógica Complexa
// Este código implementa menu dinâmico e operadores ternários para decisões complexas

int main() {
  int turistic_points_quantity_01, turistic_points_quantity_02;
  unsigned long int population_01, population_02;
  float pib_01, pib_02, area_01, area_02, population_density_01, population_density_02, pib_per_capita_01, pib_per_capita_02;
  float super_power_01, super_power_02;
  char state_01, state_02, code_01[5], code_02[5], city_name_01[50], city_name_02[50];

  printf("================================\n");
  printf("   SUPER TRUNFO - NÍVEL MESTRE\n");
  printf("================================\n\n");
  
  printf("REGISTRE A CARTA 1:\n");
  printf("-------------------\n");
  
  printf("Digite o estado (A~H): ");
  scanf(" %c", &state_01);

  printf("Digite o código da cidade (01~04): ");
  scanf("%s", code_01);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", city_name_01);
  
  printf("Digite a população da cidade: ");
  scanf("%lu", &population_01);
  
  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &turistic_points_quantity_01);

  printf("Digite a área da cidade (km²): ");
  scanf("%f", &area_01);

  printf("Digite o PIB da cidade (bilhões): ");
  scanf("%f", &pib_01);

  printf("\n================================\n\n");
  
  printf("REGISTRE A CARTA 2:\n");
  printf("-------------------\n");
  
  printf("Digite o estado (A~H): ");
  scanf(" %c", &state_02);

  printf("Digite o código da cidade (01~04): ");
  scanf("%s", code_02);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", city_name_02);
  
  printf("Digite a população da cidade: ");
  scanf("%lu", &population_02);
  
  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &turistic_points_quantity_02);

  printf("Digite a área da cidade (km²): ");
  scanf("%f", &area_02);

  printf("Digite o PIB da cidade (bilhões): ");
  scanf("%f", &pib_02);

  // Cálculos
  population_density_01 = population_01 / area_01;
  population_density_02 = population_02 / area_02;

  pib_per_capita_01 = pib_01 / population_01;
  pib_per_capita_02 = pib_02 / population_02;

  super_power_01 = (float)population_01 + area_01 + pib_01 + (float)turistic_points_quantity_01 + pib_per_capita_01 + (1.0 / population_density_01);
  super_power_02 = (float)population_02 + area_02 + pib_02 + (float)turistic_points_quantity_02 + pib_per_capita_02 + (1.0 / population_density_02);

  // Exibindo cartas
  printf("\n================================\n");
  printf("CARTAS CADASTRADAS:\n");
  printf("================================\n\n");

  printf("Carta 1: %s (%c%s)\n", city_name_01, state_01, code_01);
  printf("  População: %lu habitantes\n", population_01);
  printf("  Área: %.2f km²\n", area_01);
  printf("  PIB: %.2f bilhões\n", pib_01);
  printf("  Pontos Turísticos: %d\n", turistic_points_quantity_01);
  printf("  Densidade: %.2f hab/km²\n", population_density_01);
  printf("  PIB per capita: %.6f bilhões/hab\n", pib_per_capita_01);
  printf("  Super Poder: %.2f\n", super_power_01);

  printf("\nCarta 2: %s (%c%s)\n", city_name_02, state_02, code_02);
  printf("  População: %lu habitantes\n", population_02);
  printf("  Área: %.2f km²\n", area_02);
  printf("  PIB: %.2f bilhões\n", pib_02);
  printf("  Pontos Turísticos: %d\n", turistic_points_quantity_02);
  printf("  Densidade: %.2f hab/km²\n", population_density_02);
  printf("  PIB per capita: %.6f bilhões/hab\n", pib_per_capita_02);
  printf("  Super Poder: %.2f\n", super_power_02);

  // Menu dinâmico - NÍVEL MESTRE
  printf("\n================================\n");
  printf("MENU DE COMPARAÇÃO - NÍVEL MESTRE\n");
  printf("================================\n");
  printf("Escolha o PRIMEIRO atributo:\n\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  printf("7 - Super Poder\n");
  printf("\nDigite sua escolha: ");
  
  int opcao_1, opcao_2;
  int vencedor_1 = 0; // 0 = empate, 1 = carta 1, 2 = carta 2
  int vencedor_final = 0;
  
  scanf("%d", &opcao_1);

  // Validação
  if (opcao_1 < 1 || opcao_1 > 7) {
    printf("\n Opção inválida! Encerrando.\n");
    return 1;
  }

  printf("\n-------------------\n");
  printf("PRIMEIRA COMPARAÇÃO\n");
  printf("-------------------\n");

  // Primeira comparação usando switch e operadores ternários
  switch(opcao_1) {
    case 1:
      printf("Atributo: População\n");
      printf("  %s: %lu habitantes\n", city_name_01, population_01);
      printf("  %s: %lu habitantes\n", city_name_02, population_02);
      vencedor_1 = (population_01 > population_02) ? 1 : (population_02 > population_01) ? 2 : 0;
      break;
    case 2:
      printf("Atributo: Área\n");
      printf("  %s: %.2f km²\n", city_name_01, area_01);
      printf("  %s: %.2f km²\n", city_name_02, area_02);
      vencedor_1 = (area_01 > area_02) ? 1 : (area_02 > area_01) ? 2 : 0;
      break;
    case 3:
      printf("Atributo: PIB\n");
      printf("  %s: %.2f bilhões\n", city_name_01, pib_01);
      printf("  %s: %.2f bilhões\n", city_name_02, pib_02);
      vencedor_1 = (pib_01 > pib_02) ? 1 : (pib_02 > pib_01) ? 2 : 0;
      break;
    case 4:
      printf("Atributo: Pontos Turísticos\n");
      printf("  %s: %d pontos\n", city_name_01, turistic_points_quantity_01);
      printf("  %s: %d pontos\n", city_name_02, turistic_points_quantity_02);
      vencedor_1 = (turistic_points_quantity_01 > turistic_points_quantity_02) ? 1 : (turistic_points_quantity_02 > turistic_points_quantity_01) ? 2 : 0;
      break;
    case 5:
      printf("Atributo: Densidade Populacional (menor vence)\n");
      printf("  %s: %.2f hab/km²\n", city_name_01, population_density_01);
      printf("  %s: %.2f hab/km²\n", city_name_02, population_density_02);
      vencedor_1 = (population_density_01 < population_density_02) ? 1 : (population_density_02 < population_density_01) ? 2 : 0;
      break;
    case 6:
      printf("Atributo: PIB per Capita\n");
      printf("  %s: %.6f bilhões/hab\n", city_name_01, pib_per_capita_01);
      printf("  %s: %.6f bilhões/hab\n", city_name_02, pib_per_capita_02);
      vencedor_1 = (pib_per_capita_01 > pib_per_capita_02) ? 1 : (pib_per_capita_02 > pib_per_capita_01) ? 2 : 0;
      break;
    case 7:
      printf("Atributo: Super Poder\n");
      printf("  %s: %.2f\n", city_name_01, super_power_01);
      printf("  %s: %.2f\n", city_name_02, super_power_02);
      vencedor_1 = (super_power_01 > super_power_02) ? 1 : (super_power_02 > super_power_01) ? 2 : 0;
      break;
  }

  // Exibir resultado da primeira comparação usando operador ternário
  printf("\n>> %s\n", 
    vencedor_1 == 1 ? "✓ Carta 1 venceu!" : 
    vencedor_1 == 2 ? "✓ Carta 2 venceu!" : 
    "Empate!");

  // Lógica aninhada: Decidir se precisa de segundo atributo
  if (vencedor_1 == 0) {
    printf("\n  Empate detectado! É obrigatório escolher um SEGUNDO atributo.\n");
  } else {
    printf("\nDeseja comparar um SEGUNDO atributo? (1=Sim, 0=Não): ");
    int continuar;
    scanf("%d", &continuar);
    
    if (continuar != 1) {
      printf("\n================================\n");
      printf("VENCEDOR FINAL: %s\n", vencedor_1 == 1 ? city_name_01 : city_name_02);
      printf("================================\n");
      return 0;
    }
  }

  // Menu para segundo atributo (dinâmico)
  printf("\n================================\n");
  printf("Escolha o SEGUNDO atributo:\n");
  printf("(Diferente do primeiro!)\n\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  printf("7 - Super Poder\n");
  printf("\nDigite sua escolha: ");
  
  scanf("%d", &opcao_2);

  // Validação da segunda escolha
  if (opcao_2 < 1 || opcao_2 > 7) {
    printf("\n Opção inválida! Usando apenas a primeira comparação.\n");
    vencedor_final = vencedor_1;
  } else if (opcao_2 == opcao_1) {
    printf("\n  Mesmo atributo! Usando apenas a primeira comparação.\n");
    vencedor_final = vencedor_1;
  } else {
    // Segunda comparação
    printf("\n-------------------\n");
    printf("SEGUNDA COMPARAÇÃO\n");
    printf("-------------------\n");

    int vencedor_2 = 0;

    // Segunda comparação com operadores ternários
    switch(opcao_2) {
      case 1:
        printf("Atributo: População\n");
        printf("  %s: %lu habitantes\n", city_name_01, population_01);
        printf("  %s: %lu habitantes\n", city_name_02, population_02);
        vencedor_2 = (population_01 > population_02) ? 1 : (population_02 > population_01) ? 2 : 0;
        break;
      case 2:
        printf("Atributo: Área\n");
        printf("  %s: %.2f km²\n", city_name_01, area_01);
        printf("  %s: %.2f km²\n", city_name_02, area_02);
        vencedor_2 = (area_01 > area_02) ? 1 : (area_02 > area_01) ? 2 : 0;
        break;
      case 3:
        printf("Atributo: PIB\n");
        printf("  %s: %.2f bilhões\n", city_name_01, pib_01);
        printf("  %s: %.2f bilhões\n", city_name_02, pib_02);
        vencedor_2 = (pib_01 > pib_02) ? 1 : (pib_02 > pib_01) ? 2 : 0;
        break;
      case 4:
        printf("Atributo: Pontos Turísticos\n");
        printf("  %s: %d pontos\n", city_name_01, turistic_points_quantity_01);
        printf("  %s: %d pontos\n", city_name_02, turistic_points_quantity_02);
        vencedor_2 = (turistic_points_quantity_01 > turistic_points_quantity_02) ? 1 : (turistic_points_quantity_02 > turistic_points_quantity_01) ? 2 : 0;
        break;
      case 5:
        printf("Atributo: Densidade Populacional (menor vence)\n");
        printf("  %s: %.2f hab/km²\n", city_name_01, population_density_01);
        printf("  %s: %.2f hab/km²\n", city_name_02, population_density_02);
        vencedor_2 = (population_density_01 < population_density_02) ? 1 : (population_density_02 < population_density_01) ? 2 : 0;
        break;
      case 6:
        printf("Atributo: PIB per Capita\n");
        printf("  %s: %.6f bilhões/hab\n", city_name_01, pib_per_capita_01);
        printf("  %s: %.6f bilhões/hab\n", city_name_02, pib_per_capita_02);
        vencedor_2 = (pib_per_capita_01 > pib_per_capita_02) ? 1 : (pib_per_capita_02 > pib_per_capita_01) ? 2 : 0;
        break;
      case 7:
        printf("Atributo: Super Poder\n");
        printf("  %s: %.2f\n", city_name_01, super_power_01);
        printf("  %s: %.2f\n", city_name_02, super_power_02);
        vencedor_2 = (super_power_01 > super_power_02) ? 1 : (super_power_02 > super_power_01) ? 2 : 0;
        break;
    }

    printf("\n>> %s\n", 
      vencedor_2 == 1 ? "✓ Carta 1 venceu!" : 
      vencedor_2 == 2 ? "✓ Carta 2 venceu!" : 
      "⚖️  Empate!");

    // Lógica de decisão complexa com operadores ternários aninhados
    printf("\n================================\n");
    printf("ANÁLISE FINAL:\n");
    printf("--------------------------------\n");
    printf("1ª Comparação: %s\n", 
      vencedor_1 == 1 ? "Carta 1" : 
      vencedor_1 == 2 ? "Carta 2" : 
      "Empate");
    printf("2ª Comparação: %s\n", 
      vencedor_2 == 1 ? "Carta 1" : 
      vencedor_2 == 2 ? "Carta 2" : 
      "Empate");
    printf("--------------------------------\n");

    // Lógica complexa aninhada para determinar vencedor final
    vencedor_final = (vencedor_1 == 0) ? vencedor_2 :                    // Se 1ª empate, usa 2ª
                     (vencedor_2 == 0) ? vencedor_1 :                    // Se 2ª empate, usa 1ª
                     (vencedor_1 == vencedor_2) ? vencedor_1 :           // Se ambas concordam
                     0;                                                   // Vitórias divididas = empate
  }

  // Resultado final
  printf("\n================================\n");
  printf("%s\n", vencedor_final == 0 ? "RESULTADO: EMPATE!" :
                 vencedor_final == 1 ? "VENCEDOR: " :
                 "VENCEDOR: ");
  
  if (vencedor_final == 1) {
    printf("%s\n", city_name_01);
  } else if (vencedor_final == 2) {
    printf("%s\n", city_name_02);
  }
  
  printf("================================\n");

  return 0;
}
