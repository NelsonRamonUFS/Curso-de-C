#include <stdio.h>
#include <stdlib.h>

const double PI = 3.14159;

int main (){

    double n = 0, area = 0;

    scanf("%lf", &n);
   area =  PI * (n*n);
   
   printf("A=%.4f\n", area);
    return 0;
}