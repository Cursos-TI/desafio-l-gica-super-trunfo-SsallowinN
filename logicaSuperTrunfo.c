#include <stdio.h>
#include <string.h>

int main() {
    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 1 -----------------------
    char estado1, cod_carta1[4], cd_nome1[50];
    int populacao1, np_turisticos1;
    float area1, PIB1;

    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 2 -----------------------
    char estado2, cod_carta2[4], cd_nome2[50];
    int populacao2, np_turisticos2;
    float area2, PIB2;

    //--------------------- CADASTRO CARTA 1 -----------------------
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (1 letra): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta1);

    printf("Digite o nome do país: ");
    scanf(" %[^\n]", cd_nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &np_turisticos1);

    //--------------------- CADASTRO CARTA 2 -----------------------
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (1 letra): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta2);

    printf("Digite o nome do país: ");
    scanf(" %[^\n]", cd_nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &np_turisticos2);

    //--------------------- CÁLCULOS ADICIONAIS -----------------------
    float dp1 = populacao1 / area1;
    float dp2 = populacao2 / area2;

    //--------------------- MENU INTERATIVO -----------------------
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    //--------------------- COMPARAÇÃO -----------------------
    switch(opcao) {
        case 1: // População
            printf("\nComparando População:\n");
            printf("%s: %d habitantes\n", cd_nome1, populacao1);
            printf("%s: %d habitantes\n", cd_nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cd_nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cd_nome2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", cd_nome1, area1);
            printf("%s: %.2f km²\n", cd_nome2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cd_nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cd_nome2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("\nComparando PIB:\n");
            printf("%s: %.2f\n", cd_nome1, PIB1);
            printf("%s: %.2f\n", cd_nome2, PIB2);
            if (PIB1 > PIB2)
                printf("Vencedor: %s\n", cd_nome1);
            else if (PIB2 > PIB1)
                printf("Vencedor: %s\n", cd_nome2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d\n", cd_nome1, np_turisticos1);
            printf("%s: %d\n", cd_nome2, np_turisticos2);
            if (np_turisticos1 > np_turisticos2)
                printf("Vencedor: %s\n", cd_nome1);
            else if (np_turisticos2 > np_turisticos1)
                printf("Vencedor: %s\n", cd_nome2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("\nComparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", cd_nome1, dp1);
            printf("%s: %.2f hab/km²\n", cd_nome2, dp2);
            if (dp1 < dp2)
                printf("Vencedor: %s\n", cd_nome1);
            else if (dp2 < dp1)
                printf("Vencedor: %s\n", cd_nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
    }

    return 0;
}