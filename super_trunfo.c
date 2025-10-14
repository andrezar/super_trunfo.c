#include <stdio.h>

int main () {

    //carta1
    char letraEstado1;
    char codigoCarta1[20];
    char nomeEstado1[20];
    unsigned int populacao1;
    int pontoTuristico1;
    float area1, pib1;
    float densidadePopulacional1, pibPerCapita1;
    float superPoder1;
    float inversoDensidade1;

    //Carta 2
    char letraEstado2;
    char codigoCarta2[20];
    char nomeEstado2[20];
    unsigned int populacao2;
    int pontoTuristico2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2;
    float superPoder2;
    float inversoDensidade2;

    //carta 1
    printf("Digite os dados da Carta 1:\n\n");
    printf ("Letra:");
    scanf("%s", &letraEstado1);
    printf ("Código da carta:");
    scanf("%s", &codigoCarta1);
    printf ("Estado:");
    scanf ("%s", &nomeEstado1);
    printf("População:");
    scanf("%u", &populacao1);
    printf ("Área:");
    scanf("%f", &area1);
    printf ("PIB:");
    scanf("%f", &pib1);
    printf ("Pontos turístico:");
    scanf("%d", &pontoTuristico1);


    //Carta 2
    printf("\n\nDigite os dados da Carta 2:\n\n");
    printf ("Letra:");
    scanf("%s", &letraEstado2);
    printf ("Código da carta:");
    scanf("%s", &codigoCarta2);
    printf ("Estado:");
    scanf ("%s", &nomeEstado2);
    printf("População:");
    scanf("%u", &populacao2);
    printf ("Área:");
    scanf("%f", &area2);
    printf ("PIB:");
    scanf("%f", &pib2);
    printf ("Pontos turístico:");
    scanf("%d", &pontoTuristico2);

    // Calcular densidade populacional
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    // Calcular PIB per capita
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    //Calcular inverso da Densidade
    inversoDensidade1 = 1.0 / densidadePopulacional1;
    inversoDensidade2 = 1.0 / densidadePopulacional2;

    //Calculo do super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontoTuristico1 + pibPerCapita1 + inversoDensidade1;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontoTuristico2 + pibPerCapita2 + inversoDensidade2;

    printf("\nCarta 1\n");
    printf("Estado: %c\n", letraEstado1); 
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeEstado1);
    printf("População: %u\n", populacao1);
    printf("Área: %f em Km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos:%d\n", pontoTuristico1);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %f reais\n\n", pibPerCapita1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", letraEstado2); 
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeEstado2);
    printf("População: %u\n", populacao2);
    printf("Área: %f em Km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos:%d\n", pontoTuristico2);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %f reais\n\n\n", pibPerCapita2);

    //Comparação das cartas

    printf ("----Comparação das Cartas----\n\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %u\n", nomeEstado1, populacao1);  
    printf("Carta 2 - %s: %u\n", nomeEstado2, populacao2);

     if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nomeEstado1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu\n\n", nomeEstado2);
    }

    printf("Comparação de cartas (Atributo:  Área):\n");
    printf("Carta 1 - %s: %.2f km\n", nomeEstado1, area1);  
    printf("Carta 2 - %s: %.2f km\n", nomeEstado2, area2);

     if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nomeEstado1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu\n\n", nomeEstado2);
    }

    printf("Comparação de cartas (Atributo:  PIB):\n");
    printf("Carta 1 - %s: %f\n", nomeEstado1, pib1);  
    printf("Carta 2 - %s: %f\n", nomeEstado2, pib2);

     if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nomeEstado1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu\n\n", nomeEstado2);
    }


    printf("Comparação de cartas (Atributo:  Pontos Turísticos):\n");
    printf("Carta 1 - %s: %d\n", nomeEstado1, pontoTuristico1);  
    printf("Carta 2 - %s: %d\n", nomeEstado2, pontoTuristico2);

     if (pontoTuristico1 > pontoTuristico2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nomeEstado1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu\n\n", nomeEstado2);
    }

    printf("Comparação de cartas (Atributo:  PIB per Capita):\n");
    printf("Carta 1 - %s: %f\n", nomeEstado1, pibPerCapita1);  
    printf("Carta 2 - %s: %f\n", nomeEstado2, pibPerCapita2);

     if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nomeEstado1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu\n\n", nomeEstado2);
    }

    printf("Comparação de cartas (Atributo:  Densidade Populacional):\n");
    printf("Carta 1 - %s: %f\n", nomeEstado1, densidadePopulacional1);  
    printf("Carta 2 - %s: %f\n", nomeEstado2, densidadePopulacional2);

     if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nomeEstado1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu\n\n", nomeEstado2);
    }

    printf("Comparação de cartas (Atributo:  Super Poder):\n");
    printf("Carta 1 - %s: %f\n", nomeEstado1, superPoder1);  
    printf("Carta 2 - %s: %f\n", nomeEstado2, superPoder2);

     if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nomeEstado1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu\n\n", nomeEstado2);
    }
   return 0;
}
