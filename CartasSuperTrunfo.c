#include <stdio.h>
#include <stdlib.h>



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os  comentários para implementar cada parte do desafio.
//Teste  Alcides junior


    //variaveis carta 1

int main() {
    int atributo;
    char pais1[50];
    int populacao1;
    int pontoturistico1;
    float area1;
    float pib1;
    float densidade1;

    //vaiarveis da carta dois

    char pais2[50];
    int populacao2;
    int pontoturistico2;
    float area2;
    float pib2;
    float densidade2;

   

    // cadastrar carta1
    printf(" ===== Carta 1\n");
    printf("Digite o pais da 1° carta:  ");
    scanf("%s", pais1);
         
    printf("Digite a densidade da 1° carta:  ");
    scanf("%f", &densidade1);

    printf("Digite a população da 1° carta: ");
    scanf("%d", &populacao1);

    printf("Digite a area da 1° carta: ");
    scanf("%f", &area1);

    printf("Digite quantidade pontos turisticos da 1° carta: ");
    scanf("%d", &pontoturistico1);

    printf("Digite o PIB da 1° carta: ");
    scanf("%f", &pib1);

 // cadastrar carta2
     printf("\n ===== Carta 2\n");
    printf("Digite o pais da 1° carta:  ");
    scanf("%s", pais2);

    printf("Digite a densidade da 2° carta:  ");
    scanf("%f", &densidade2);

    printf("Digite a população da 2° carta: ");
    scanf("%d", &populacao2);

    printf("Digite a area da 2° carta: ");
    scanf("%f", &area2);

    printf("Digite quantidade pontos turisticos da 2° carta: ");
    scanf("%d", &pontoturistico2);

    printf("Digite o PIB da 2° carta: ");
    scanf("%f", &pib2);

// selecionar atributo para comparar

    
    printf("***Escolha qual atributo sera analizado de 1 a 5***\n");
    printf("1 - População\n");
    printf("2 - Pontos turisticos\n");
    printf("3 - Aria\n");
    printf("4 - Pib\n "); 
    printf("5 - Densidade\n ");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &atributo);
   

    // comparar atributos e determinar vencedor
    switch (atributo) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A carta vencedora é: %s com população de %d\n", pais1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("A carta vencedora é: %s com população de %d\n", pais2, populacao2);
            } else {
                printf("Empate! Ambas as cartas têm a mesma população de %d\n", populacao1);
            }
            break;
        case 2:
            if (pontoturistico1 > pontoturistico2) {
                printf("A carta vencedora é: %s com %d pontos turísticos\n", pais1, pontoturistico1);
            } else if (pontoturistico2 > pontoturistico1) {
                printf("A carta vencedora é: %s com %d pontos turísticos\n", pais2, pontoturistico2);
            } else {
                printf("Empate! Ambas as cartas têm a mesma quantidade de pontos turísticos: %d\n", pontoturistico1);
            }
            break;
        case 3:
            if (area1 > area2) {
                printf("A carta vencedora é: %s com área de %.2f\n", pais1, area1);
            } else if (area2 > area1) {
                printf("A carta vencedora é: %s com área de %.2f\n", pais2, area2);
            } else {
                printf("Empate! Ambas as cartas têm a mesma área de %.2f\n", area1);
            }
            break;
        case 4:
            if (pib1 > pib2) {
                printf("A carta vencedora é: %s com PIB de %.2f\n", pais1, pib1);
            } else if (pib2 > pib1) {
                printf("A carta vencedora é: %s com PIB de %.2f\n", pais2, pib2);
            } else {
                printf("Empate! Ambas as cartas têm o mesmo PIB de %.2f\n", pib1);
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("A carta vencedora é: %s com densidade de %.2f\n", pais1, densidade1);
            } else if (densidade2 < densidade1) {
                printf("A carta vencedora é: %s com densidade de %.2f\n", pais2, densidade2);
            } else {
                printf("Empate! Ambas as cartas têm a mesma densidade de %.2f\n", densidade1);
            }
            break;
        default:
            printf("Atributo inválido! Por favor, escolha um número de 1 a 5.\n");


    
    }
    return 0;

        }