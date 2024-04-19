#include <stdio.h>

int main (){

 int distancia_percorrida = 0;
 float combustivel = 0, consumo = 0;

 scanf("%d\n%f", &distancia_percorrida, &combustivel);

consumo = distancia_percorrida/combustivel;

printf("%.3f km/l\n", consumo);


    return 0;
}