#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as informações das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // Exibição das informações iniciais do jogo
    printf("**** Super Trunfo ****\n");

    // Entrada de dados para a carta 1
    printf("---- Insira as informações da Carta 1 ----\n");

    printf("Informe o estado (letra entre 'A' e 'H' representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (letra do estado seguida de um número de 01 a 04, ex.: A01, B03): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe o tamanho da população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico1);

    // Entrada de dados para a carta 2
    printf("---- Insira as informações da Carta 2 ----\n");

    printf("Informe o estado (letra entre 'A' e 'H' representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (letra do estado seguida de um número de 01 a 04, ex.: A01, B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Informe o tamanho da população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
    superpoder1 = populacao1 + area1 + pib1 + turistico1 + pibpercapita1 + (1.0f / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + turistico2 + pibpercapita2 + (1.0f / densidade2);

    // Impressão das informações das cartas
    printf("\nInformações da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nInformações da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações e resultados
    printf("\nResultados das Comparações:\n");
    printf("População: %s\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %s\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Número de Pontos Turísticos: %s\n", turistico1 > turistico2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per capita: %s\n", pibpercapita1 > pibpercapita2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n", superpoder1 > superpoder2 ? "Carta 1 venceu" : "Carta 2 venceu");

    return 0;
}
