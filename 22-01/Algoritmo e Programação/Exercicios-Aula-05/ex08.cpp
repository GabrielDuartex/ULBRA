#include <stdio.h>
#include <conio.h>

main () {
     float deposito, taxa, rendimento, rendimentoFinal;
     printf ("Informe o valor do deposito: ");
     scanf ("%f", &deposito);
     printf ("Informe o valor das taxas de juros: ");
     scanf ("%f", &taxa);
     rendimento=deposito*(taxa/100);
     printf ("O valor do rendimento eh: %.2f \n", rendimento);
     rendimentoFinal=deposito+rendimento;
     printf ("O valor do rendimento final eh: %.2f", rendimentoFinal);
     getch();
     }
