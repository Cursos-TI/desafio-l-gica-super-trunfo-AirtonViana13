#include <stdio.h>

// Estrutura para guardar os dados da cidade
struct Carta {
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos;
};

int main() {
    struct Carta carta1, carta2;
    int escolha;

    // Cadastro da primeira carta
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos);

    // Cadastro da segunda carta
    printf("\nDigite o nome da cidade 2: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos);

    // Menu de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    scanf("%d", &escolha);

    // Comparação simples
    printf("\nResultado:\n");
    if (escolha == 1) {
        if (carta1.populacao > carta2.populacao)
            printf("%s venceu (maior população)\n", carta1.cidade);
        else if (carta2.populacao > carta1.populacao)
            printf("%s venceu (maior população)\n", carta2.cidade);
        else
            printf("Empate na população!\n");
    } else if (escolha == 2) {
        if (carta1.area > carta2.area)
            printf("%s venceu (maior área)\n", carta1.cidade);
        else if (carta2.area > carta1.area)
            printf("%s venceu (maior área)\n", carta2.cidade);
        else
            printf("Empate na área!\n");
    } else if (escolha == 3) {
        if (carta1.pib > carta2.pib)
            printf("%s venceu (maior PIB)\n", carta1.cidade);
        else if (carta2.pib > carta1.pib)
            printf("%s venceu (maior PIB)\n", carta2.cidade);
        else
            printf("Empate no PIB!\n");
    } else if (escolha == 4) {
        if (carta1.pontos > carta2.pontos)
            printf("%s venceu (mais pontos turísticos)\n", carta1.cidade);
        else if (carta2.pontos > carta1.pontos)
            printf("%s venceu (mais pontos turísticos)\n", carta2.cidade);
        else
            printf("Empate nos pontos turísticos!\n");
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}