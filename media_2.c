#include <stdio.h>

int main(){

    double nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

    scanf("%lf\n%lf\n%lf", &nota1, &nota2, &nota3);
   

    media = ((nota1*2) + (nota2*3) + (nota3*5))/10;

    printf("MEDIA = %.1lf\n", media);
    return 0;
}