#include <stdio.h>

int main(){
    int pontos_manobras[5], total_pontos = 0;

    printf("Media de Pontuacao no Skate\n\n");

    for (int i = 0; i < 5; i++){
        printf("Digite quantos posto recebeu na %d manobra: ", i + 1);
        scanf("%d", &pontos_manobras[i]);
    }

    for (int i = 0; i < 5; i++){
        total_pontos = total_pontos + pontos_manobras[i];
    }
    
    float media = total_pontos / 5.00;

    printf("Media: %.2f", media);

    return 0;
}