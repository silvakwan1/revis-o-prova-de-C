#include <stdio.h>

int main(){
    int vitorias, empates, derrotas, pontuacao_vitoria, pontuacao_empate, pontuacao_total;

    printf("Vamos calcular quantos pontos fez seu time.");
    printf("\nQuantas vitorias ele teve: ");
    scanf("%d", &vitorias);

    printf("Quantos empates ele teve: ");
    scanf("%d", &empates);

    printf("Quantas derrotas ele teve: ");
    scanf("%d", &derrotas);

    pontuacao_vitoria = vitorias * 3;
    pontuacao_empate = empates * 1;

    pontuacao_total = pontuacao_empate + pontuacao_vitoria;

    printf("\nPontuassao total: %d", pontuacao_total);
    printf("\ntivemos:");
    printf("\n  %d vitorias.", vitorias);
    printf("\n  %d empates.",empates);
    printf("\n  %d derrotas.", derrotas);

    return 0;
}