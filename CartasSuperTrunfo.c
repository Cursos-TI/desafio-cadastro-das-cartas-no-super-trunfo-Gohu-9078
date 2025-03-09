#include <stdio.h>

int main() {
    char Estado1, ncidade1[4], Nome_da_cidade1[20], Estado2, ncidade2[4], Nome_da_cidade2[20];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    
    printf("Vamos começar a cadastrar as Cartas/Cidades!\n");
    printf("É fácil! Siga os passos a seguir:\n");
    
        printf("Informe o 1º Estado: \n");
        scanf(" %c", &Estado1);
        printf("Agora informe o 2º Estado: \n");
        scanf(" %c", &Estado2);

        printf("Informe a 1ª cidade: \n");
        scanf(" %3s", ncidade1);
        printf("Agora infome a 2ª cidade: \n");
        scanf(" %3s", ncidade2);

        printf("Informe o nome da 1ª Cidade: \n");
        scanf(" %s", Nome_da_cidade1);
        printf("Agora informe o nome da 2ª Cidade: \n");
        scanf(" %s", Nome_da_cidade2);

        printf("Informe a população da 1ª Cidade: \n");
        scanf(" %d", &populacao1);
        printf("Informe a população da 2ª Cidade: \n");
        scanf(" %d", &populacao2);

        printf("Informe a área da 1ª Cidade em Km²: \n");
        scanf(" %f", &area1);
        printf("Informe a área da 2ª Cidade em Km²: \n");
        scanf(" %f", &area2);

        printf("Informe o pib da 1ª cidade: \n");
        scanf(" %f", &pib1);
        printf("Informe o pib da 2ª cidade: \n");
        scanf(" %f", &pib2);

        printf("Informe a qt. de pontos turísticos da 1ª Cidade: \n");
        scanf(" %d", &pontos_turisticos1);
        printf("Informe a qt. de pontos turísticos da 2ª Cidade: \n");
        scanf(" %d", &pontos_turisticos2);

        printf("Aqui está o resultado das cidades cadastradas:\n");

        printf("Estado: %c\n", Estado1);
        printf("Código: %s\n", ncidade1);
        printf("Nome da Cidade: %s\n", Nome_da_cidade1); 
        printf("População: %d\n", populacao1);
        printf("Área de: %.2f Km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

        printf("Estado: %c\n", Estado2);
        printf("Código: %s\n", ncidade2);
        printf("Nome da Cidade: %s\n", Nome_da_cidade2); 
        printf("População: %d\n", populacao2);
        printf("Área de: %.2f Km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
