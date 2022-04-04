#include <stdio.h>
 int main()
 {
 float sal,imposto,s_final;
 printf(" CALCULO DE SALARIO \n \n");
 printf("Digite seu salario: ");
 scanf("%f",&sal);

 imposto= (sal*10)/100;
 s_final = sal-imposto+50;

 printf("Salario a receber: %f reais \n",s_final);
 printf("Valor dos impostos: %f reais",sal);
}
