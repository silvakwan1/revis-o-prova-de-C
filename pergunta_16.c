#include <stdio.h>
 
int main(){
    int pontos[3] ;
    int total_pontos = 0;
    float media;

    printf("Pontuacao em e-Sports\n\n");

    for (int i = 0; i < 3; i++){
        printf("Qunatos pontos voce faz na %d rodada: ", i + 1);
        scanf("%d", &pontos[i]);
    }

    for (int i = 0; i < 3; i++){
        total_pontos = total_pontos + pontos[i]; 
    }

    media = (float)total_pontos / 3;

    printf("Pontuacao total: %d - Media: %.2f", total_pontos , media);

    return 0;
}