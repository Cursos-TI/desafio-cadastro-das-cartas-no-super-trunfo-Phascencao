#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Batalha de Cartas

//Iniciando programa
int main() {

    //Definindo as variaveis para a carta número 1 e 2
    char estadoCarta_1[15], estadoCarta_2[15];
    char codigoCarta_1[10], codigoCarta_2[10];
    char cidadeCarta_1[15], cidadeCarta_2[15];
    unsigned long int populacaoCarta_1, populacaoCarta_2; // agora unsigned long int
    float areaCarta_1, areaCarta_2;
    float pibCarta_1, pibCarta_2;
    int qtdPontosTuristicosCarta_1, qtdPontosTuristicosCarta_2; 
    float densidadePopulacionalC_1, densidadePopulacionalC_2;
    float pbiPCapita_1, pbiPCapita_2;
    float superPoder_1, superPoder_2;

    // Cadastro da Carta 1:
    printf("----Cadastro de informações da carta número 1----\n");
    printf("Digite o estado da carta: \n");
    scanf(" %s", estadoCarta_1);
    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoCarta_1);
    printf("Digite a cidade: \n");
    scanf(" %s", cidadeCarta_1);
    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacaoCarta_1);
    printf("Digite a área (em km²): \n");
    scanf(" %f", &areaCarta_1);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibCarta_1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &qtdPontosTuristicosCarta_1);

    //Cadastro da Carta 2:
    printf("----Cadastro de informações da carta número 2----\n");
    printf("Digite o estado da carta: \n");
    scanf(" %s", estadoCarta_2);
    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoCarta_2);
    printf("Digite a cidade: \n");
    scanf(" %s", cidadeCarta_2);
    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacaoCarta_2);
    printf("Digite a área (em km²): \n");
    scanf(" %f", &areaCarta_2);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibCarta_2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &qtdPontosTuristicosCarta_2);

    // cálculos
    densidadePopulacionalC_1 = (float) populacaoCarta_1 / areaCarta_1;
    densidadePopulacionalC_2 = (float) populacaoCarta_2 / areaCarta_2;

    pbiPCapita_1 = (float) pibCarta_1 / populacaoCarta_1;
    pbiPCapita_2 = (float) pibCarta_2 / populacaoCarta_2;

    superPoder_1 = (float) populacaoCarta_1 + areaCarta_1 + pibCarta_1 + qtdPontosTuristicosCarta_1 + pbiPCapita_1 + (1.0f / densidadePopulacionalC_1);
    superPoder_2 = (float) populacaoCarta_2 + areaCarta_2 + pibCarta_2 + qtdPontosTuristicosCarta_2 + pbiPCapita_2 + (1.0f / densidadePopulacionalC_2);

    // apresentação das cartas
    printf("----------------- Carta 1 -----------------\n");
    printf("Estado: %s\n", estadoCarta_1);
    printf("Código: %s\n", codigoCarta_1);
    printf("Nome da Cidade: %s\n", cidadeCarta_1);
    printf("População: %lu\n", populacaoCarta_1);
    printf("Área: %.2f km²\n", areaCarta_1);
    printf("PIB: %.2f de Reais\n", pibCarta_1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCarta_1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalC_1);
    printf("PIB per Capita: %.2f de Reais\n", pbiPCapita_1);
    printf("Super Poder: %.2f\n", superPoder_1);

    printf("----------------- Carta 2 -----------------\n");
    printf("Estado: %s\n", estadoCarta_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", cidadeCarta_2);
    printf("População: %lu\n", populacaoCarta_2);
    printf("Área: %.2f km²\n", areaCarta_2);
    printf("PIB: %.2f de Reais\n", pibCarta_2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCarta_2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalC_2);
    printf("PIB per Capita: %.2f de Reais\n", pbiPCapita_2);
    printf("Super Poder: %.2f\n", superPoder_2);

    // Comparação das cartas
    printf("------ Comparação de Cartas ------\n");

    if (populacaoCarta_1 > populacaoCarta_2)
        printf("População: Carta 1 venceu\n");
    else
        printf("População: Carta 2 venceu\n");

    if (areaCarta_1 > areaCarta_2)
        printf("Área: Carta 1 venceu\n");
    else
        printf("Área: Carta 2 venceu\n");

    if (pibCarta_1 > pibCarta_2)
        printf("PIB: Carta 1 venceu\n");
    else
        printf("PIB: Carta 2 venceu\n");

    if (qtdPontosTuristicosCarta_1 > qtdPontosTuristicosCarta_2)
        printf("Pontos Turísticos: Carta 1 venceu\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu\n");

    if (densidadePopulacionalC_1 < densidadePopulacionalC_2)
        printf("Densidade Populacional: Carta 1 venceu\n");
    else
        printf("Densidade Populacional: Carta 2 venceu\n");

    if (pbiPCapita_1 > pbiPCapita_2)
        printf("PIB per Capita: Carta 1 venceu\n");
    else
        printf("PIB per Capita: Carta 2 venceu\n");

    if (superPoder_1 > superPoder_2)
        printf("Super Poder: Carta 1 venceu\n");
    else
        printf("Super Poder: Carta 2 venceu\n");

    return 0;
}
