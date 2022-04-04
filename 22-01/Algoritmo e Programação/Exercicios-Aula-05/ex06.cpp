#include <stdio.h>
#include <math.h>

int main ( )
{

	float sal,salreceber,grat,imp;
   printf("Digite seu salario:");
   scanf("%f",&sal);
   grat=sal*5/100;
   imp= sal*7/100;
   salreceber= sal+grat-imp;
   printf("Seu salario e de:%f\n",salreceber);
   }
