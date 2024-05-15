#include <stdio.h>
#include <math.h>


int main () {
 int n = 0, quadrado = 0;

  scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            if (i % 2 == 0) {           
               quadrado = pow(i, 2);
                printf("%d^2 = %d\n", i, quadrado);                     
            }
        }
    return 0;
}