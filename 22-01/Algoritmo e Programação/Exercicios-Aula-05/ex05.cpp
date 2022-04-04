#include <stdio.h>

int main ( )

{
    float sal,perc, aumento, novosal;

    printf("Qual seu salário atualmente?");
    scanf("%f", &sal);
    printf("percentual de aumento?");
    scanf("%f", &perc);
    aumento = sal * perc/100;
    printf("voce teve um aumento de: %.2f\n", aumento);
    novosal = sal + aumento;
    printf("Seu novo salario eh: %.2f\n ", novosal);
    
    }
