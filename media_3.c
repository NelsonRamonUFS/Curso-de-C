#include <stdio.h>


int main ( ) {

  float nota_1 = 0, nota_2 = 0, nota_3 = 0, nota_4 = 0, media = 0, nota_exame = 0; 

  scanf("%f %f %f %f", &nota_1, &nota_2, &nota_3, &nota_4);


    media = (nota_1*2 + nota_2*3 + nota_3*4 + nota_4*1)/10;

    printf("Media: %.1f\n", media);

    if (media >= 7 )
    {
        printf("Aluno aprovado.\n");
    }else if (media >=5 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
         media = (media + nota_exame)/2;
          if(media >=5){
             printf("Aluno aprovado.\n");
             printf("Media final: %.1f\n", media);
          }else{
         printf("Aluno reprovado.\n");
          printf("Media final: %.1f\n", media);
          }
    }else
    printf("Aluno reprovado.\n");
    
    return 0;

}