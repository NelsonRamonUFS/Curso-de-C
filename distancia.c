#include <stdio.h>

int main() {
    float distancia, tempo_em_horas, tempo_em_minutos;
    
    scanf("%f", &distancia);
    
    tempo_em_horas = distancia / 30; 
    
    tempo_em_minutos = tempo_em_horas * 60;
    
    printf("%.0f minutos\n", tempo_em_minutos);
    
    return 0;
}
