#include <stdio.h>
#include <math.h>
int main (){

    float a = 0, b = 0, c = 0;
    float delta = 0, raiz_1 = 0, raiz_2 = 0;

    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b)-(4*a*c);

    if(a == 0 || delta < 0 ){

        printf("Impossivel calcular\n");
    }else{

        raiz_1 = ((-b) + sqrt(delta))/(2*a);
        raiz_2 = ((-b) - sqrt(delta))/(2*a);

        printf("R1 = %.5f\n", raiz_1);
        printf("R2 = %.5f\n", raiz_2);
    }

    return 0;
}