#include <stdio.h>

int main() {

    
    printf("Contagem crescente:\n");
	int numero1 = 1;
    
    while (numero1 <= 10) {
     printf("%d ",numero1);
     numero1++;
    }
	
    printf("\n///////////////////////\n");
    
    printf("Contagem decrescente:\n");
    
    int numero2 = 10;
    
    while (numero2 >= 1) {
    	printf("%d ",numero2);
    	
     numero2--;
    }
    
    
    printf("\n///////////////////////\n");
    
    printf("Numeros pares:\n");
    
    int numero3 = 0;
    
    while(numero3 <= 20){
    	if(numero3 % 2 == 0){
    		printf("%d ",numero3);
		}
		numero3++;
	}
	
	printf("\n///////////////////////\n");
	
	printf("Tabuada:\n");
	
	int tabuada;
	int multiplicador = 1;
	
	printf("Informe um numero: ");
	scanf("%d",&tabuada);
	
	while(multiplicador <= 10){
		if(tabuada == 0){
			printf("0");
		}
		else{
			printf("%d x %d = %d\n",tabuada,multiplicador,tabuada * multiplicador);
		}
	multiplicador++;
	}
return 0;
}
