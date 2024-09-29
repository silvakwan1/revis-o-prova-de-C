#include <stdio.h>

int main() {
    int pontos[4];
    int campeoes = 0; 
    int indice_campeao = -1;
    int max = 0;


    printf("Campeonato de e-Sports\n\n");

    for (int i = 0; i < 4; i++) {
        printf("Qual a pontuacao da %d equipe: ", i + 1);
        scanf("%d", &pontos[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (pontos[i] > max) {
            max = pontos[i];
            campeoes = 1; 
            indice_campeao = i; 
        } else if (pontos[i] == max) {
            campeoes++; 
        }
    }

    if (campeoes > 1) {
        printf("Empate\n");
    } else {
        printf("%d eh o campeao\n", pontos[indice_campeao]);
    }

    return 0;
}
