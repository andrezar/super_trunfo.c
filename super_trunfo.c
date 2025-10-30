#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char nomePais1[30];
    unsigned int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1;

    // Carta 2
    char nomePais2[30];
    unsigned int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao; // variável do menu

    printf("===== Cadastro da Carta 1 =====\n");
    printf("Nome do País: ");
    scanf(" %s", nomePais1);
    printf("População: ");
    scanf("%u", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcula densidade
    densidade1 = populacao1 / area1;

    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Nome do País: ");
    scanf(" %s", nomePais2);
    printf("População: ");
    scanf("%u", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    printf("\n===== Cartas Cadastradas =====\n");
    printf("Carta 1: %s | População: %u | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           nomePais1, populacao1, area1, pib1, pontosTuristicos1, densidade1);
    printf("Carta 2: %s | População: %u | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n\n",
           nomePais2, populacao2, area2, pib2, pontosTuristicos2, densidade2);

    printf("===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar (1 a 5): ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %u habitantes\n", nomePais1, populacao1);
            printf("%s: %u habitantes\n", nomePais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (populacao1 < populacao2) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (area1 < area2) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nomePais1, pib1);
            printf("%s: %.2f bilhões\n", nomePais2, pib2);

            // Estrutura aninhada de decisão (comparação mais complexa)
            if (pib1 > pib2) {
                if (pib1 - pib2 > 1000) {
                    printf("Grande vantagem econômica! Vencedor: %s\n", nomePais1);
                } else {
                    printf("Vantagem moderada. Vencedor: %s\n", nomePais1);
                }
            } else if (pib2 > pib1) {
                if (pib2 - pib1 > 1000) {
                    printf("Grande vantagem econômica! Vencedor: %s\n", nomePais2);
                } else {
                    printf("Vantagem moderada. Vencedor: %s\n", nomePais2);
                }
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomePais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                if (pontosTuristicos1 - pontosTuristicos2 > 5) {
                    printf("Diferença impressionante! Vencedor: %s\n", nomePais1);
                } else {
                    printf("Vantagem pequena. Vencedor: %s\n", nomePais1);
                }
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                if (pontosTuristicos2 - pontosTuristicos1 > 5) {
                    printf("Diferença impressionante! Vencedor: %s\n", nomePais2);
                } else {
                    printf("Vantagem pequena. Vencedor: %s\n", nomePais2);
                }
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (quanto menor, melhor)\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);

            // regra invertida
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nomePais1);
            } else if (densidade1 > densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    printf("\n===== Fim da Comparação =====\n");
    return 0;
}

