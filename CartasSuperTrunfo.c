#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

//Iniciando programa
int main() {

    //Definindo as variaveis para a carta númerio 1
    char estadoCarta_1[15];
    char codigoCarta_1[10];
    char cidadeCarta_1[15];
    int populacaoCarta_1;
    float areaCarta_1;
    float pibCarta_1;
    int qtdPontosTuristicosCarta_1;

    //Definindo as variaveis da carta número 2
    char estadoCarta_2[15];
    char codigoCarta_2[10];
    char cidadeCarta_2[15];
    int populacaoCarta_2;
    float areaCarta_2;
    float pibCarta_2;
    int qtdPontosTuristicosCarta_2; 
    
    // Cadastro das Cartas:
    //Iniciando o recolhimento de informações para a carta número 1
    printf("----Cadastro de informações da carta número 1----\n");

    printf("Digite o estado da carta: \n");
    scanf(" %s", &estadoCarta_1);
    
    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoCarta_1);
    
    printf("Digite a cidade: \n");
    scanf(" %s", cidadeCarta_1);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacaoCarta_1);

    printf("Digite a área (em km²): \n");
    scanf(" %f", &areaCarta_1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibCarta_1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &qtdPontosTuristicosCarta_1);

    //Iniciando o recolhimento de informações para a carta número 2
    printf("----Cadastro de informações da carta número 2----\n");

    printf("Digite o estado da carta: \n");
    scanf(" %s", &estadoCarta_2);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoCarta_2);
    
    printf("Digite a cidade: \n");
    scanf(" %s", cidadeCarta_2);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacaoCarta_2);

    printf("Digite a área (em km²): \n");
    scanf(" %f", &areaCarta_2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibCarta_2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &qtdPontosTuristicosCarta_2);
    //Recolhimento de informações concluidos
    
    //Iniciando etapa de apresentação:
    //Apresentação da Carta número 1
    printf("----------------- Carta 1 -----------------\n");

    printf("Estado: %s\n", estadoCarta_1);
    printf("Código: %s\n", codigoCarta_1);
    printf("Nome da Cidade: %s\n", cidadeCarta_1);
    printf("População: %d\n", populacaoCarta_1);
    printf("Área: %f km²\n", areaCarta_1);
    printf("PIB: %f\n", pibCarta_1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCarta_1);

    //Apresentação da carta número 2
    printf("----------------- Carta 2 -----------------\n");

    printf("Estado: %s\n", estadoCarta_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", cidadeCarta_2);
    printf("População: %d\n", populacaoCarta_2);
    printf("Área: %f km²\n", areaCarta_2);
    printf("PIB: %f\n", pibCarta_2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCarta_2);
    //Etapa de apresentação concluida 
    
    //Finalizando o programa 
    return 0;
}
