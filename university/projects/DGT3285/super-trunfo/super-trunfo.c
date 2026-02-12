#include <stdio.h>

int main() {
  int turistic_points_quantity_01, turistic_points_quantity_02;
  unsigned long int population_01, population_02;
  float pib_01, pib_02, area_01, area_02, population_density_01, population_density_02, pib_per_capita_01, pib_per_capita_02;
  float super_power_01, super_power_02;
  char state_01, state_02, code_01[5], code_02[5], city_name_01[50], city_name_02[50];
  

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
  printf("COMPARAÇÃO DE CARTAS:\n");
  printf("--------------------------------\n\n");

  // Comparando População (maior vence)
  // Operador relacional retorna 1 se verdadeiro, 0 se falso
  printf("População: Carta %d venceu (%d)\n", 
         1 + (population_01 <= population_02), 
         population_01 > population_02);

  // Comparando Área (maior vence)
  printf("Área: Carta %d venceu (%d)\n", 
         1 + (area_01 <= area_02), 
         area_01 > area_02);

  // Comparando PIB (maior vence)
  printf("PIB: Carta %d venceu (%d)\n", 
         1 + (pib_01 <= pib_02), 
         pib_01 > pib_02);

  // Comparando Pontos Turísticos (maior vence)
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
         1 + (turistic_points_quantity_01 <= turistic_points_quantity_02), 
         turistic_points_quantity_01 > turistic_points_quantity_02);

  // Comparando Densidade Populacional (MENOR vence)
  printf("Densidade Populacional: Carta %d venceu (%d)\n", 
         1 + (population_density_01 >= population_density_02), 
         population_density_01 < population_density_02);

  // Comparando PIB per capita (maior vence)
  printf("PIB per Capita: Carta %d venceu (%d)\n", 
         1 + (pib_per_capita_01 <= pib_per_capita_02), 
         pib_per_capita_01 > pib_per_capita_02);

  // Comparando Super Poder (maior vence)
  printf("Super Poder: Carta %d venceu (%d)\n", 
         1 + (super_power_01 <= super_power_02), 
         super_power_01 > super_power_02);


  return 0;
}