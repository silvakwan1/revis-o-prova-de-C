#include <stdio.h>
#include <string.h>

int main() {
    int pontuacao[3];
    char atletas[3][50]; 
    printf("Ranking no Skate \n\n");

    for (int i = 0; i < 3; i++) {
        printf("Qual o nome do atleta 0%d: ", i + 1);
        fgets(atletas[i], 50, stdin);
        atletas[i][strcspn(atletas[i], "\n")] = '\0';
    }

    for (int i = 0; i < 3; i++) {
        printf("Qual a pontuacao do atleta %s: ", atletas[i]);
        scanf("%d", &pontuacao[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (pontuacao[i] < pontuacao[j]) {
                int temp_pontos = pontuacao[i];
                pontuacao[i] = pontuacao[j];
                pontuacao[j] = temp_pontos;

                char temp_nome[50];
                strcpy(temp_nome, atletas[i]);
                strcpy(atletas[i], atletas[j]);
                strcpy(atletas[j], temp_nome);
            }
        }
    }

    printf("\nResultados Finais:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d lugar: %s com %d pontos\n", i + 1, atletas[i], pontuacao[i]);
    }

    return 0;
}
