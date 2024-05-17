#include <stdio.h>

int main () {

    int limite = 0, dentro = 0, fora = 0, lido = 0;

    scanf("%d", &limite);

    for (int i = 0; i < limite; i++)
    {
            scanf("%d", &lido);
        if (lido >= 10 && lido <= 20)
        {
            dentro++;
        }else
            fora++;
        
    }
    

        printf("%d in\n%d out\n", dentro, fora);

    return 0;
}