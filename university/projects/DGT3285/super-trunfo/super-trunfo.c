#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  int turistic_points_quantity_01, turistic_points_quantity_02;
  unsigned long int population_01, population_02;
  float pib_01, pib_02, area_01, area_02, population_density_01, population_density_02, pib_per_capita_01, pib_per_capita_02;
  float super_power_01, super_power_02;
  char state_01, state_02, code_01[5], code_02[5], city_name_01[50], city_name_02[50];
  int soma_01 = 0, soma_02 = 0;

  printf("--------------------------------\n");
  printf("--------------------------------\n");
  printf("REGISTRE UMA CARTA DE CIDADE 1:\n\n");
  printf("--------------------------------\n");
  
  // Entrada para registrar o estado
  printf("Digite o estado (A~H): ");
  scanf(" %c", &state_01);

  // Entrada para registrar o código
  printf("Digite o código da cidade (01~04): ");
  scanf("%s", code_01);
  
  // Entrada para registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  scanf("%s", city_name_01);
  
  // Entrada para registrar a população da cidade
  printf("Digite a população da cidade: ");
  scanf("%lu", &population_01);
  
  // Entrada para registrar a quantidade de pontos turísticos
  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &turistic_points_quantity_01);

  // Entrada para registrar a área da cidade
  printf("Digite a área da cidade (km²): ");
  scanf("%f", &area_01);

  // Entrada para registrar o PIB da cidade
  printf("Digite o PIB da cidade (bilhões): ");
  scanf("%f", &pib_01);

  printf("\n--------------------------------\n\n");
  printf("--------------------------------\n");
  printf("REGISTRE UMA CARTA DE CIDADE 2:\n\n");
  printf("--------------------------------\n");
  
  // Entrada para registrar o estado
  printf("Digite o estado (A~H): ");
  scanf(" %c", &state_02);

  // Entrada para registrar o código
  printf("Digite o código da cidade (01~04): ");
  scanf("%s", code_02);
  
  // Entrada para registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  scanf("%s", city_name_02);
  
  // Entrada para registrar a população da cidade
  printf("Digite a população da cidade: ");
  scanf("%lu", &population_02);
  
  // Entrada para registrar a quantidade de pontos turísticos
  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &turistic_points_quantity_02);

  // Entrada para registrar a área da cidade
  printf("Digite a área da cidade (km²): ");
  scanf("%f", &area_02);

  // Entrada para registrar o PIB da cidade
  printf("Digite o PIB da cidade (bilhões): ");
  scanf("%f", &pib_02);

  printf("\n--------------------------------\n\n");

  // Calculando a densidade populacional
  population_density_01 = population_01 / area_01;
  population_density_02 = population_02 / area_02;

  // Calculando o PIB per capita
  pib_per_capita_01 = pib_01 / population_01;
  pib_per_capita_02 = pib_02 / population_02;

  // Calculando o Super Poder
  // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade populacional)
  super_power_01 = (float)population_01 + area_01 + pib_01 + (float)turistic_points_quantity_01 + pib_per_capita_01 + (1.0 / population_density_01);
  super_power_02 = (float)population_02 + area_02 + pib_02 + (float)turistic_points_quantity_02 + pib_per_capita_02 + (1.0 / population_density_02);

  // Exibindo os dados da Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", state_01);
  printf("Código: %c%s\n", state_01, code_01);
  printf("Nome da cidade: %s\n", city_name_01);
  printf("População: %lu\n", population_01);
  printf("Área: %.2f km²\n", area_01);
  printf("PIB: %.2f bilhões de reais\n", pib_01);
  printf("Densidade Populacional: %.2f hab/km²\n", population_density_01);
  printf("PIB per capita: %.6f bilhões de reais\n", pib_per_capita_01);
  printf("Pontos Turísticos: %d\n", turistic_points_quantity_01);
  printf("Super Poder: %.2f\n", super_power_01);

  printf("\n\n");
  // Exibindo os dados da Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", state_02);
  printf("Código: %c%s\n", state_02, code_02);
  printf("Nome da cidade: %s\n", city_name_02);
  printf("População: %lu\n", population_02);
  printf("Área: %.2f km²\n", area_02);
  printf("PIB: %.2f bilhões de reais\n", pib_02);
  printf("Densidade Populacional: %.2f hab/km²\n", population_density_02);
  printf("PIB per capita: %.6f bilhões de reais\n", pib_per_capita_02);
  printf("Pontos Turísticos: %d\n", turistic_points_quantity_02);
  printf("Super Poder: %.2f\n", super_power_02);

  printf("\n--------------------------------\n");
  printf("MENU DE COMPARAÇÃO:\n");
  printf("--------------------------------\n");
  printf("Escolha o atributo para comparar:\n\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  printf("7 - Super Poder\n");
  printf("8 - Comparar TODOS os atributos\n");
  printf("\nDigite sua escolha: ");
  
  int option;
  scanf("%d", &option);

  printf("\n--------------------------------\n");
  printf("RESULTADO DA COMPARAÇÃO:\n");
  printf("--------------------------------\n\n");

  switch(option) {
    case 1:
      // Comparando População (maior vence)
      printf("Atributo escolhido: População\n");
      printf("Carta 1: %lu habitantes\n", population_01);
      printf("Carta 2: %lu habitantes\n", population_02);
      if (population_01 > population_02) {
        printf("\n✓ Carta 1 (%s) venceu!\n", city_name_01);
      } else if (population_02 > population_01) {
        printf("\n✓ Carta 2 (%s) venceu!\n", city_name_02);
      } else {
        printf("\n✓ Empate!\n");
      }
      break;

    case 2:
      // Comparando Área (maior vence)
      printf("Atributo escolhido: Área\n");
      printf("Carta 1: %.2f km²\n", area_01);
      printf("Carta 2: %.2f km²\n", area_02);
      if (area_01 > area_02) {
        printf("\n✓ Carta 1 (%s) venceu!\n", city_name_01);
      } else if (area_02 > area_01) {
        printf("\n✓ Carta 2 (%s) venceu!\n", city_name_02);
      } else {
        printf("\n✓ Empate!\n");
      }
      break;

    case 3:
      // Comparando PIB (maior vence)
      printf("Atributo escolhido: PIB\n");
      printf("Carta 1: %.2f bilhões\n", pib_01);
      printf("Carta 2: %.2f bilhões\n", pib_02);
      if (pib_01 > pib_02) {
        printf("\n✓ Carta 1 (%s) venceu!\n", city_name_01);
      } else if (pib_02 > pib_01) {
        printf("\n✓ Carta 2 (%s) venceu!\n", city_name_02);
      } else {
        printf("\n✓ Empate!\n");
      }
      break;

    case 4:
      // Comparando Pontos Turísticos (maior vence)
      printf("Atributo escolhido: Pontos Turísticos\n");
      printf("Carta 1: %d pontos\n", turistic_points_quantity_01);
      printf("Carta 2: %d pontos\n", turistic_points_quantity_02);
      if (turistic_points_quantity_01 > turistic_points_quantity_02) {
        printf("\n✓ Carta 1 (%s) venceu!\n", city_name_01);
      } else if (turistic_points_quantity_02 > turistic_points_quantity_01) {
        printf("\n✓ Carta 2 (%s) venceu!\n", city_name_02);
      } else {
        printf("\n✓ Empate!\n");
      }
      break;

    case 5:
      // Comparando Densidade Populacional (MENOR vence)
      printf("Atributo escolhido: Densidade Populacional\n");
      printf("Carta 1: %.2f hab/km²\n", population_density_01);
      printf("Carta 2: %.2f hab/km²\n", population_density_02);
      printf("(Observação: Menor densidade vence!)\n");
      if (population_density_01 < population_density_02) {
        printf("\n✓ Carta 1 (%s) venceu!\n", city_name_01);
      } else if (population_density_02 < population_density_01) {
        printf("\n✓ Carta 2 (%s) venceu!\n", city_name_02);
      } else {
        printf("\n✓ Empate!\n");
      }
      break;

    case 6:
      // Comparando PIB per capita (maior vence)
      printf("Atributo escolhido: PIB per Capita\n");
      printf("Carta 1: %.6f bilhões por habitante\n", pib_per_capita_01);
      printf("Carta 2: %.6f bilhões por habitante\n", pib_per_capita_02);
      if (pib_per_capita_01 > pib_per_capita_02) {
        printf("\n✓ Carta 1 (%s) venceu!\n", city_name_01);
      } else if (pib_per_capita_02 > pib_per_capita_01) {
        printf("\n✓ Carta 2 (%s) venceu!\n", city_name_02);
      } else {
        printf("\n✓ Empate!\n");
      }
      break;

    case 7:
      // Comparando Super Poder (maior vence)
      printf("Atributo escolhido: Super Poder\n");
      printf("Carta 1: %.2f\n", super_power_01);
      printf("Carta 2: %.2f\n", super_power_02);
      if (super_power_01 > super_power_02) {
        printf("\n✓ Carta 1 (%s) venceu!\n", city_name_01);
      } else if (super_power_02 > super_power_01) {
        printf("\n✓ Carta 2 (%s) venceu!\n", city_name_02);
      } else {
        printf("\n✓ Empate!\n");
      }
      break;

    case 8:
      // Comparando TODOS os atributos
      printf("Comparando TODOS os atributos:\n\n");
      
      soma_01 = 0;
      soma_02 = 0;

      // População
      if (population_01 > population_02) {
        soma_01++;
        printf("População: Carta 1 venceu (1)\n");
      } else {
        soma_02++;
        printf("População: Carta 2 venceu (0)\n");
      }

      // Área
      if (area_01 > area_02) {
        soma_01++;
        printf("Área: Carta 1 venceu (1)\n");
      } else {
        soma_02++;
        printf("Área: Carta 2 venceu (0)\n");
      }

      // PIB
      if (pib_01 > pib_02) {
        soma_01++;
        printf("PIB: Carta 1 venceu (1)\n");
      } else {
        soma_02++;
        printf("PIB: Carta 2 venceu (0)\n");
      }

      // Pontos Turísticos
      if (turistic_points_quantity_01 > turistic_points_quantity_02) {
        soma_01++;
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
      } else {
        soma_02++;
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
      }

      // Densidade Populacional (MENOR vence)
      if (population_density_01 < population_density_02) {
        soma_01++;
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
      } else {
        soma_02++;
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
      }

      // PIB per capita
      if (pib_per_capita_01 > pib_per_capita_02) {
        soma_01++;
        printf("PIB per Capita: Carta 1 venceu (1)\n");
      } else {
        soma_02++;
        printf("PIB per Capita: Carta 2 venceu (0)\n");
      }

      // Super Poder
      if (super_power_01 > super_power_02) {
        soma_01++;
        printf("Super Poder: Carta 1 venceu (1)\n");
      } else {
        soma_02++;
        printf("Super Poder: Carta 2 venceu (0)\n");
      }

      printf("\n--------------------------------\n");
      printf("PLACAR FINAL:\n");
      printf("Carta 1 (%s): %d vitórias\n", city_name_01, soma_01);
      printf("Carta 2 (%s): %d vitórias\n", city_name_02, soma_02);
      printf("--------------------------------\n");

      if(soma_01 > soma_02){
        printf("\n🏆 A cidade %s venceu o jogo!\n", city_name_01);
      } else if(soma_02 > soma_01) {
        printf("\n🏆 A cidade %s venceu o jogo!\n", city_name_02);
      } else {
        printf("\n🤝 Empate!\n");
      }
      break;

    default:
      printf("❌ Opção inválida! Escolha entre 1 e 8.\n");
      break;
  } 

  return 0;
}
