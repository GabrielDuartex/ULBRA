#include <stdio.h>

int main()
{
 // Vari�veis 
 float area,base,altura;

 // Entrada de Dados
 printf("\n Informe a base do tri�ngulo: ");
 scanf("%f",&base);
 printf("\n Informe a altura do tri�ngulo: ");
 scanf("%f",&altura);

 // Processamento dos dados
 area=(base*altura)/2;

 // Exibi��o do resultado
 printf("\n Area do tri�ngulo=%.1f\n",area);
 return 0;

}
