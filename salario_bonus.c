#include <stdio.h>
#include <string.h>

int main (){

 char nome[20];
 double salario_fixo = 0, vendas = 0, total = 0;

 scanf("%s\n%lf\n%lf", &nome, &salario_fixo, &vendas);

 total = salario_fixo + (vendas*0.15);

 printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}