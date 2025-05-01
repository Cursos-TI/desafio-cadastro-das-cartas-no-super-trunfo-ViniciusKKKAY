#include <stdio.h>

int main() {
    // Declaração de variáveis
    char Estado, Estado2;
    char Cod_carta[4], Cod_carta2[4], nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2;
    float Area_km, Area_km2, pib, pib2, per_capita, Den_popu, per_capita2, Den_popu2;
    int Num_pont_turis, Num_pont_turis2;

    // Lendo os dados de entrada da primeira carta
    printf("Digite o Estado:\n");
    scanf(" %c", &Estado);
    printf("Digite o Código da Carta:\n");
    scanf(" %s", Cod_carta);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %s", nome_cidade);
    printf("Digite a quantidade de habitantes da cidade:\n");
    scanf(" %d", &populacao);
    printf("Digite a Área (em km²) da cidade:\n");
    scanf(" %f", &Area_km);
    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib);
    printf("Digite o Número de Pontos Turísticos da cidade:\n");
    scanf(" %d", &Num_pont_turis);
    Den_popu  = populacao / Area_km;
    per_capita = pib / populacao;



    // Lendo os dados de entrada da segunda carta
    printf("Digite o Estado:\n");
    scanf(" %c", &Estado2);
    printf("Digite o Código da Carta:\n");
    scanf(" %s", Cod_carta2);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %s", nome_cidade2);
    printf("Digite a quantidade de habitantes da cidade:\n");
    scanf(" %d", &populacao2);
    printf("Digite a Área (em km²) da cidade:\n");
    scanf(" %f", &Area_km2);
    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);
    printf("Digite o Número de Pontos Turísticos da cidade:\n");
    scanf(" %d", &Num_pont_turis2);
    Den_popu2  = populacao2 / Area_km2;
    per_capita2 = pib2 / populacao2;

    // Imprime as informações da primeira carta
    printf("\nCarta1\n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", Cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %f\n", Area_km);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", Num_pont_turis);
    printf ("O Pib Per Capita é: %f\n",per_capita);
    printf ("O número de habitantes por quilômetro quadrado é: %.2f\n", Den_popu);

    // Imprime as informações da segunda carta
    printf("\nCarta2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", Cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %f\n", Area_km2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Num_pont_turis2);
    printf ("O Pib Per Capita é: %f\n", per_capita2);
    printf ("O número de habitantes por quilômetro quadrado é: %.2f\n", Den_popu2);

    return 0;
}
