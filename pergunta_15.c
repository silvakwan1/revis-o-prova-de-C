#include <stdio.h>

int main(){
    int vitorias, derrotas, jogos;

    printf("Percentual de Vitorias\n\n");

    printf("Quantas vitorias seu time teve: ");
    scanf("%d", &vitorias);

    printf("Quantas derrotas seu time teve: ");
    scanf("%d", &derrotas);

    jogos = vitorias + derrotas;
    float percentual_de_vitoria = ((float)vitorias / jogos) * 100;
        
    printf("Percentual de vitorias: %.2f%%\n", percentual_de_vitoria);

    return 0;
}