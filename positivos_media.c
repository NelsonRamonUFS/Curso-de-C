#include <stdio.h>

int main () {

float numeros[6];
int contador = 0; 
float total = 0, media = 0;

    for(int i = 0; i < 6; i++){
        scanf("%f", &numeros[i]);
        if(numeros[i]>0){
            contador++;
            total = total + numeros[i];
        }            
     }

        media = total/contador;
        printf("%d valores positivos\n", contador);
        printf("%.1f\n", media);

return 0;
}