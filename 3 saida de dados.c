#include <stdio.h>
int main () {
   
    int idade = 27;
    float altura = 1.75;
    double salario = 3500.00;
    char inicialdonome = 'G';
    char nome [20]="Gabriel";

    int idade2 = 1.3;
    float altura2 = 1.00;
    double salario2 = 3500.00;
    char inicialdonome2 = 'B';
    char nome2 [20]="Bernardo";
    
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n",idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Salario: %.2f reais\n",  salario);
    printf("Inicial do Nome: %c\n",inicialdonome);
    printf("");
    printf("Nome: %s\n", nome2);
    printf("Idade: %d anos\n",idade2);
    printf("Altura: %.2f metros\n", altura2);
    printf("Salario: %.2f reais\n",  salario2);
    printf("Inicial do Nome: %c\n",inicialdonome2);

    return 0;
    




   



}