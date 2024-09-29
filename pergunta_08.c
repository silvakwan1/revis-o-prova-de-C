#include <stdio.h>

int main(){
    int gols[5];

    printf("Media de Gols\n\n");

    for (int i = 0; i < 5; i++){
        int count = i + 1;

        printf("Gols na partida %d: " , count);
        scanf("%d", &gols[i]);
    }
 
    float media = (gols[0] + gols[1] + gols[2] + gols[3] + gols[4]) / 5.0 ;

    if (media >=2){
        printf("Media de gols: %.2f - Bom", media);
    }else if (media < 2 && media >= 1){
        printf("Media de gols: %.2f - Regular", media);
    }else{
        printf("Media de gols: %.2f - Fraco", media);
    }
    

    return 0;
}