#include <stdio.h>

int main () {

    float salario_base = 0, reajuste = 0, percen = 0;
    float novo_salario = 0;
    scanf("%f", &salario_base);

    if(salario_base >=0 && salario_base <= 400.00){
         percen = 15;
          reajuste = salario_base * (percen/100);
         novo_salario = salario_base + reajuste;
        
         printf("Novo salario: %.2f\n", novo_salario);
         printf("Reajuste ganho: %.2f\n", reajuste);
         printf("Em percentual: %.0f %%\n", percen);

    }else if(salario_base > 400 && salario_base <= 800){
         percen = 12;
         reajuste = salario_base * (percen/100);
         novo_salario = salario_base + reajuste;

         printf("Novo salario: %.2f\n", novo_salario);
         printf("Reajuste ganho: %.2f\n", reajuste);
         printf("Em percentual: %.0f %%\n", percen);
         

    }else if(salario_base > 800 && salario_base <= 1200.00){
         percen = 10;
         reajuste = salario_base * (percen/100);
         novo_salario = salario_base + reajuste;

         printf("Novo salario: %.2f\n", novo_salario);
         printf("Reajuste ganho: %.2f\n", reajuste);
         printf("Em percentual: %.0f %%\n", percen);
         

    }else if(salario_base > 1200 && salario_base <= 2000){
         percen = 7;
         reajuste = salario_base * (percen/100);
         novo_salario = salario_base + reajuste;

         printf("Novo salario: %.2f\n", novo_salario);
         printf("Reajuste ganho: %.2f\n", reajuste);
         printf("Em percentual: %.0f %%\n", percen);
         

    }else if(salario_base > 2000){
         percen = 4;
         reajuste = salario_base * (percen/100);
         novo_salario = salario_base + reajuste;

         printf("Novo salario: %.2f\n", novo_salario);
         printf("Reajuste ganho: %.2f\n", reajuste);
         printf("Em percentual: %.0f %%\n", percen);
         
    }

return 0;}