#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //Dados da Carta 1 - Rio Grande do Sul
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "Porto Alegre";
    int populacao1 = 1332845;
    float area1 = 495.39;
    float pib1 = 81.56;
    int pontosTuristicos1 = 20;

    // Dados da Carta 2  - Santa Catarina 
    char estado2 = 'B'; 
    char codigo2[4] = "B01";
    char cidade2[50] = "Florianopolis";
    int populacao2 = 537211;
    float area2 = 675.41;
    float pib2 = 39.70;
    int pontosTuristicos2 = 15;

  // Área para entrada de dados
    //carta 1 
    printf("====================================\n");
      printf("                 CARTA1\n");

    printf("====================================\n");
      printf("Estado: Rio Grande do Sul\n");
      printf("Codigo: %s\n", codigo1);
      printf("Nome da Cidade: %s\n", cidade1);
      printf("Populacao: %d habitantates\n", populacao1);
      printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

      //Carta 2 
    printf("====================================\n");
      printf("                 CARTA2\n");
    
    printf("====================================\n");
      printf("Estado: Santa Catarina\n");
      printf("Codigo: %s\n", codigo2);
      printf("Nome da Cidade: %s\n", cidade2);
      printf("Populacao: %d habitantates\n", populacao2);
      printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);


  // Área para exibição dos dados da cidade

return 0;
} 
