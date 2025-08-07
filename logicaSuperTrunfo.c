#include <stdio.h>
#include <string.h>

int main() {
    // ------------------- CARTA 1 -------------------
    char estado1, cod_carta1[4], nome1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // ------------------- CARTA 2 -------------------
    char estado2, cod_carta2[4], nome2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // ------------------- CADASTRO -------------------
    printf("Cadastro da Carta 1:\n");
    printf("Estado (1 letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta(ex: A01): ");
    scanf("%s", cod_carta1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (1 letra de A a H):");
    scanf(" %c", &estado2);
    printf("Código da carta(ex: A01):");
    scanf("%s", cod_carta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // ------------------- CÁLCULO DA DENSIDADE -------------------
    float dens1 = populacao1 / area1;
    float dens2 = populacao2 / area2;

    // ------------------- ESCOLHA DO PRIMEIRO ATRIBUTO -------------------
    int op1, op2;
    printf("\nEscolha o 1º atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\nOpção: ");
    scanf("%d", &op1);

    // ------------------- ESCOLHA DO SEGUNDO ATRIBUTO (DINÂMICO) -------------------
    printf("\nEscolha o 2º atributo para comparar:\n");
    if (op1 != 1) printf("1 - População\n");
    if (op1 != 2) printf("2 - Área\n");
    if (op1 != 3) printf("3 - PIB\n");
    if (op1 != 4) printf("4 - Pontos Turísticos\n");
    if (op1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &op2);

    // ------------------- COMPARAÇÃO -------------------
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;

    // Primeiro atributo
    switch (op1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1;      valor2_attr1 = area2;      break;
        case 3: valor1_attr1 = pib1;       valor2_attr1 = pib2;       break;
        case 4: valor1_attr1 = pontos1;    valor2_attr1 = pontos2;    break;
        case 5: valor1_attr1 = dens1;      valor2_attr1 = dens2;      break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Segundo atributo
    switch (op2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1;      valor2_attr2 = area2;      break;
        case 3: valor1_attr2 = pib1;       valor2_attr2 = pib2;       break;
        case 4: valor1_attr2 = pontos1;    valor2_attr2 = pontos2;    break;
        case 5: valor1_attr2 = dens1;      valor2_attr2 = dens2;      break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ------------------- REGRAS DE COMPARAÇÃO -------------------
    float pontos_c1 = 0, pontos_c2 = 0;

    // Primeiro atributo
    if (op1 == 5) { // densidade (menor vence)
        (valor1_attr1 < valor2_attr1) ? (pontos_c1++) : (valor2_attr1 < valor1_attr1 ? pontos_c2++ : 0);
    } else {
        (valor1_attr1 > valor2_attr1) ? (pontos_c1++) : (valor2_attr1 > valor1_attr1 ? pontos_c2++ : 0);
    }

    // Segundo atributo
    if (op2 == 5) { // densidade (menor vence)
        (valor1_attr2 < valor2_attr2) ? (pontos_c1++) : (valor2_attr2 < valor1_attr2 ? pontos_c2++ : 0);
    } else {
        (valor1_attr2 > valor2_attr2) ? (pontos_c1++) : (valor2_attr2 > valor1_attr2 ? pontos_c2++ : 0);
    }

    // ------------------- RESULTADO -------------------
    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s - %g pontos\n", nome1, pontos_c1);
    printf("%s - %g pontos\n", nome2, pontos_c2);

    if (pontos_c1 > pontos_c2) {
        printf("Vencedor: %s\n", nome1);
    } else if (pontos_c2 > pontos_c1) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}