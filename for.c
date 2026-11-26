#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	printf("Contagem simples: imprima os números de 1 a 20\n");
	
	int numero1;
	
	for(numero1 = 0;numero1 <= 20; numero1++){
		printf("%d\n",numero1);
	}
	*/
	printf("\n///////////////////////\n");
	/*
	printf("Contagem regressiva: imprima de 10 até 0 e, no final, mostre Fogo!.\n");
	
	int numero2;
	
	for(numero2=10;numero2 >= 0; numero2--){
		printf("%d\n",numero2);
	}
	
	printf("Fogo!");
	*/
	printf("\n///////////////////////\n");
	/*
	printf("Tabuada: leia um número e mostre a tabuada dele de 1 a 10 usando for\n");
	
	int tabuada;
	int multiplicador=1;
	
	printf("Informe um numero: \n");
	scanf("%d",&tabuada);
	
	for(multiplicador=1;multiplicador<=10;multiplicador++){
		printf("%d * %d = %d\n",tabuada,multiplicador,tabuada * multiplicador);
	}
	*/
	printf("\n///////////////////////\n");
	
	printf("Maior e menor: leia 10 numeros e mostre o maior e o menor.");
	
	int numero3;
	int maior,menor;
	int i;
	
	for(i=0;i<10;i++){
		printf("\nInforme um numero: ");
		scanf("\n%d",&numero3);
		
		maior = numero3+1;
		menor = numero3-1;
		
		printf("Numero informado: %d\nnumero maior: %d\nnumero menor: %d",numero3,maior,menor);	
	}
	return 0;
}
