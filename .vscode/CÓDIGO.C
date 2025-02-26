#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char codigo1[4], codigo2[4];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    
    // Entrada de dados para a primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Entrada de dados para a segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("\nCarta 1 - %s:\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de dólares\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    
    printf("\nCarta 2 - %s:\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de dólares\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);YY
    
    return 0;
}
