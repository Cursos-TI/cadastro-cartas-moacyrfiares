#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Autor: Moacyr Fiares Pereira Junior 
   
int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Declaração das variáveis da Carta 1
    char estado_1;
    char codigo_da_carta_1[5];
    char nome_da_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int numero_de_pontos_turisticos_1;

    // Declaração das variáveis da Carta 2 
    char estado_2;
    char codigo_da_carta_2[5];
    char nome_da_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int numero_de_pontos_turisticos_2;
  
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

    // Saída dos dados da Carta 2
    printf("\n Carta 2: \n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_da_carta_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos_2);

return 0;
} 
