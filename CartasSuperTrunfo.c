#include <stdio.h>

int main() {

    // Declaração das variáveis
    char estado1[8]; // estado1 e estado2 funcionará de acordo com esse exemplo 'A', 'B', 'C', ...
    char estado2[8]; // assim executando a letra que indica na carta do usuário.

    char codigo1[8]; // A letra do estado seguida de um número de 01 a 08 (ex: A01, B03).
    char codigo2[8]; // representa o codigo da carta que o usuário tem.
    
    char nomeCidade1[30] = "Curitiba"; // Nome da cidade indicada na carta.
    char nomeCidade2[30] = "Fortaleza"; 


    unsigned long int populacao1 = 4121012345, populacao2 = 4121012345;

    float area1 = 43210123.45, area2 = 43210123.45;
    float PIB1 = 3210123.45, PIB2 = 3210123.45;

    int turisticos1, turisticos2;

    float densidade1, PIBperCapita1, superPoder1;
    float densidade2, PIBperCapita2, superPoder2; 

    int resultado, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6;

    printf("Desafio Super Trunfo!\n");
    // Entrada da Carta 1
    printf("\nCarta 1: \n");

    // Na primeira parte do jogo, o primeiro usuário vai preencher os dados da carta, assim iniciando o jogo.
    printf("Estado: ");
    scanf(" %s", estado1); 

    printf("Código: ");
    scanf("%s", codigo1); 

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turisticos1);

    // Cálculos para a Carta 1
    densidade1 = populacao1 / area1;
    PIBperCapita1 = (PIB1 * 1e9) / populacao1; 
    superPoder1 = populacao1 + area1 + PIB1 + PIBperCapita1 + (1.0 / densidade1) + turisticos1;

    // Entrada da Carta 2b
    printf("\nCarta 2: \n");

    // Na segunda parte do jogo, o segundo usuário vai preencher os dados da carta, dando continuação ao jogo.
    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turisticos2);

    // Cálculos para a Carta 2
    densidade2 = populacao2 / area2;
    PIBperCapita2 = (PIB2 * 1e9) / populacao2;
    superPoder2 = populacao2 + area2 + PIB2 + PIBperCapita2 + (1.0 / densidade2) + turisticos2;

    // Com os dados ja preenchidos, aqui sairá as 2 cartas já com os resultados revelados pelos 2 jogadores, sendo assim 1 carta de cada.
    // Impressão das Cartas
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("Cálculo do Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Cálculo do Super Poder: %.2f\n", superPoder2);

    // Comparações
    // Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
    printf("\n--- Comparação das Cartas ---\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("PIB: %d\n", PIB1 > PIB2); 
    printf("Pontos Turisticos: %d\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // Para Densidade Populacional, a carta com o menor valor vence.
    printf("PIB per Capita: %d\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);


    return 0;
}