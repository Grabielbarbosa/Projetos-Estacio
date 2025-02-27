#include <stdio.h>
int main () {
    char nome[50];
    char municipio [50];
    int idade, matricula;
    float altura;

    printf("Cadastro do aluno \n");


    printf("Digite seu Nome: ");
    scanf("%s", &nome);
    
    printf("Digite seu Municipio:");
    scanf("%s", municipio);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua Matricula: ");
    scanf(" %d", &matricula);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n",altura);
    printf("Municipio: %s\n", municipio);



}