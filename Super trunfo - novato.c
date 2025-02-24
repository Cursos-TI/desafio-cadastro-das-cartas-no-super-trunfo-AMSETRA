#include <stdio.h> //biblioteca mecanismos operam em função da entrada e da saída padrão
#include <stdlib.h> //biblioteca funções responsáveis pela manipulação da alocação de memória
#include <string.h> //biblioteca contidos protótipos utilizados para a manipulação de strings

int main() {
    char pais[50], cidade[50];
    double pib, area;
    int populacao, pturisticos;

    printf("Desafio Super Trunfo - Novato \n")
    printf("Novo Commit \n")
    printf("\n \n")

    //Solicitar entradas
    printf("Entre com o nome do pais: \n");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = '\0'; //remove nova linha

    printf("Entre com a cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; //remove nova linha

    printf("Entre com o PIB: \n");
    scanf("%lf", &pib);
    getchar(); //limpar buffer do \n deixado pelo scanf

    printf("Entre com pontos turisticos: \n");
    scanf("%d", &pturisticos);

    printf("Entre com a area (em km quadrados): \n");
    scanf("%lf", &area);

    printf("Entre com a populacao: \n");
    scanf("%d", &populacao);

    printf ("\n \n");
    printf("Foram gravadas as informacoes na carta: \n");
    printf("Pais: %s \n", pais);
    printf("Cidade: %s \n", cidade);
    printf("PIB: %f \n", pib);
    printf("Area: %f \n", area);
    printf("Populacao: %d \n", populacao);
    printf("Pontos Turisticos: %d \n", pturisticos);
}