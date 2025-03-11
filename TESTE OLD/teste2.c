#include <stdio.h>
#include <string.h> // Para usar a função strcspn

int main() {
    char nome[50];
    char municipio[50];
    int idade, matricula;
    float altura;

    printf("Cadastro do aluno \n");

    // Captura do nome completo
    printf("Digite seu Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o \n capturado pelo fgets

    // Captura do município
    printf("Digite seu Município: ");
    fgets(municipio, 50, stdin);
    municipio[strcspn(municipio, "\n")] = '\0'; // Remove o \n capturado pelo fgets

    // Captura da idade
    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    // Captura da matrícula
    printf("Digite sua Matrícula: ");
    scanf("%d", &matricula);

    // Captura da altura
    printf("Digite sua Altura (em metros): ");
    scanf("%f", &altura);

    // Limpa o buffer de entrada após o uso do scanf
    while (getchar() != '\n');

    // Exibe os dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("Nome: %s\n", nome);
    printf("Município: %s\n", municipio);
    printf("Idade: %d\n", idade);
    printf("Matrícula: %d\n", matricula);
    printf("Altura: %.2f\n", altura);

    return 0;
}