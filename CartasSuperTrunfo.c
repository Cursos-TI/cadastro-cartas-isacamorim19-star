#include <stdio.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades 
//           utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Área para entrada de dados

    // Área para exibição dos dados da cidade

    return 0;
}

int main() {
    // Carta 1 - São Paulo
    char codigo1[4] = "A01";
    char nome_cidade1[50] = "São Paulo";
    int populacao1 = 12396372;
    int area1 = 248222;
    float pib1 = 800.0; // PIB em bilhões de reais
    int pontos_turisticos1 = 20;
    float densidade_populacional1 = (float) populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1; 

    // Carta 2 - Rio de Janeiro
    char codigo2[4] = "A02";
    char nome_cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6775561;
    int area2 = 12000;
    float pib2 = 450.0; // PIB em bilhões de reais
    int pontos_turisticos2 = 25;
    float densidade_populacional2 = (float) populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibir Carta 1
    printf("Carta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("PIB: %.2f bilhões R$\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.8f\n\n", pib_per_capita1);

    // Exibir Carta 2
    printf("Carta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: %.2f bilhões R$\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.8f\n", pib_per_capita2);

    return 0;
}