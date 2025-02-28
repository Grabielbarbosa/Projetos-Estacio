#include <stdio.h>
#include <string.h>
int main () {

    char estado[2];
    char codigo[4];
    char codigo_da_carta[3]; 
    char municipio[20];
    int populacao;
    int pontos_turisticos;
    float area_territorial, pib;

   

//ENTRADA DE DADOS
printf("CARTA 01\n"); 


//CAPTURA DO ESTADO 
printf("Digite a Inicial do seu Estado: ");
fgets(estado, 2, stdin);
estado[strcspn(estado, "\n")] = '\0';

//CAPTURA DO CODIGO
printf("Digite um Codigo: ");
scanf("%s", &codigo);

//CAPTURA DO MUNICIPIO
printf("Informe o nome do Município: \n");
scanf(" %[^\n]", &municipio);

//CAPTURA DA POPULAÇÃO
printf("Qual o número de Habitantes? \n");
scanf("%d", &populacao);

//CAPTURA DA ÁREA EM KM²
printf("Informe a área em km²: \n");
scanf("%e", &area_territorial);

//CAPTURA DO PIB
printf("Informe o PIB (Produto Interno Bruto):\n");
scanf("%f", &pib);

//CAPTURA DA QUANTIDADE DE PONTOS TURISTICOS
printf("Quantos pontos turísticos há nessa cidade ? \n");
scanf("%i", &pontos_turisticos);

//CAPTURAR E UNIR INICIAL DO ESTADO MAIS O CODIGO DE CADA MUNICIPIO
strcpy(codigo_da_carta,estado);
strcat(codigo_da_carta,"");
strcat(codigo_da_carta,codigo);

// SAÍDA DE DADOS
printf("\n Carta 1\n");
printf("Estado: %s\n", estado);
printf("Código da Carta: %s\n",codigo_da_carta);
printf("Nome da Cidade: %s\n",municipio);
printf("População: %.3d Pessoas\n",populacao);
printf("Área: %.3f km²\n", area_territorial);
printf("PIB: R$ %.2f bilhões de reais\n", pib);
printf("Pontos Turísticos: %i\n", pontos_turisticos);

return 0;
}