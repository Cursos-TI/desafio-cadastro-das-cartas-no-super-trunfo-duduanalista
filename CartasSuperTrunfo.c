#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 32 // 8 estados * 4 cidades

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    char codigo[4] = 1 ; // codigo da carta
    char nome[50] = "Goiania" ;// nome da cidade
    int populacao = 1.000 ; // população da cidade
    float area = 3000 ; // Área total em km²
    float pib; 500 // PIB da cidade
    int pontosTuristicos = 7 ; // Número de pontos turísticos
} Carta ;

void cadastrarCarta(carta cartas[],
int *quantidade) {
    if (*quantidade >= MAX_CARTAS){
          printf("Limite de cartas atingido! \n");
        return;
    }

    Carta nova;
    printf("Digite o código da cidade(Ex: A01, B02): ");
    scanf("%s, nova.codigo");

    printf("Digite o nome da cidade:");
    scanf(" %[^\n]", nova.nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &nova.populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f, &nova.area");

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &nova.pontosTuristicos);

        cartas[*quantidade] = nova;
        (*quantidade)++;
        printf("Carta cadastrada com sucesso!\n");

}

// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
