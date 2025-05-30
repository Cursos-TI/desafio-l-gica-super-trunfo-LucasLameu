#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){
   
    //Váriaveis
    int pontosturisticos, pontosturisticos2, populacao, populacao2;
    float pib, pib2, area, area2;
    char estado, estado2;
    char nome[30], nome2[30], codigocarta[5], codigocarta2[5];
    double densidadepopulacional, densidadepopulacional2, pibpercapita, pibpercapita2;
    
    // Cadastro das Cartas:
    //CARTA 1
    printf("Digite o nome da cidade 1: \n"); //comandos usados para puxar os dados do usuário
    scanf("%s", nome);
    
    printf("Digite o estado da carta 1: \n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigocarta);

    printf("Digite a área da cidade 1: \n");
    scanf(" %f", &area);
    
    printf("Digite a população da cidade 1: \n");
    scanf(" %d", &populacao);

    printf("Digite o PIB da cidade 1: \n");
    scanf(" %f", &pib);
    
    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf(" %d", &pontosturisticos);
      printf("\n");
   
      //CARTA 2
      printf("Digite o nome da cidade 2: \n");
    scanf("%s", nome2);
    
    printf("Digite o estado da carta 2: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("Digite a área da cidade 2: \n");
    scanf(" %f", &area2);
    
    printf("Digite a população da cidade 2: \n");
    scanf(" %d", &populacao2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf(" %d", &pontosturisticos2);
       printf("\n");
    
       //Calculando a densidade Populacional e o pib per Capita das cidades
    densidadepopulacional = pib / area;
    densidadepopulacional2 = pib2 / area2;
    pibpercapita = pib / populacao;
    pibpercapita2 = pib2 / populacao2;

    //EXIBINDO OS DADOS DAS CIDADES
    printf("Carta 1:\n");
        printf("\n"); //comando para pular linha
    printf("Nome da Cidade: %s\n", nome);  // Fortaleza
    printf("Estado: %c\n", estado);  // A
    printf("Código: %s\n", codigocarta);  // A01
    printf("Área Km²: %.2f Km²\n", area);  // 313.8km²
    printf("População: %d\n", populacao);  // 2.428.708
    printf("PIB: %.3f milhões de reais\n", pib);  // 73.4
    printf("Número de pontos Turísticos: %d\n", pontosturisticos);  // 21
    printf("Densidade Populacional: %f\n", densidadepopulacional);
    printf("Pib per capita: %f\n", pibpercapita);
       printf("\n");
       
       // Dados da Carta 2
    printf("Carta 2:\n");
        printf("\n");
    printf("Nome da Cidade: %s\n", nome2);  //Cuiabá
    printf("Estado: %c\n", estado2);  //B
    printf("Código: %s\n", codigocarta2);  //B02
    printf("Área Km²: %.3f Km²\n", area2);  //3.291
    printf("População: %d\n", populacao2);  //606.050
    printf("PIB: %.3f milhões de reais\n", pib2);  //29.7
    printf("Número de pontos Turísticos: %d\n", pontosturisticos2);  //25
    printf("Densidade Populacional: %f\n", densidadepopulacional2);
    printf("Pib per capita: %f\n", pibpercapita2);
       printf("\n\n");
    
       // Comparação de população das cidades:

    if (populacao > populacao2) { //comando para fazer um comparativo entre as populações da cidade 1 e da cidade 2
      printf("Fortaleza tem a maior população e é a cidade vencedora !!! \n");
    } else {
      printf("Cuiabá tem a maior população e é a cidade vencedora !!!\n");
    }

    return 0;
}
