#include <stdio.h>

int main(){
    float tempo_gasto, velocidede_media, distancia_percorrida;

    printf("Distancia Percorrida no Skate\n\n");

    printf("Qual foi a velociade media (m/s): ");
    scanf("%f", &velocidede_media);

    printf("Quanto tempo voce gastou (em segundos): ");
    scanf("%f", &tempo_gasto);

    distancia_percorrida = tempo_gasto * velocidede_media;

    printf("Distancia percorrida: %.2f metros", distancia_percorrida);

    return 0;
}