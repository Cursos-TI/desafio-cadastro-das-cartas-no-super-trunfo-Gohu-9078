#include <stdio.h>

int main() {
    char Estado, ncidade[4], Nome_da_cidade[20];
    int populacao, pontos_turisticos;
    float area, pib;

        printf("Informe o Estado: \n");
        scanf(" %c", &Estado);

        printf("Informe o número da cidade: \n");
        scanf(" %3s", ncidade);

        printf("Informe o nome da Cidade: \n");
        scanf(" %s", Nome_da_cidade);

        printf("Informe a população: \n");
        scanf(" %d", &populacao);

        printf("Informe a área da cidade em Km²: \n");
        scanf(" %f", &area);

        printf("Informe o pib da cidade: \n");
        scanf(" %f", &pib);

        printf("Informe a qt de pontos turísticos: \n");
        scanf(" %d", &pontos_turisticos);

        printf("Estado: %c\n", Estado);
        printf("Código: %s\n", ncidade);
        printf("Nome da Cidade: %s\n", Nome_da_cidade); 
        printf("População: %d\n", populacao);
        printf("Área de: %.2f Km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
