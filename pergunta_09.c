#include <stdio.h>
int main(){
  
    int timeA, timeB, maior, menor, set;
  
    printf("quantos pontos o time A fez na partida: ");
    scanf("%d", &timeA);

    printf("quantos pontos o time B fez na partida: ");
    scanf("%d", &timeB);

    if(!(timeA >= 25 || timeB >=25) ){
        printf("Set nao fechado");
        return 0;
    }

	if(timeA > timeB){
		maior = timeA;
		menor = timeB;
	}else{
		maior = timeB;
		menor = timeA;
	}
	
	set = maior - menor;
	
	if(set >= 2){
		printf("Set fechado");
	}else{
		printf("Set nao fechado");
	}
	
  
    return 0;
  
}