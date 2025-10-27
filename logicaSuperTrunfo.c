#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     // Declaração das variáveis da carta 1
    char estado1[] = "SP";
    char codigo1[] = "C001";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699000000.0;
    int pontosTuristicos1 = 15;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Declaração das variáveis da carta 2
    char estado2[] = "RJ";
    char codigo2[] = "C002";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1182.30;
    float pib2 = 411000000.0;
    int pontosTuristicos2 = 12;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Escolha do atributo para comparação
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pibPerCapita2);

    // Lógica de comparação
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    

    return 0;
}
