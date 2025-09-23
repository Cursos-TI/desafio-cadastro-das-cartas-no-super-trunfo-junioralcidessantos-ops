#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Alcides Junior

int main() {
    int atributo, atributo2;
    char pais1[50], pais2[50];
    int populacao1, pontoturistico1, populacao2, pontoturistico2;
    float area1, pib1, densidade1, area2, pib2, densidade2;
    float soma1 = 0, soma2 = 0;

    // cadastrar carta 1
    printf("===== Carta 1 =====\n");
    printf("Digite o pais da 1° carta: ");
    scanf("%s", pais1);

    printf("Digite a densidade da 1° carta: ");
    scanf("%f", &densidade1);

    printf("Digite a população da 1° carta: ");
    scanf("%d", &populacao1);

    printf("Digite a area da 1° carta: ");
    scanf("%f", &area1);

    printf("Digite quantidade pontos turisticos da 1° carta: ");
    scanf("%d", &pontoturistico1);

    printf("Digite o PIB da 1° carta: ");
    scanf("%f", &pib1);

    // cadastrar carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Digite o pais da 2° carta: ");
    scanf("%s", pais2);

    printf("Digite a densidade da 2° carta: ");
    scanf("%f", &densidade2);

    printf("Digite a população da 2° carta: ");
    scanf("%d", &populacao2);

    printf("Digite a area da 2° carta: ");
    scanf("%f", &area2);

    printf("Digite quantidade pontos turisticos da 2° carta: ");
    scanf("%d", &pontoturistico2);

    printf("Digite o PIB da 2° carta: ");
    scanf("%f", &pib2);

    // selecionar atributo 1
    printf("\n*** Defina o 1º atributo a ser comparado ***\n");
    printf("1 - População\n");
    printf("2 - Pontos turisticos\n");
    printf("3 - Área\n");
    printf("4 - PIB\n"); 
    printf("5 - Densidade\n"); 
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &atributo);

    // comparar atributo 1
    switch (atributo) {
        case 1:
            printf("Você escolheu comparar População.\n");
            soma1 += populacao1; soma2 += populacao2;
            break;
        case 2:
            printf("Você escolheu comparar Pontos Turisticos.\n");
            soma1 += pontoturistico1; soma2 += pontoturistico2;
            break;
        case 3:
            printf("Você escolheu comparar Área.\n");
            soma1 += area1; soma2 += area2;
            break;
        case 4:
            printf("Você escolheu comparar PIB.\n");
            soma1 += pib1; soma2 += pib2;
            break;
        case 5:
            printf("Você escolheu comparar Densidade.\n");
            soma1 += densidade1; soma2 += densidade2;
            break;
        default:
            printf("Atributo inválido! Encerrando.\n");
            return 0;
    }

    // selecionar atributo 2 (mesmo menu)
    printf("\n*** Defina o 2º atributo a ser comparado ***\n");
    printf("1 - População\n");
    printf("2 - Pontos turisticos\n");
    printf("3 - Área\n");
    printf("4 - PIB\n"); 
    printf("5 - Densidade\n"); 
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &atributo2);

    if(atributo == atributo2) {
        printf("Atributos iguais não são permitidos! Encerrando.\n");
        return 0;
    }

    // comparar atributo 2
    switch (atributo2) {
        case 1:
            printf("Você escolheu comparar População.\n");
            soma1 += populacao1; soma2 += populacao2;
            break;
        case 2:
            printf("Você escolheu comparar Pontos Turisticos.\n");
            soma1 += pontoturistico1; soma2 += pontoturistico2;
            break;
        case 3:
            printf("Você escolheu comparar Área.\n");
            soma1 += area1; soma2 += area2;
            break;
        case 4:
            printf("Você escolheu comparar PIB.\n");
            soma1 += pib1; soma2 += pib2;
            break;
        case 5:
            printf("Você escolheu comparar Densidade.\n");
            soma1 += densidade1; soma2 += densidade2;
            break;
        default:
            printf("Atributo inválido! Encerrando.\n");
            return 0;
    }


    // resultado final pela soma
printf("\n===== RESULTADO FINAL =====\n");
printf("%s: soma = %.2f\n", pais1, soma1);
printf("%s: soma = %.2f\n", pais2, soma2);

(soma1 > soma2) ? printf("A carta vencedora é: %s\n", pais1) :
(soma2 > soma1) ? printf("A carta vencedora é: %s\n", pais2) :
                  printf("Empate!\n");

   

    return 0;
}
