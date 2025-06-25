#include <stdio.h>

int main(){
    char estado1[10], estado2[10], cod1[10], cod2[10], cidade1[20], cidade2[20];
    int populacao1, populacao2, turismo1, turismo2, compPop, compArea, compPIB, compTurism, compDens, compPIBPC, compSuper;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibPerC1, pibPerC2, Super1, Super2;

    printf("Boas vindas ao cadastro de cartas do jogo Super Trunfo: Cidades!\n"); //saudação inicial para ficar esteticamente mais agradavel e intuitivo
    printf("Informações da primeira carta:\n");

    printf("Estado da carta (A ao H): "); //esses espaços antes do %s é pra evitar buffering na hora dos prints.
    scanf(" %s", &estado1);

    printf("Código da carta: ");  //não sei se seria mais adequado explicar aqui a respeito do padrão de codigo "a01","a02" etc
    scanf(" %s", &cod1);

    printf("Nome da cidade (letra apenas): "); // há a forma de usar o fgets para conseguir processar strings com espaços, professor disse que poderia dispensar por ora
    scanf(" %s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("Dados cadastrados, insira agora os dados da segunda carta:\n"); //faciltiar o entendimento de quando finaliza o cadastro da primeira carta e o cadastro da segunda é iniciado

    printf("Estado da carta (A ao H): ");
    scanf(" %s", &estado2);

    printf("Código da carta: ");
    scanf(" %s", &cod2);

    printf("Nome da cidade (letra apenas): ");
    scanf(" %s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);

    densidade1 = populacao1 / area1; 
    densidade2 = populacao2 / area2;

    pibPerC1 = pib1 * 1000000000 / populacao1;
    pibPerC2 = pib2 * 1000000000/ populacao2;
    
    Super1 = (float) populacao1 + area1 + pib1 + (float) turismo1 + (1/densidade1) + pibPerC1;
    Super2 = (float) populacao2 + area2 + pib2 + (float) turismo2 + (1/densidade2) + pibPerC2;

    compArea = area1 > area2;
    compDens = densidade1 < densidade2;
    compPIB = pib1 > pib2;
    compPIBPC = pibPerC1 > pibPerC2;
    compPop = populacao1 > populacao2;
    compTurism = turismo1 > turismo2;
    compSuper = Super1 > Super2;

    printf("\n Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerC1);

    printf("\n Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerC2);


    printf("\n Comparação de cartas: \n");
    printf("População: Carta 1 venceu. Resultado: %d\n)", compPop);
    printf("Área: Carta 1 venceu. Resultado: %d\n", compArea);
    printf("PIB: Carta 1 venceu. Resultado: %d\n", compPIB);
    printf("Pontos turísticos: Carta 1 venceu. Resultado: %d\n", compTurism);
    printf("Densidade populacional: Carta 1 venceu. Resultado: %d\n", compDens);
    printf("PIB per Capita: Carta 1 venceu. Resultado: %d\n", compPIBPC);
    printf("Super Poder: Carta 1 venceu. Resultado: %d\n", compSuper);

    return 0;
}