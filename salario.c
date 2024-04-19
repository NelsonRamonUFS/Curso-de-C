#include <stdio.h>

int main(){

int funcionario = 0, horas = 0;
float valor_hora = 0, salario = 0;

scanf("%d\n%d\n%f", &funcionario, &horas, &valor_hora);
salario = horas * valor_hora;

printf("NUMBER = %d\nSALARY = U$ %.2f\n", funcionario, salario);


    return 0;
}