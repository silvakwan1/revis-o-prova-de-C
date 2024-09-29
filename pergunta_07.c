#include <stdio.h>

int main(){
    int time_A[3], time_B[3], vitorias_time_A = 0, vitorias_time_B = 0;

    printf("Partida de e-Sports \n\n");

    printf("quantos pontos o time A fez na partida 01: ");
    scanf("%d", &time_A[1]);
    printf("quantos pontos o time A fez na partida 02: ");
    scanf("%d", &time_A[2]);
    printf("quantos pontos o time A fez na partida 03: ");
    scanf("%d", &time_A[3]);

    printf("quantos pontos o time B fez na partida 01: ");
    scanf("%d", &time_B[1]);
    printf("quantos pontos o time B fez na partida 02: ");
    scanf("%d", &time_B[2]);
    printf("quantos pontos o time B fez na partida 03: ");
    scanf("%d", &time_B[3]);

    for (int i = 1; i <= 3; i++){
        if (time_A[i] > time_B[i]){
            vitorias_time_A++;
        }else{
            vitorias_time_B++;
        }
    }
    

    if(vitorias_time_A > vitorias_time_B){
        printf("Vitória do Time A");
    }else  if(vitorias_time_A < vitorias_time_B){
        printf("Vitória do Time B");
    }else{
        printf("Empate");
    }
 

    return 0;
}