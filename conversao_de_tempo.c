#include <stdio.h>

int main () {

int tempo = 0, horas = 0, minutos = 0, segundos = 0;

    scanf("%d", &tempo);

    if (tempo >= 3600){
        horas = tempo/3600;
       tempo = tempo - horas * 3600;

        minutos = tempo / 60;
        tempo = tempo - minutos * 60;

        segundos = tempo;
    }else if ( tempo < 3600 && tempo >= 60){
        minutos = tempo/60;
        tempo = tempo - (60 * minutos);
        segundos = tempo;
    } else if (tempo <60){
        segundos = tempo;

    }
   
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}



// 1 hora  = 60 minutos ou 3600 segundos
// 60 minutos = 3600 segundos
//1 minuto = 60 segundos


/*else if ( tempo < 3600 && tempo >= 60){
        minutos = tempo/60;
        tempo = tempo - (60 * minutos);

    } else if (tempo <60){
        segundos = tempo;

    }*/