#include <stdio.h>

int main() {
   // Estrutura para armazenar os dados de uma carta
    
    char estado;               // Estado da cidade (A-H)
    char codigo[4];            // Código da carta (ex: A01, B03)
    char nomeCidade[50]; // Nome da cidade
    int populacao;             // População da cidade
    float area;                // Área da cidade em km²
    float pib;                 // PIB da cidade
    int pontosTuristicos;      // Número de pontos turísticos

    // Entrada de dados para a primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);  // O espaço antes de %c para ignorar espaços em branco
    printf("Código (ex: A01, B03): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    fgets(carta1.nomeCidade, MAX_NOME_CIDADE, stdin);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados para a segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);  // O espaço antes de %c para ignorar espaços em branco
    printf("Código (ex: A01, B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    getchar();  // Limpar o buffer de entrada
    fgets(carta2.nomeCidade, MAX_NOME_CIDADE, stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = '\0';  // Remover o '\n' gerado pelo fgets
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibir as cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}

