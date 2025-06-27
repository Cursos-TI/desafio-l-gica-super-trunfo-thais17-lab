#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


   // Atributos da primeira carta
    char estado_1[2];
    char cod_carta_1[3];
    char cidade_1[15];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_t_1;
    float densidade_1;
    float percapita_1;
    float poder_1;

    // Atributos da segunda carta
    char estado_2[2];
    char cod_carta_2[3];
    char cidade_2[15];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_t_2;
    float densidade_2;
    float percapita_2;
    float poder_2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)


    // Recolhendo os dados da primeira carta
    printf("Primeira carta:\n_________________\nDigite o código do estado: ");
    scanf("%s", estado_1);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_1);

    printf("Informe o número de habitantes: ");
    scanf("%lu", &populacao_1);

    printf("Informe a área: ");
    scanf("%f", &area_1);

    printf("Informe o PIB: ");
    scanf("%f", &pib_1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos_t_1);

    // Cálculo da densidade populacional e da renda per capita da primeira carta
    densidade_1 = populacao_1 / area_1;
    percapita_1 = pib_1 / populacao_1;

    // Cálculo do "Super Poder" da primeira carta
    poder_1 = (float) populacao_1 + area_1 + pib_1 + (float) num_pontos_t_1 + percapita_1 - densidade_1;

    // Recolhendo os dados da segunda carta
    printf("\nSegunda carta:\n_________________\nDigite o código do estado: ");
    scanf("%s", estado_2);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_2);

    printf("Informe o número de habitantes: ");
    scanf("%lu", &populacao_2);

    printf("Informe a área: ");
    scanf("%f", &area_2);

    printf("Informe o PIB: ");
    scanf("%f", &pib_2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos_t_2);

    // Cálculo da densidade populacional e da renda per capita da segunda carta
    densidade_2 = populacao_2 / area_2;
    percapita_2 = pib_2 / populacao_2;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

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


    // Comparando os atributos numéricos e exibindo o resultado da comparação entre as cartas
    printf("\n\n\nComparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): %.2f\nCarta 2 - %s (%s): %.2f\n", cidade_1, estado_1, percapita_1, cidade_2, estado_2, percapita_2);

    if (percapita_1 > percapita_2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", cidade_2);
    }

    printf("\n\n");
    
    return 0;
}
