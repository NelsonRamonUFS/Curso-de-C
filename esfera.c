#include <stdio.h>
#include <stdlib.h>

const double PI = 3.14159;

int main (){

double raio = 0, volume = 0;

scanf("%lf", &raio);

volume = (4.0/3) * PI * (raio*raio*raio);

 printf("VOLUME = %.3lf\n", volume);

    return 0;
}
