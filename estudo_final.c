#include <stdio.h>
#include <stdlib.h>

void contagem(int numero){
	int i;
	
	for(i=1;i <= numero;i++){
		printf("\n%d",i);
	}
}


void tabuada(int nm, int multiplicador){

	multiplicador = 1;
	
	while(multiplicador<=10){
		printf("%d * %d = %d\n",nm,multiplicador,nm * multiplicador);
		multiplicador++;
	}
}

int calcular_media(){
	
}

int main(int argc, char *argv[]) {
	
	
	printf("EXERCICIO 1\n");
	
	
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	contagem(numero);
	
	printf("\n///////////////////\n");
	
	printf("EXERCICIO 2\n");
	
	int nm,multiplicador;
	
	printf("Informe um numero: ");
	scanf("%d",&nm);
	
	tabuada(nm,multiplicador);
	
	printf("\n///////////////////\n");
	
	printf("EXERCICIO 3\n");

	
	return 0;
}
