#include <stdio.h>

int main() {
    // Variáveis para armazenar informações da Carta 1 e Carta 2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    
    
    // Exibição das informações iniciais do jogo
    printf("**** Super Trunfo ****\n");

    printf("---- Insira as informações da Carta 1 ----\n");

    // Entrada de dados para a Carta 1
    printf("Informe o estado (letra entre 'A' e 'H' representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (letra do estado seguida de um número de 01 a 04, ex.: A01, B03): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe o tamanho da população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico1);

    printf("---- Insira as informações da Carta 2 ----\n");

    // Entrada de dados para a Carta 2
    printf("Informe o estado (letra entre 'A' e 'H' representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (letra do estado seguida de um número de 01 a 04, ex.: A01, B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Informe o tamanho da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico2);

    // Exibe as informações da carta 1
    printf("Informações da Carta 1: \n");

    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Cidade: %s\n", cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f\n", area1);

    printf("PIB: %.2f\n", pib1);

 // Exibe as informações da carta 2
    printf("Número de Pontos Turísticos: %d\n", turistico1);

    printf("Informações da Carta 2: \n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", turistico2);

    return 0;
}
