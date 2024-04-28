#include <stdio.h>

int main () {

float numeros[6];
int contador = 0; 

    for(int i = 0; i < 6; i++){
        scanf("%f", &numeros[i]);
        if(numeros[i]>0)
            contador++;
     }

        printf("%d valores positivos\n", contador);

return 0;
}