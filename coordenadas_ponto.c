#include <stdio.h>

int main () {

float ponto_x, ponto_y;

 scanf("%f %f", &ponto_x, &ponto_y);

 if(ponto_x == 0 && ponto_y == 0){
    printf("Origem\n");
 }else if (ponto_x == 0){
    printf("Eixo Y\n");
 }else if (ponto_y == 0){
    printf("Eixo X\n");
 }


 if(ponto_x > 0 && ponto_y > 0){
    printf("Q1\n");
 }else if(ponto_x > 0 && ponto_y < 0){
   printf("Q4\n");
 } else if(ponto_x < 0 && ponto_y > 0){
   printf("Q2\n");
 }else if(ponto_x < 0 && ponto_y < 0){
   printf("Q3\n");
 }

    return 0;
}