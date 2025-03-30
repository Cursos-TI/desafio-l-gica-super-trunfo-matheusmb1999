#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2; //Uma letra de 'A' a 'H' representando um dos oito estados
    char codigo1[50], codigo2[50]; //A letra do estado seguida de um número de 01 a 04
    char cidade1[50], cidade2[50]; //Nome da cidade (sem acentos)
    unsigned long int populacao1, populacao2; //População sem casas decimais
    float area1, area2; //Área em km²
    float pib1, pib2; //PIB (bilhões)
    int pontos1, pontos2; //Número de pontos turísticos
    float densidade1, densidade2; //Densidade Populacional
    float pibper1, pibper2; //PIB per capita
    float superPoder1, superPoder2; //Soma de popul, área, PIB, pontos, PIB P.C e o inverso da dens. popul.
    int resultado; //Comparação das cartas
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    //Primeiro será solicitado que seja preenchido os dados da primeira carta, o retorno das duas cartas será no final
    printf("Carta A01: \n");
    printf("Digite a letra do estado (De A a H): ");
    scanf(" %c", &estado1); //É preciso colocar um espaço antes do %c, apenas para ler caractere

    printf("Digite o Código da carta (Letra + Número de 01 a 04): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("\n");

    //Preenchimento dos dados da segunda carta
    printf("Carta B01: \n");
    printf("Digite a letra do estado (De A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta (Letra + Número de 01 a 04): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    printf("\n");

    //Cálculo das variáveis Densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    pibper1 = (float)pib1 / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    //Cálculo Super Poder
    superPoder1 = (float)(populacao1 + area1 + pib1 + pontos1 + pibper1) - densidade1;
    superPoder2 = (float)(populacao2 + area2 + pib2 + pontos2 + pibper2) - densidade2;

    //Abaixo se inicia a impressão das duas cartas
    printf("------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1); //%.2f Imprime o número limitando em duas casas após a vírgula
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    //Impressão do atributo a ser comparado (População) e Comparação utlizando if-else
    printf("----------------------------\n");
    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta 1: %s: %lu\n", cidade1, populacao1);
    printf("Carta 2: %s: %lu\n", cidade2, populacao2);

    if(populacao1 > populacao2) {
        printf("Resultado: A Carta 1 (%s) venceu\n", cidade1);
    } else {
        printf("Resultado: A Carta 2 (%s) venceu\n", cidade2);
    }
    
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
