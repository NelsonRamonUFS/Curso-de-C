#include <stdio.h>

int main () {

  int final ;
  scanf("%d", &final);

  for(int i = 1; i <= final; i++){
    if(i%2 != 0)
        printf("%d\n", i);
  };

    return 0;
}