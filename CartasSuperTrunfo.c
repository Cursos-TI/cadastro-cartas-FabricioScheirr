#include <stdio.h>

int main(){
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2, opcao;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    printf("=== CARTA 1 ===\n");
    printf("Estado: Rio Grande do Sul\n");
    printf("Letra do estado: "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%3s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

    // Calculando densidade populacional e PIB per capita para a carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: Santa Catarina\n");
    printf("Letra do estado: "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%3s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos2); 

     // Calculando densidade populacional e PIB per capita para a carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\n==== CARTA 1 ====\n");
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n==== CARTA 2 ====\n");
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);  

    // =========================================
    // VARIAVEIS DO NIVEL MESTRE
    // =========================================

    int atributo1, atributo2;

    float valorAtributo1Carta1, valorAtributo1Carta2;
    float valorAtributo2Carta1, valorAtributo2Carta2;

    float somaCarta1, somaCarta2;

    // =========================================
    // MENU DO PRIMEIRO ATRIBUTO
    // =========================================

    printf("\n=========================================\n");
    printf("          ESCOLHA O PRIMEIRO ATRIBUTO\n");
    printf("\n========================================\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    
    printf("\nDigite sua escolha: ");
    scanf("%d", &atributo1);

    // =========================================
    // SWITCH DO PRIMEIRO ATRIBUTO
    // =========================================
    switch (atributo1) {
        case 1:
            valorAtributo1Carta1 = populacao1;
            valorAtributo1Carta2 = populacao2;
            break;
        case 2:
            valorAtributo1Carta1 = area1;
            valorAtributo1Carta2 = area2;
            break;
        case 3:
            valorAtributo1Carta1 = pib1;
            valorAtributo1Carta2 = pib2;
            break;
        case 4:
            valorAtributo1Carta1 = pontosTuristicos1;
            valorAtributo1Carta2 = pontosTuristicos2;
            break;
        case 5:
            valorAtributo1Carta1 = densidade1;
            valorAtributo1Carta2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =========================================
    // MENU DINAMICO DO SEGUNDO ATRIBUTO
    // =========================================

    printf("\n=========================================\n");
    printf("          ESCOLHA O SEGUNDO ATRIBUTO\n");
    printf("\n========================================\n");

    // O atributo escolhido anteriormente não aprece.

    if (atributo1 != 1) {
        printf("1 - Populacao\n");
    }
    if (atributo1 != 2) {
        printf("2 - Area\n");
    }
    if (atributo1 != 3) {
        printf("3 - PIB\n");
    }
    if (atributo1 != 4) {
        printf("4 - Pontos Turisticos\n");
    }
    if (atributo1 != 5) {
        printf("5 - Densidade Populacional\n");
    }

    printf("\nDigite sua escolha: ");
    scanf("%d", &atributo2);

    // =========================================
    // IMPEDIR ATRIBUTO REPETIDO
    // =========================================
    if (atributo1 == atributo2) {
        printf("Erro: o segundo atributo nao pode ser igual ao primeiro!\n");
        return 0;
    }

    // =========================================
    // SWITCH DO SEGUNDO ATRIBUTO
    // =========================================
    switch (atributo2) {
        case 1:
            valorAtributo2Carta1 = populacao1;
            valorAtributo2Carta2 = populacao2;
            break;
        case 2:
            valorAtributo2Carta1 = area1;
            valorAtributo2Carta2 = area2;
            break;
        case 3:
            valorAtributo2Carta1 = pib1;
            valorAtributo2Carta2 = pib2;
            break;
        case 4:
            valorAtributo2Carta1 = pontosTuristicos1;
            valorAtributo2Carta2 = pontosTuristicos2;
            break;
        case 5:
            valorAtributo2Carta1 = densidade1;
            valorAtributo2Carta2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =========================================
    // MOSTRAR OS ATRIBUTOS ESCOLHIDOS
    // =========================================

    printf("\n=========================================\n");
    printf("              COMPARACAO DAS CARTAS\n");
    printf("\n=======================================\n");

    printf("\nCarta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    //Nome do primeiro atributo
    printf("\nPrimeiro atributo: ");

    switch (atributo1) {
        case 1:
            printf("Populacao\n");
            break;
        case 2:
            printf("Area\n");
            break;
        case 3:
            printf("PIB\n");
            break;
        case 4:
            printf("Pontos Turisticos\n");
            break;
        case 5:
            printf("Densidade Populacional\n");
            break;
        
    }

    printf("Carta 1: %2f\n", valorAtributo1Carta1);
    printf("Carta 2: %2f\n", valorAtributo2Carta2);

    //Nome do segundo atributo
    printf("\nSegundo atributo: ");

    switch (atributo2) {
        case 1:
            printf("Populacao\n");
            break;
        case 2:
            printf("Area\n");
            break;
        case 3:
            printf("PIB\n");
            break;
        case 4:
            printf("Pontos Turisticos\n");
            break;
        case 5:
            printf("Densidade Populacional\n");
            break;
    }
    printf("Carta 1: %2f\n", valorAtributo2Carta1);
    printf("Carta 2: %2f\n", valorAtributo2Carta2);

    // =========================================
    // COMPARAÇÃO DO PRIMEIRO ATRIBUTO 
    // =========================================

    printf("\n=========================================\n");
    printf("                RESULTADO DOS ATRIBUTOS\n");
    printf("\n========================================\n");

    printf("\nPrimeiro atributo escolhido: ");

    if (atributo1 == 5) {

        //Densidade: MENOR vence
        if (valorAtributo1Carta1 < valorAtributo1Carta2) {
            printf("Carta 1 (%s) venceu!\n", cidade1);
        } else if (valorAtributo1Carta1 > valorAtributo1Carta2) {
            printf("Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Empate!\n");
        }
    }

    printf("\n=========================================\n");
    printf("COMPARAÇÃO - PONTOS TURISTICOS\n");
    printf("\n========================================\n");

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (valorAtributo1Carta2 < valorAtributo1Carta1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    // =========================================
    // COMPARAÇÃO DO SEGUNDO ATRIBUTO
    // =========================================

    printf("\nSegundo atributo:\n");

    if (atributo2 == 5) {

        //Densidade: MENOR vence
        if (valorAtributo2Carta1 < valorAtributo2Carta2) {
            printf("Carta 1 (%s) venceu!\n", cidade1);
        } else if (valorAtributo2Carta1 > valorAtributo2Carta2) {
            printf("Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Empate!\n");
        }
    }

    // Outros atributos: MAIOR vence

    if(valorAtributo2Carta1 > valorAtributo2Carta2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (valorAtributo2Carta1 < valorAtributo2Carta2) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    // =========================================
    //SOMA DOS DOIS ATRIBUTOS
    // =========================================

    somaCarta1 = valorAtributo1Carta1 + valorAtributo2Carta1;
    somaCarta2 = valorAtributo1Carta2 + valorAtributo2Carta2;

     printf("\n=========================================\n");
    printf("          SOMA DOS ATRIBUTOS\n");
    printf("\n========================================\n");

    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    // =========================================
    //OPERADOR TERNARIO 
    // =========================================

    char *resultadofinal;
    resultadofinal = 
        (somaCarta1 > somaCarta2) ? "Carta 1 venceu!" :
        (somaCarta1 < somaCarta2) ? "Carta 2 venceu!" :
        "Empate!";
        
    // =========================================
    // RESULTADO FINAL
    // =========================================

    printf("\n=========================================\n");
    printf("          RESULTADO FINAL\n");
    printf("\n========================================\n");
    printf("%s\n", resultadofinal);

    // =========================================
    //COMPARAÇÃO - POPULAÇÃO
    // =========================================

    printf("\n=========================================\n");
    printf("COMPARAÇÃO - POPULACAO\n");
    printf("\n========================================\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    // =========================================
    //COMPARAÇÃO - ÁREA
    // =========================================

    printf("\n=========================================\n");
    printf("COMPARAÇÃO - AREA\n");
    printf("\n========================================\n");
   
    if (area1 > area2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }


    // =========================================
    //COMPARAÇÃO - PIB
    // =========================================

    printf("\n==================================\n");
    printf("COMPRACAO - PIB\n");
    printf("\n=================================\n");

    if (pib1 > pib2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

     // =========================================
    //COMPARAÇÃO - DENSIDADE POPULACIONAL
    // =========================================
    // Na densidade, o MENOR valor vence. 
    printf("\n==================================\n");
    printf("COMPRACAO - DENSIDADE POPULACIONAL\n");
    printf("\n=================================\n");

    if (densidade1 < densidade2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    // =========================================
    //COMPARAÇÃO - PIB PER CAPITA
    // =========================================

    printf("\n=================================\n");
    printf("COMPARACAO - PIB PER CAPITA\n");
    printf("\n================================\n");

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    //=============================================
    //>>>> SWITCH
    //=============================================

    switch (opcao) {
        // OPÇÃO 1 - POPULAÇÃO
        case 1:
            printf("\n=== COMPARACAO: POPULACAO ===\n");

            printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // OPÇÃO 2 - ÁREA
        case 2:
            printf("\n=== COMPARACAO: AREA ===\n");

            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // OPÇÃO 3 - PIB
        case 3:
            printf("\n=== COMPARACAO: PIB ===\n");

            printf("Carta 1 - %s: %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // OPÇÃO 4 - PONTOS TURÍSTICOS
        case 4:
            printf("\n=== COMPARACAO: PONTOS TURISTICOS ===\n");

            printf("Carta 1 - %s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // OPÇÃO 5 - DENSIDADE DEMOGRÁFICA
        case 5:
            printf("\n=== COMPARACAO: DENSIDADE DEMOGRAFICA ===\n");

            printf("Carta 1 - %s: %.2f habitantes/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f habitantes/km²\n", cidade2, densidade2);

            // Na densidade, o MENOR valor vence.
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // OPÇÃO INVÁLIDA
        default:
            printf("\nOpcao invalida\n");
            printf("Escolha um opcao de 1 a 5.\n");
            break;
    }










    return 0;












}
