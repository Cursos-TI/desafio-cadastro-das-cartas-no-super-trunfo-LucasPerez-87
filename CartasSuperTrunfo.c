#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    printf("Desafio: Nível Mestre - Jogos Super Trunfo \n");
    printf("\n");

     // Dados das cartas
    char estado1[] = "A", cidade1[] = "São Paulo";
    int populacao1 = 12325000, pt1 = 50;
    float area1 = 1521.11, pib1 = 699.28, densidade1 = populacao1 / area1;

    char estado2[] = "B", cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000, pt2 = 30;
    float area2 = 1200.25, pib2 = 300.50, densidade2 = populacao2 / area2;

    int atributo1 = 0, atributo2 = 0;

    // Menu de escolha do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    scanf("%d", &atributo1);

    // Menu de escolha do segundo atributo (sem repetir o primeiro)
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1. Populacao\n"); break;
                case 2: printf("2. Area\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turisticos\n"); break;
                case 5: printf("5. Densidade Demografica\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    char nome_atributo1[30], nome_atributo2[30];

    // Associar valores e nomes dos atributos escolhidos
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; sprintf(nome_atributo1, "Populacao"); break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; sprintf(nome_atributo1, "Area"); break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; sprintf(nome_atributo1, "PIB"); break;
        case 4: valor1_c1 = pt1; valor1_c2 = pt2; sprintf(nome_atributo1, "Pontos Turisticos"); break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; sprintf(nome_atributo1, "Densidade"); break;
        default: printf("Atributo invalido!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; sprintf(nome_atributo2, "Populacao"); break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; sprintf(nome_atributo2, "Area"); break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; sprintf(nome_atributo2, "PIB"); break;
        case 4: valor2_c1 = pt1; valor2_c2 = pt2; sprintf(nome_atributo2, "Pontos Turisticos"); break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; sprintf(nome_atributo2, "Densidade"); break;
        default: printf("Atributo invalido!\n"); return 1;
    }

    // Exibir comparacoes
    printf("\nComparando %s e %s\n", cidade1, cidade2);
    printf("Atributo 1 - %s: %s = %.2f | %s = %.2f\n", nome_atributo1, estado1, valor1_c1, estado2, valor1_c2);
    printf("Atributo 2 - %s: %s = %.2f | %s = %.2f\n", nome_atributo2, estado1, valor2_c1, estado2, valor2_c2);

    // Regras: densidade -> menor vence, outros -> maior vence
    int ponto_c1 = 0, ponto_c2 = 0;
    ponto_c1 += (atributo1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    ponto_c2 += (atributo1 == 5) ? (valor1_c2 < valor1_c1) : (valor1_c2 > valor1_c1);
    ponto_c1 += (atributo2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    ponto_c2 += (atributo2 == 5) ? (valor2_c2 < valor2_c1) : (valor2_c2 > valor2_c1);

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n%s = %.2f | %s = %.2f\n", estado1, soma1, estado2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: %s\n", estado1);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s\n", estado2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}