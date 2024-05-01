#include <stdio.h>
#include <string.h>

int main () {
 
 int escolha = 0;
 char meses[12][20]= {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};

scanf("%d", &escolha);
 if (escolha >= 1 && escolha <= 12) {
        printf("%s\n", meses[escolha - 1]);
    }
    return 0; 
}