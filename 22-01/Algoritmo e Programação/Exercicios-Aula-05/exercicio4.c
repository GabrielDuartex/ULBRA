#include <stdio.h>

int main ( )

{
    float sal, aumento, novosal;

    printf("Qual seu salário atualmente?");
    scanf("%f", &sal);
    aumento = sal * 25/100;
    novosal = sal + aumento;
    printf("Seu novo salario eh: %.2f\n ", novosal);
    }