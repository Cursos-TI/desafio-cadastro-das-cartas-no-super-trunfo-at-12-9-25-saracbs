#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main (){
    char estado1[3], estado2[3];
    char cod_carta1[4], cod_carta2[4];
    char cidade1[40], cidade2[40];
    int popul_cidade1, popul_cidade2, p_turistico1, p_turistico2;
    float area1, area2, PIB1, PIB2;

    // * BOAS VINDAS E DADOS DA PRIMEIRA CARTA A SER CADASTRADA *

    printf ("--- Bem-vindo ao jogo Super Trunfo - Países! ---\n");
    printf ("\nVamos começar cadastrando as cartas.\n");
    printf ("Primeiramente, insira abaixo os dados da primeira carta:\n");
    printf ("\n--- Carta 1 ---\n");
    printf ("Código da carta (ex: 5D): \n");
    scanf ("%s", cod_carta1);
    printf ("Estado (ex: SP): \n");
    scanf ("%s", estado1);
    printf ("Nome da Cidade (ex: São Paulo): \n");
    scanf ("%s", cidade1);
    printf ("População da cidade (ex: 123456): \n");
    scanf ("%d", &popul_cidade1);
    printf ("Área da cidade em km² (ex: 1234.56): \n");
    scanf ("%f", &area1);
    printf ("PIB da cidade em R$ (ex: 123456.78): \n");
    scanf ("%f", &PIB1);
    printf ("Número de pontos turísticos da cidade (ex: 12): \n");
    scanf ("%d", &p_turistico1);

    // * DADOS DA SEGUNDA CARTA A SER CADASTRADA *

    printf ("\nAgora insira os dados da segunda carta:\n");
    printf ("\n--- Carta 2 ---\n");
    printf ("Código da carta (ex: 5D): \n");
    scanf ("%s", cod_carta2);
    printf ("Estado (ex: SP): \n");
    scanf ("%s", estado2);
    printf ("Nome da Cidade (ex: São Paulo): \n");
    scanf ("%s", cidade2);
    printf ("População da cidade (ex: 123456): \n");
    scanf ("%d", &popul_cidade2);
    printf ("Área da cidade em km² (ex: 1234.56): \n");
    scanf ("%f", &area2);
    printf ("PIB da cidade em R$ (ex: 123456.78): \n");
    scanf ("%f", &PIB2);
    printf ("Número de pontos turísticos da cidade (ex: 12): \n");
    scanf ("%d", &p_turistico2);

    // * EXIBIÇÃO DOS DADOS DAS CARTAS *

    printf ("\n --- Cartas Cadastradas ---\n");
    printf ("\n--- Dados da Carta 1 ---\n");
    printf ("Código da carta: %s\n", cod_carta1);
    printf ("Estado: %s\n", estado1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d habitantes\n", popul_cidade1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: R$ %.2f\n", PIB1);
    printf ("Número de pontos turísticos: %d\n", p_turistico1);

    printf ("\n--- Dados da Carta 2 ---\n");
    printf ("Código da carta: %s\n", cod_carta2);
    printf ("Estado: %s\n", estado2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d habitantes\n", popul_cidade2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: R$ %.2f\n", PIB2);
    printf ("Número de pontos turísticos: %d\n", p_turistico2);

    return 0;
}
