#include <stdio.h>

int main (){

    int codPeca1 = 0, codPeca2 = 0, numPecas1 = 0, numPecas2;
    double valor_peca1 = 0, valor_peca2 = 0, total = 0;

    scanf("%d %d %lf\n", &codPeca1, &numPecas1, &valor_peca1);
    scanf("%d %d %lf", &codPeca2, &numPecas2, &valor_peca2);

    total = (numPecas1*valor_peca1)+(numPecas2*valor_peca2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}