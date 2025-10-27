#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Dados das cartas
    char nome1[] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2200000000000.0;
    int pontos1 = 25;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    char nome2[] = "Argentina";
    int populacao2 = 45300000;
    float area2 = 2780400.0;
    float pib2 = 487000000000.0;
    int pontos2 = 18;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Menu de atributos
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("5 - PIB per capita\n");
    printf("6 - Pontos turísticos\n");
    scanf("%d", &atributo1);

    // Menu dinâmico para segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Densidade Demográfica\n", i); break;
                case 5: printf("%d - PIB per capita\n", i); break;
                case 6: printf("%d - Pontos turísticos\n", i); break;
            }
        }
    }
    scanf("%d", &atributo2);

    // Função para extrair valores dos atributos
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 5: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
        case 6: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 5: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
        case 6: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Exibição dos valores
    printf("\nComparação entre %s e %s:\n", nome1, nome2);
    printf("Atributo 1 (%d): %.2f vs %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    printf("Atributo 2 (%d): %.2f vs %.2f\n", atributo2, valor2_carta1, valor2_carta2);

    // Regra de comparação
    float resultado1 = (atributo1 == 4) ? (valor1_carta1 < valor1_carta2 ? 1 : 0) : (valor1_carta1 > valor1_carta2 ? 1 : 0);
    float resultado2 = (atributo2 == 4) ? (valor2_carta1 < valor2_carta2 ? 1 : 0) : (valor2_carta1 > valor2_carta2 ? 1 : 0);

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\nResultado: %s venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nResultado: %s venceu!\n", nome2);
    } else {
        printf("\nResultado: Empate!\n");
    }


    return 0;
}
