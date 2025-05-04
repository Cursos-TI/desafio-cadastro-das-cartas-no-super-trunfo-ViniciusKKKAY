#include <stdio.h>

int main() {
    // Declaração de variáveis
    char Estado[10], Estado2[10];
    char Cod_carta[3], Cod_carta2[3], nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2,comp_pop, comp_area, comp_pib, comp_pontos, comp_per_capita, comp_den_pop, comp_super_poder;
    float Area_km, Area_km2, pib, pib2, per_capita, Den_popu, per_capita2, Den_popu2, carta1, carta2;
    int Num_pont_turis, Num_pont_turis2;
    float super_poder, super_poder2;

    // Lendo os dados de entrada da primeira carta
    printf("\nCadastro da Carta1\n");
    printf("Digite o Código da Carta:\n");
    scanf(" %3s", Cod_carta); // informe os números das caras (01,02...)
    printf("Digite o Estado:\n");
    scanf(" %10s", Estado); // Lê até 2 caracteres (para estados como "SP", "RJ", etc.)
    printf("Digite o Nome da Cidade:\n");
    scanf(" %50s", nome_cidade);
    printf("Digite a quantidade de habitantes da cidade:\n");
    scanf(" %d", &populacao);
    printf("Digite a Área (em km²) da cidade:\n");
    scanf(" %f", &Area_km);
    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib);
    printf("Digite o Número de Pontos Turísticos da cidade:\n");
    scanf(" %d", &Num_pont_turis);

    //Cálculos da primeira carta

    Den_popu  = populacao / Area_km;
    per_capita = pib / populacao;
    super_poder = populacao + Area_km + pib + Num_pont_turis + per_capita + (1.0 / Den_popu);


    // Lendo os dados de entrada da segunda carta
    printf("\nCadastro da Carta2\n");
    printf("Digite o Código da Carta:\n");
    scanf("%3s", Cod_carta2);
    printf("Digite o Estado:\n");
    scanf(" %10s", Estado2); 
    printf("Digite o Nome da Cidade:\n");
    scanf(" %50s", nome_cidade2);
    printf("Digite a quantidade de habitantes da cidade:\n");
    scanf(" %d", &populacao2);
    printf("Digite a Área (em km²) da cidade:\n");
    scanf(" %f", &Area_km2);
    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);
    printf("Digite o Número de Pontos Turísticos da cidade:\n");
    scanf(" %d", &Num_pont_turis2);

    //Cálculos da segunda carta

    Den_popu2  = populacao2 / Area_km2;
    per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + Area_km2 + pib2 + Num_pont_turis2 + per_capita2 + (1.0 / Den_popu2);

    // comparações 

    comp_pop = populacao > populacao2;
    comp_area = Area_km > Area_km2;
    comp_pib = pib > pib2;
    comp_pontos = Num_pont_turis > Num_pont_turis2;
    comp_per_capita = per_capita > per_capita2;
    comp_den_pop = Den_popu < Den_popu2; // menor densidade vence
    comp_super_poder = super_poder > super_poder2;


    // Imprime as informações da primeira carta
    printf("\nCarta1\n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", Cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %f\n", Area_km);
    printf("PIB: %2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", Num_pont_turis);
    printf ("O Pib Per Capita é: %2f\n",per_capita);
    printf ("O número de habitantes por quilômetro quadrado é: %.2f\n", Den_popu);

    // Imprime as informações da segunda carta
    printf("\nCarta2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", Cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %f\n", Area_km2);
    printf("PIB: %2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Num_pont_turis2);
    printf ("O Pib Per Capita é: %2f\n", per_capita2);
    printf ("O número de habitantes por quilômetro quadrado é: %.2f\n", Den_popu2);

    
  // Exibição dos resultados sem if e else.
  /*printf("\nComparações (1 = Carta 1 venceu, 0 = Carta 2 venceu):\n");
    printf("População: %d\n", comp_pop);
    printf("Área: %d\n", comp_area);
    printf("PIB: %d\n", comp_pib);
    printf("Pontos Turísticos: %d\n", comp_pontos);
    printf("PIB per Capita: %d\n", comp_per_capita);
    printf("Densidade Populacional (menor vence): %d\n", comp_den_pop);
    printf("Super Poder: %d\n", comp_super_poder);*/

    

// comparacões com if e else

if (populacao > populacao2){
    printf ("\nA poulação da carta 1 é maior!\n");
}else{
    printf  ("\nA poulação da carta 2 é maior!\n");
}

if (Area_km > Area_km2){
    printf ("\nA Area da carta 1 é maior!\n");
}else{
    printf  ("\nA Area da carta 2 é maior!\n");
}

if (pib > pib2){
    printf ("\nO pib da carta 1 é maior!\n");
}else{
    printf  ("\nA pib da carta 2 é maior!\n");
}

if (Den_popu > Den_popu2){
    printf ("\nA Densidade Populacional da carta 1 é maior!\n");
}else{
    printf  ("\nA Densidade Populacional da carta 2 é maior!\n");
}

if (per_capita > per_capita2){
    printf ("\nO PIB per capita da carta 1 é maior!\n");
}else{
    printf  ("\nO PIB per capita da carta 2 é maior!\n");
}

if (super_poder > super_poder2){
    printf ("\nA Carta 1 Ganhou!\n");
}else{
    printf  ("\nA Carta 2 Ganhou!\n");
}

    return 0;
}
