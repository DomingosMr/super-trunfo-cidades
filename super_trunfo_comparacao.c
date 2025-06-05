#include <stdio.h>

int main() {
    // Carta 1: Crateús
    char estado1[] = "Ceará";
    char codigo1[] = "C02";
    char nomeCidade1[] = "Crateús";
    int populacao1 = 75000;
    float area1 = 1990.00;
    float pib1 = 1.50; // em bilhões
    int pontosTuristicos1 = 5;

    // Carta 2: Fortaleza
    char estado2[] = "Ceará";
    char codigo2[] = "C01";
    char nomeCidade2[] = "Fortaleza";
    int populacao2 = 2400000;
    float area2 = 313.80;
    float pib2 = 67.00; // em bilhões
    int pontosTuristicos2 = 25;

    // Cálculos: densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Impressão dos dados
    printf("=== Carta 1 ===\n");
    printf("Cidade: %s (%s)\n", nomeCidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Pontos turísticos: %d\n\n", pontosTuristicos1);

    printf("=== Carta 2 ===\n");
    printf("Cidade: %s (%s)\n", nomeCidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Pontos turísticos: %d\n\n", pontosTuristicos2);

    // ==============================
    // Comparação baseada na População
    // (altere aqui para comparar outro atributo se quiser)
    // ==============================

    printf("=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
