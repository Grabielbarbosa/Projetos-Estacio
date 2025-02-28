#include <stdio.h>
#include <string.h>
int main () {

    char estado[2];
    char codigo[4];
    char codigo_da_carta[20]; 
    char municipio[20];
    int populacao;
    int pontos_turisticos;
    float area_territorial, pib;
    
    char estado_1[6];
    char codigo1[8];
    char codigo_da_carta1[2]; 
    char municipio1[20];
    int populacao1;
    int pontos_turisticos1;
    float area_territorial1, pib1;



//ENTRADA DE DADOS
printf("CARTA 01\n"); 


//CAPTURA DO ESTADO 
printf("Digite a Inicial do seu Estado:\n");
scanf("%s", estado);



//CAPTURA DO CODIGO
printf("Digite um Código: \n");
scanf("%s",codigo);

//CAPTURAR E UNIR INICIAL DO ESTADO MAIS O CODIGO DE CADA MUNICIPIO
strcpy(codigo_da_carta,estado);
strcat(codigo_da_carta,"");
strcat(codigo_da_carta,codigo);

//CAPTURA DO MUNICIPIO
printf("Informe o nome do Município: \n");
scanf(" %[^\n]", &municipio);
 
//CAPTURA DA POPULAÇÃO
printf("Qual o número de Habitantes? \n");
scanf("%d", &populacao);

//CAPTURA DA ÁREA EM KM²
printf("Informe a área em km²: \n");
scanf("%f", &area_territorial);

//CAPTURA DO PIB
printf("Informe o PIB (Produto Interno Bruto):\n");
scanf("%f", &pib);

//CAPTURA DA QUANTIDADE DE PONTOS TURISTICOS
printf("Quantos pontos turísticos há nessa cidade ? \n");
scanf("%i", &pontos_turisticos);

//ENTRADA DE DADOS
printf("CARTA 02\n"); 


//CAPTURA DO ESTADO 
printf("Digite a Inicial do seu Estado:\n");
scanf("%s", estado_1);

//CAPTURA DO CODIGO
printf("Digite um Código:\n");
scanf("%s", codigo1);

//CAPTURA DO MUNICIPIO
printf("Informe o nome do Município: \n");
scanf(" %[^\n]", &municipio1);

//CAPTURA DA POPULAÇÃO
printf("Qual o número de Habitantes? \n");
scanf("%d", &populacao1);

//CAPTURA DA ÁREA EM KM²
printf("Informe a área em km²: \n");
scanf("%f", &area_territorial1);

//CAPTURA DO PIB
printf("Informe o PIB (Produto Interno Bruto):\n");
scanf("%f", &pib1);

//CAPTURA DA QUANTIDADE DE PONTOS TURISTICOS
printf("Quantos pontos turísticos há nessa cidade ? \n");
scanf("%i", &pontos_turisticos1);


//CAPTURAR E UNIR INICIAL DO ESTADO MAIS O CODIGO
strcpy(codigo_da_carta1,estado_1);
strcat(codigo_da_carta1,"");
strcat(codigo_da_carta1,codigo1);

// SAÍDA DE DADOS DA CARTA 1
printf("\n Carta 1:\n");
printf("Estado: %s\n", estado);
printf("Código da Carta 1: %s\n",codigo_da_carta);
printf("Nome da Cidade: %s\n",municipio);
printf("População: %d Pessoas\n",populacao);
printf("Área: %.2f km²\n", area_territorial);
printf("PIB: R$ %.2f bilhões de reais\n", pib);
printf("Pontos Turísticos: %i\n", pontos_turisticos);


// SAÍDA DE DADOS
printf("\n Carta 2:\n");
printf("Estado: %s\n", estado_1);
printf("Código da Carta 2: %s\n",codigo_da_carta1);
printf("Nome da Cidade: %s\n",municipio1);
printf("População: %d Pessoas\n",populacao1);
printf("Área: %.2f km²\n", area_territorial1);
printf("PIB: R$ %.2f bilhões de reais\n", pib1);
printf("Pontos Turísticos: %i\n", pontos_turisticos1);




return 0;
}