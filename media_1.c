#include <stdio.h>

int main(){

    double nota1 = 0, nota2 = 0, media = 0;

    scanf("%lf\n%lf", &nota1, &nota2);
   

    media = ((nota1*3.5) + (nota2*7.5))/11;

    printf("MEDIA = %.5lf\n", media);
    return 0;
}