#include <stdio.h>
 
int main() {
 
    int comeco = 0, fim = 0, horas = 0;

    scanf("%d %d", &comeco, &fim);

   if(fim > comeco){    
        horas = fim-comeco;
        printf("O JOGO DUROU %d HORA(S)\n", horas);
    }else {
        horas = 24 - comeco + fim;
        printf("O JOGO DUROU %d HORA(S)\n", horas);
    }

    return 0;
}