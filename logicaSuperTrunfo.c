#include <stdio.h>

int main() {
    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 1 -----------------------
    char estado1, cod_carta1[10], cd_nome1[50];
    unsigned long int populacao1;
    int np_turisticos1;
    double area1, PIB1;

    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 2 -----------------------
    char estado2, cod_carta2[10], cd_nome2[50];
    unsigned long int populacao2;
    int np_turisticos2;
    double area2, PIB2;

    //---------------------  INSERINDO OS DADOS DA CARTA 1 --------------------------
    printf("Escolha uma letra que represente o estado dessa cidade (A a H): ");
    scanf(" %c", &estado1);

    printf("Escolha o codigo dessa carta (ex:A01): ");
    scanf(" %9s", cod_carta1);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", cd_nome1);

    printf("Escolha o numero de habitantes: ");
    scanf(" %lu", &populacao1);

    printf("Escolha o numero de pontos turisticos: ");
    scanf("%d", &np_turisticos1);

    printf("Escolha a area em Km²: ");
    scanf("%lf", &area1);
    if (area1 == 0) {
        printf("Erro: Area nao pode ser zero.\n");
        return 1;
    }

    printf("Escolha o PIB: ");
    scanf("%lf", &PIB1);
    if (populacao1 == 0) {
        printf("Erro: Populacao nao pode ser zero.\n");
        return 1;
    }

    printf("\nPERFEITO! AGORA VAMOS PARA SUA SEGUNDA CARTA!!\n\n");

    //---------------------  INSERINDO OS DADOS DA CARTA 2 -----------------------
    printf("Escolha uma letra que represente o estado dessa cidade (A a H): ");
    scanf(" %c", &estado2);

    printf("Escolha o codigo dessa carta (ex:A01): ");
    scanf(" %9s", cod_carta2);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", cd_nome2);

    printf("Escolha o numero de habitantes: ");
    scanf(" %lu", &populacao2);

    printf("Escolha o numero de pontos turisticos: ");
    scanf("%d", &np_turisticos2);

    printf("Escolha a area em Km²: ");
    scanf("%lf", &area2);
    if (area2 == 0) {
        printf("Erro: Area nao pode ser zero.\n");
        return 1;
    }

    printf("Escolha o PIB: ");
    scanf("%lf", &PIB2);
    if (populacao2 == 0) {
        printf("Erro: Populacao nao pode ser zero.\n");
        return 1;
    }

    //---------------------  CALCULANDO ATRIBUTOS DERIVADOS -----------------------
    double densidade1 = populacao1 / area1;
    double pib_pc1 = PIB1 / populacao1;

    double densidade2 = populacao2 / area2;
    double pib_pc2 = PIB2 / populacao2;

    //---------------------  ESCOLHA DO ATRIBUTO PARA COMPARAR ---------------------
    // Aqui você define qual atributo vai ser comparado. Vou usar POPULAÇÃO como exemplo.
    // Para mudar, altere "atributo" e o bloco if/else.

    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");

    printf("Carta 1 - %s (%c%c%c): %lu habitantes\n", cd_nome1, cod_carta1[0], cod_carta1[1], cod_carta1[2], populacao1);
    printf("Carta 2 - %s (%c%c%c): %lu habitantes\n", cd_nome2, cod_carta2[0], cod_carta2[1], cod_carta2[2], populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cd_nome1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cd_nome2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}