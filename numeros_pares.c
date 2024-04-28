#include <stdio.h>

int main () {

  int final = 100;

  for(int i = 1; i <= final; i++){
    if(i%2 == 0)
        printf("%d\n", i);
  };

    return 0;
}