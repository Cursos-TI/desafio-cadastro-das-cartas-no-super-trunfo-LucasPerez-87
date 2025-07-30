#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    printf("Desafio: Nível aventureiro - Jogos Super Trunfo \n");
    printf("\n");

    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      
    // Carta 1 - Super Trunfo
    char estado1[50] = "A";
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pt1 = 50; //pt - Pontos Turísticos
    float densidade1 = populacao1 / area1;

    // Carta 2 - Super Tunfo
    char estado2[50] = "B";
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pt2 = 30; //pt - Pontos Turísticos
    float densidade2 = populacao2 / area2;


     int opcao1;

      printf("*** SUPER TRUNFO - COMPARAÇÃO ***\n");
      printf("1 - População\n");
      printf("2 - Área\n");
      printf("3 - PIB\n");
      printf("4 - Pontos Turísticos\n");
      printf("5 - Densidade Demográfica\n");
      printf("Escolha o atributo para comparar (1 a 5): ");
      scanf("%d", &opcao1);

      printf("\nComparando %s vs %s\n", estado1, estado2);
    
 switch (opcao1) {
        case 1: //Vence a carta com o maior valor no atributo escolhido (População)
            printf("População:\n");
            printf("%s: %d habitantes\n", estado1, populacao1);
            printf("%s: %d habitantes\n", estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", estado1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: //Vence a carta com o maior valor no atributo escolhido (Área)
            printf("Área:\n");
            printf("%s: %.2f km²\n", estado1, area1);
            printf("%s: %.2f km²\n", estado2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", estado1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: //Vence a carta com o maior valor no atributo escolhido (PIB)
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", estado1, pib1);
            printf("%s: %.2f bilhões\n", estado2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", estado1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: //Vence a carta com o maior valor no atributo escolhido (Pontos Turisticos)
            printf("Pontos Turísticos:\n");
            printf("%s: %d pontos\n", estado1, pt1);
            printf("%s: %d pontos\n", estado2, pt2);
            if (pt1 > pt2) {
                printf("Vencedor: %s\n", estado1);
            } else if (pt2 > pt1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: //Vence a carta com o maior valor no atributo escolhido (Densidade Demográfica)
            printf("Densidade Demográfica (habitantes por km²):\n");
            printf("%s: %.4f\n", estado1, densidade1);
            printf("%s: %.4f\n", estado2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", estado1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }
    break;

    case 2:
      printf("Regras do Jogo:\n");
      printf("Regra Geral: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
      // Código para exibir as regras
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }
    
   

    return 0;
}
