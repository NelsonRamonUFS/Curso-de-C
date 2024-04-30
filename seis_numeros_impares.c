#include <stdio.h>

int main () {

  int inicio;

  scanf("%d", &inicio);

  for(int i = inicio; i < inicio + 12; i++){
    if(i%2 != 0)
        printf("%d\n", i);
  };

    return 0;
}