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
    printf("** Impressão do dado das cartas! **\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1); //%.2f Imprime o número limitando em duas casas após a vírgula
    printf("PIB: %.2f de reais\n", pib1);
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
    printf("PIB: %.2f de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    //Menu interativo utiizando switch, permite ao usuário escolher um atributo para comparação
    int escolhaJogador;

    printf("*** Escolha uma opção para comparação de um atributo ***\n");
    printf("1. Nome das cidades (Somente informação)\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
      printf("\n");
      printf("Nome das cidades (Somente informação)\n");
      break;
    case 2:
      printf("\n");
      printf("Cidade Carta 1: %s || Cidade Carta 2: %s\n", cidade1, cidade2);
      printf("Você escolheu o atributo: População\n");
      printf("%s: %lu || %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
      break;
    case 3:
      printf("\n");
      printf("Cidade Carta 1: %s || Cidade Carta 2: %s\n", cidade1, cidade2);
      printf("Você escolheu o atributo: Área\n");
      printf("%s: %.2f km² || %s: %.2f km²\n", cidade1, area1, cidade2, area2);
      break;
    case 4:
      printf("\n");
      printf("Cidade Carta 1: %s || Cidade Carta 2: %s\n", cidade1, cidade2);
      printf("Você escolheu o atributo: PIB\n");
      printf("%s: %.2f de reais || %s: %.2f de reais\n", cidade1, pib1, cidade2, pib2);
      break;
    case 5:
      printf("\n");
      printf("Cidade Carta 1: %s || Cidade Carta 2: %s\n", cidade1, cidade2);
      printf("Você escolheu o atributo: Número de pontos turísticos\n");
      printf("%s: %d || %s: %d\n", cidade1, pontos1, cidade2, pontos2);
      break;
    case 6:
      printf("\n");
      printf("Cidade Carta 1: %s || Cidade Carta 2: %s\n", cidade1, cidade2);
      printf("Você escolheu o atributo: Densidade demográfica\n");
      printf("%s: %.2f hab/km² || %s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
      break;
    default:
      printf("\n");
      printf("Opção inválida!\n");
      break;
    }

    // Comparação de Cartas utilizando estruturas de decisão if, if-else
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    if (escolhaJogador == 1)
    {
        printf("O nome das cidades são: %s e %s\n", cidade1, cidade2);
    } else if (escolhaJogador == 2) {
        if (populacao1 > populacao2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade1);
        } else if (populacao1 < populacao2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade2);
        } else {
            printf("### Houve um empate! ###\n");
        }
    } else if (escolhaJogador == 3) {
        if (area1 > area2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade1);
        } else if (area1 < area2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade2);
        } else {
            printf("### Houve um empate! ###\n");
        }
    } else if (escolhaJogador == 4) {
        if (pib1 > pib2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade1);
        } else if (pib1 < pib2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade2);
        } else {
            printf("### Houve um empate! ###\n");
        }
    } else if (escolhaJogador == 5) {
        if (pontos1 > pontos2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade1);
        } else if (pontos1 < pontos2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade2);
        } else {
            printf("### Houve um empate! ###\n");
        }
    } else {
        if (densidade1 < densidade2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade1);
        } else if (densidade1 > densidade2) {
            printf("### A cidade vencedora é: %s! ###\n", cidade2);
        } else {
            printf("### Houve um empate! ###\n");
        }
    }
    return 0;
}
