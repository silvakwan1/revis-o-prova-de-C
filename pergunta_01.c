#include <stdio.h>

int main(){
    float tempo_gasto, velocidede_media;

    printf("Em quantos segundos voce percorreu a rampa de 50 metros: ");
    scanf("%f", &tempo_gasto);

    velocidede_media = 50 / tempo_gasto;

    printf("Velocidade media: %.2f m/s", velocidede_media);

    return 0;
}