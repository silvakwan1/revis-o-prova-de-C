#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Calculo do IMC \n\n");

    printf("Qual seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Qual sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc <= 18.5){
        printf("IMC: %.2f - Abaixo do peso", imc);
    }else if (imc > 18.5 && imc <= 24.9){
        printf("IMC: %.2f - Peso normal", imc);
    }else if (imc > 24.9 && imc <= 29.9){
        printf("IMC: %.2f - Sobrepeso", imc);
    }else {
        printf("IMC: %.2f - Obesidade", imc);
    }
    

    return 0;
}