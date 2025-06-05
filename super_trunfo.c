#include <stdio.h>

int main() {
    // Dados da Carta 1: Crateús
    char estado1 = 'C';
    char codigo1[] = "C02";
    char nomeCidade1[] = "Crateus";
    int populacao1 = 75000;
    float area1 = 1990.00;
    float pib1 = 1.50; // bilhões
    int pontosTuristicos1 = 5;

    // Dados da Carta 2: Fortaleza
    char estado2 = 'C';
    char codigo2[] = "C01";
    char nomeCidade2[] = "Fortaleza";
    int populacao2 = 2400000;
    float area2 = 313.80;
    float pib2 = 67.00; // bilhões
    int pontosTuristicos2 = 25;

    // Exibição da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
