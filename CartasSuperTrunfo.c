#include <stdio.h>

// Desafio Super Trunfo 
// Tema - Cadastro das cartas + Cálculo da Densidade e PIB per Capita + Nível avançado 
// Autor: Moacyr Fiares Pereira Junior 
   
int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Declaração das variáveis da Carta 1
    char estado_1;
    char codigo_da_carta_1[5];
    char nome_da_cidade_1[50];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int numero_de_pontos_turisticos_1;
    float densidade_populacional1;
    float PIB_per_capita1;
    float super_poder_1;

    // Declaração das variáveis da Carta 2 
    char estado_2;
    char codigo_da_carta_2[5];
    char nome_da_cidade_2[50];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int numero_de_pontos_turisticos_2;
    float densidade_populacional2;
    float PIB_per_capita2;
    float super_poder_2;
  
    // Área para entrada de dados
  
    // Entrada de dados da Carta 1
    printf("Casdastro Carta 1 \n");

    printf("Digite o Estado (A a H): ");
    scanf("%c", &estado_1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", &codigo_da_carta_1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nome_da_cidade_1);

    printf("Digite a População: ");
    scanf("%d", &populacao_1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_1);

        // Entrada de dados da Carta 2
    printf("\n Cadastro da Carta 2 \n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado_2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", &codigo_da_carta_2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nome_da_cidade_2);

    printf("Digite a População: ");
    scanf("%d", &populacao_2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_2);

    // Cálculo da densidade populacional
    densidade_populacional1 = populacao_1 / area_1;
    densidade_populacional2 = populacao_2 / area_2;

    // Cálculo do PIB per capita
    // PIB está em bilhões → multiplicado por 1.000.000.000
    PIB_per_capita1 = (pib_1 * 1000000000) / populacao_1;
    PIB_per_capita2 = (pib_2 * 1000000000) / populacao_2;

    //Cáculos 

    super_poder_1 = (float)populacao_1 + area_1 + pib_1 + numero_de_pontos_turisticos_1 + PIB_per_capita1 + (1.0 / densidade_populacional1);
    super_poder_2 = (float)populacao_2 + area_2 + pib_2 + numero_de_pontos_turisticos_2 + PIB_per_capita2 + (1.0 / densidade_populacional2);

    // Área para exibição dos dados da cidade

    // Saída dos dados da Carta 1 
    printf("\n Carta 1: \n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_da_carta_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);

    // Saída dos dados da Carta 2
    printf("\n Carta 2: \n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_da_carta_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);


    printf("\n*** COMPARAÇÃO DE CARTAS ***\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao_1 > populacao_2);
    printf("Área: Carta 1 venceu (%d)\n", area_1 > area_2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_1 > pib_2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numero_de_pontos_turisticos_1 > numero_de_pontos_turisticos_2);

    // Na densidade, a MENOR vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita1 > PIB_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_1 > super_poder_2);
    
return 0;
} 