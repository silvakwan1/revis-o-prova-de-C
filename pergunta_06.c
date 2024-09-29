#include <stdio.h>

int main(){
    int atleta_A, atleta_B;

    printf("Pontuacao no Skate \n\n");

    printf("Quantos pontos o Atleta A fez: ");
    scanf("%d", &atleta_A);

    printf("Quantos pontos o Atleta B fez: ");
    scanf("%d", &atleta_B);

    if (atleta_A > atleta_B){
        printf("Atleta A venceu");
    }else if (atleta_A < atleta_B){
        printf("Atleta B venceu");
    }else {
        printf("deu Empate");
    }

    return 0;
}