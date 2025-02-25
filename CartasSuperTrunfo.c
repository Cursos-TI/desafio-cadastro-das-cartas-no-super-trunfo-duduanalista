#include <stdio.h>
#include <string.h>

#define MAX_NOME_CIDADE 100

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;             // Estado (letra de A a H)
    char codigoCarta[5];     // Código da carta (ex: A01, B03)
    char nomeCidade[MAX_NOME_CIDADE];  // Nome da cidade
    int populacao;           // População da cidade
    float area;              // Área em km²
    float pib;               // PIB da cidade
    int pontosTuristicos;    // Número de pontos turísticos
} CartaSuperTrunfo;

void obterDados(CartaSuperTrunfo* carta) {
    printf("Digite os dados para a carta:\n");

    // Leitura do estado (letra de A a H)
    printf("Estado (A a H): ");
    scanf(" %c", &carta->estado);

    // Leitura do código da carta (ex: A01, B03)
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigoCarta);

    // Leitura do nome da cidade
    printf("Nome da cidade: ");
    getchar();  // Para consumir o caractere de nova linha remanescente
    fgets(carta->nomeCidade, MAX_NOME_CIDADE, stdin);
    carta->nomeCidade[strcspn(carta->nomeCidade, "\n")] = '\0';  // Remove o '\n' do final

    // Leitura da população
    printf("População: ");
    scanf("%d", &carta->populacao);

    // Leitura da área
    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    // Leitura do PIB
    printf("PIB: ");
    scanf("%f", &carta->pib);

    // Leitura do número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void imprimirDados(CartaSuperTrunfo carta) {
    printf("\nDados da Carta:\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigoCarta);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    CartaSuperTrunfo carta1, carta2;

    // Obter dados das duas cartas
    printf("Inserir dados da primeira carta:\n");
    obterDados(&carta1);

    printf("\nInserir dados da segunda carta:\n");
    obterDados(&carta2);

    // Imprimir os dados das duas cartas
    printf("\n--- Dados da Primeira Carta ---\n");
    imprimirDados(carta1);

    printf("\n--- Dados da Segunda Carta ---\n");
    imprimirDados(carta2);

    return 0;
}
