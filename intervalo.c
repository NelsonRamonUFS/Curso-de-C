#include <stdio.h>

int main () {

 float avaliado =0;

scanf("%f", &avaliado);


 if (avaliado >= 0 && avaliado <= 25) {
   printf("Intervalo [0,25]\n");

 }else if (avaliado > 25 && avaliado <= 50) {
    printf("Intervalo (25,50]\n");

 }else if (avaliado > 50 && avaliado <= 75) {
    printf("Intervalo (50,75]\n");

 }else if (avaliado > 75 && avaliado <= 100) {
    printf("Intervalo (75,100]\n");
 }   else
 printf("Fora de intervalo\n"); 

return 0;
}