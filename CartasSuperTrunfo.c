#include <stdio.h>

int main() {
    // Declaração de variáveis
    char Estado, Estado2;
    char Cod_carta[4], Cod_carta2[4];
    char nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2;
    float Area_km, Area_km2;
    float pib, pib2;
    int Num_pont_turis, Num_pont_turis2;

    // Lendo os dados de entrada da primeira carta
    printf("Digite o Estado:\n");
    scanf(" %c", &Estado);
    printf("Digite o Código da Carta:\n");
    scanf("%3s", Cod_carta);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nome_cidade);
    printf("Digite a quantidade de habitantes da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a Área (em km²) da cidade:\n");
    scanf("%f", &Area_km);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Digite o Número de Pontos Turísticos da cidade:\n");
    scanf("%d", &Num_pont_turis);

    // Lendo os dados de entrada da segunda carta
    printf("Digite o Estado:\n");
    scanf(" %c", &Estado2);
    printf("Digite o Código da Carta:\n");
    scanf("%3s", Cod_carta2);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a quantidade de habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²) da cidade:\n");
    scanf("%f", &Area_km2);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos da cidade:\n");
    scanf("%d", &Num_pont_turis2);

    // Imprime as informações da primeira carta
    printf("\nCarta1\n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", Cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %.2f\n", Area_km);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", Num_pont_turis);

    // Imprime as informações da segunda carta
    printf("\nCarta2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", Cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f\n", Area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Num_pont_turis2);

    return 0;
}