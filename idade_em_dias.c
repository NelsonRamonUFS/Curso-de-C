#include <stdio.h>

int main() {

    int idade = 0, anos = 0, meses = 0, dias = 0;

    scanf("%d", &idade);

        if (idade >= 365){
         anos = idade  / 365;
          idade = idade  - (anos * 365);
       
        }
        
         if (idade >= 30 && idade < 365 ) {
            meses = idade /30;
            idade = idade - (meses *30);
        }
         if (idade < 30)        
            dias = idade;



        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
        


       return 0;
    }
