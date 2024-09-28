#include <stdio.h>

int main(){
    int idade;

    printf("Verificassao de Idade para Competissao de Volei. \n\n");

    printf("Quantos voce tem: ");
    scanf("%d", &idade);

    if(idade >= 18){ 
        printf("Pode competir");
    }else{
        printf("Nao pode competir");
    };

    return 0;
}