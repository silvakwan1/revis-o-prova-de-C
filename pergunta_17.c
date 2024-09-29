#include <stdio.h>

int main(){
    int gols_time_A[5], gols_time_B[5], total_gols_time_A = 0, total_gols_time_B = 0;

    printf("Penaltis\n\n");
    
    printf("comecou as penalidades.");
    printf("\n\ndigite:");
    printf("\n 1: para gol");
    printf("\n 0: para nao gol \n");
    
    for (int i = 0; i < 5; i++){
        printf("\n%d chute do time A: ", i + 1);
        scanf("%d", &gols_time_A[i]);

        printf("\n%d chute do time B: ", i + 1);
        scanf("%d", &gols_time_B[i]);
    }

    for (int i = 0; i < 5; i++){
        if(gols_time_A[i] > 0){
            total_gols_time_A++;
        }

        if(gols_time_B[i] > 0){
            total_gols_time_B++;
        }
    }

    if (total_gols_time_A > total_gols_time_B){
        printf("Vitoria do Time A");
    }else if (total_gols_time_A < total_gols_time_B){
        printf("Vitoria do Time B");
    }else {
        printf("Empate");
    }
    return 0;
    
}