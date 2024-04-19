    #include <stdio.h>

    int main() {
        
        double kilometragem = 0, tempo_viagem = 0,  velocidade_media = 0, tempo_total = 0;

        scanf("%lf\n%lf", &tempo_viagem, &velocidade_media);

        tempo_total = (tempo_viagem * velocidade_media);
        kilometragem = tempo_total/12;
        printf("%.3lf\n", kilometragem);

        return 0;
    }
