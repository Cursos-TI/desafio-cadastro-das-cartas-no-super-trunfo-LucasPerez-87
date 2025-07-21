#include <stdio.h>

int main() {

    // Carta A01                        
    char estado1[20] = "A";                 // Nome do estado
    char codigo1[4] = "A01";                // Código da carta
    char cidade1[50] = "São Paulo";         // Nome da cidade
    int populacao1 = 12325000;              // Número de habitantes
    float area1 = 1521.11;                  // Área em km²
    float pib1 = 699.28;                    // Produto Interno Bruto
    int pt1 = 50;                           // Número de pontos turísticos
    
    //Carta B02
    char estado2[20] = "B";                 // Nome do estado
    char codigo2[4] = "B02";                // Código da carta
    char cidade2[50] = "Rio de Janeiro";    // Nome da cidade
    int populacao2 = 6748000;               // Número de habitantes
    float area2 = 1200.25;                  // Área em km²
    float pib2 = 300.50;                    // Produto Interno Bruto
    int pt2 = 30;                           // Número de pontos turísticos
 
    int carta; 
    printf("Digite o número da carta (1 ou 2): ");
    scanf("%d", &carta);

    int c1 = (carta == 1);  // Será 1 se escolha == 1, senão 0
    int c2 = (carta == 2);  // Será 1 se escolha == 2, senão 0

    //Caracteristicas da Carta 1
   printf("Estado: %s\n", c1 ? estado1 : estado2);
    printf("Código: %s\n", c1 ? codigo1 : codigo2);
    printf("Cidade: %s\n", c1 ? cidade1 : cidade2);
    printf("População: %d\n", populacao1 * c1 + populacao2 * c2);
    printf("Área: %.2f km²\n", area1 * c1 + area2 * c2);
    printf("PIB: %.2f bilhões de reais\n", pib1 * c1 + pib2 * c2);
    printf("Pontos Turísticos: %d\n", pt1 * c1 + pt2 * c2);

    return 0;

}

