#include <stdio.h>

int main(){
    int gols_feitos, gols_sofrido, saldo_de_gols;

    printf("Saldo de Gols\n\n");

    printf("Quantos gols seu time fez: ");
    scanf("%d", &gols_feitos);

    printf("Quantos gols seu time levou: ");
    scanf("%d", &gols_sofrido);

    saldo_de_gols = gols_feitos - gols_sofrido;

    printf("Saldo de gols: %d" , saldo_de_gols);

    return 0;
}