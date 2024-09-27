#include <stdio.h>

int main() {
    // Definindo variáveis para os atributos da cidade
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Captura dos dados da cidade
    printf("Cadastro da Cidade\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome); // Lê string com espaços
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados da Cidade
    printf("\nCidade Cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
