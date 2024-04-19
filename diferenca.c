#include <stdio.h>

int main(){

    int A = 0, B = 0, C = 0, D= 0, diferenca = 0;

    scanf("%d\n%d\n%d\n%d", &A, &B, &C, &D);
   

    diferenca = ((A * B) - (C * D));

    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}