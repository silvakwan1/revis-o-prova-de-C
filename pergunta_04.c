#include <stdio.h>

int main(){
    int time_A, time_B, QT_faltas;

    printf("Quantas faltas o time A fez: ");
    scanf("%d", &time_A);

    printf("Quantas faltas o time B fez: ");
    scanf("%d", &time_B);

    QT_faltas = time_A + time_B;

    if(QT_faltas >= 10){
        printf("Jogo violento");
    }else{
        printf("Jogo tranquilo");
    }

    return 0;
}