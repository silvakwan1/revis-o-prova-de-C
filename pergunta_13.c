#include <stdio.h>

int main(){
    int pontuacao;

    printf("Numero Par ou Impar\n\n");
    printf("Quantos pontos voce fez: ");
    scanf("%d", &pontuacao);

    if(pontuacao % 2 == 0){
        printf("Par");
    }else{
        printf("Impar");
    }

    return 0;
}