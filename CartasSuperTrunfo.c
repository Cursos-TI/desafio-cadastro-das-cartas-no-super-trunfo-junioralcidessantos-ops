#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os  comentários para implementar cada parte do desafio.
//Teste  Alcides junior


    //variaveis carta 1

int main() {

    int populacao1;
    int pontoturistico1;
    float area1;
    float pib1;
    char codigo1[4];

    //vaiarveis da carta dois

    int populacao2;
    int pontoturistico2;
    float area2;
    float pib2;
    char codigo2[4];



    // cadastrar carta1
    printf(" ===== Carta 1 \n");
    printf("Digite o codigo da 1° carta (EX:A01):  ");
    scanf("%s", codigo1);

    printf("Digite a população da 1° carta: ");
    scanf("%d", &populacao1);

    printf("Digite a area da 1° carta: ");
    scanf("%f", &area1);

    printf("Digite quantidade pontos turisticos da 1° carta: ");
    scanf("%d", &pontoturistico1);

    printf("Digite o PIB da 1° carta: ");
    scanf("%f", &pib1);

 // cadastrar carta2
    printf(" ===== Carta 2 \n");
    printf("Digite o codigo da 2° carta (EX:B02):  ");
    scanf("%s", codigo2);

    printf("Digite a população da 2° carta: ");
    scanf("%d", &populacao2);

    printf("Digite a area da 2° carta: ");
    scanf("%f", &area2);

    printf("Digite quantidade pontos turisticos da 2° carta: ");
    scanf("%d", &pontoturistico2);

    printf("Digite o PIB da 2° carta: ");
    scanf("%f", &pib2);

    // imprimir resultado dos dados carta 1

    printf(" ===== \nResutado Carta 1 \n\n");
    printf("Codigo da cidade %s \n", codigo1);
    printf("população é: %d \n", populacao1);
    printf("area é:%.2f \n",  area1);
    printf("Total de ponto turistico:%d \n", pontoturistico1);
    printf("PIB total:%.2f \n", pib1);
    

       // imprimir resultado dos dados carta 2

    printf(" ===== \nresultado Carta 2 \n\n");
    printf("Codigo da cidade %s \n", codigo2);
    printf("população é: %d \n", populacao2);
    printf("area é:%.2f \n",  area2);
    printf("Total de ponto turistico:%d \n", pontoturistico2);
    printf("PIB total:%.2f \n", pib2);

    


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
