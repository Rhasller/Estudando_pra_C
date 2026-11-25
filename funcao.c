#include <stdio.h>
#include <stdlib.h>
//ESTUDANDO FUNÇÃO

//VARIÁVEIS DO SISTEMA, UTILIZANDO O CHAR PARA O NOME DO ALUNO
float nota1, nota2, calculo;
char nome[16];

/*FUNÇÃO PARA CALCULAR A MEDIA DO ALUNO, COMO PREECISAMOS RETORNAR UM VALOR
QUE UTILIZAMOS COMO MEDIA*/ 
float calcular_media(float nota1, float nota2){
	
	float calculo;
	
	calculo = (nota1 + nota2) / 2;
	
	return calculo;
}

/*FUNÇÃO PARA VERIFICAR SE A MEDIA DO ALUNO É NECESSÁRIA PARA SER APROVADO,
NELA PUXAMOS A OUTRA FUNÇÃO DE CALCULO INFORMANDO O AS VARIÁVEIS E APÓS ISSO
AS CONDIÇÕES*/
void condicoes(){
	float media;
	
	media = calcular_media(nota1, nota2);
	
	if(media >= 60 && media <= 100){
		printf("Aluno APROVADO!");
	}
	else{
		printf("Aluno REPROVADO!!!");
	}
	
}

int main(int argc, char *argv[]) {
	
	printf("Informe o nome do aluno: \n");
	scanf(" %s",nome);
	
	printf("Informe a nota do aluno no primeiro semestre: \n");
	scanf("%f",&nota1);
	
	printf("Informe a nota do aluno no segundo semestre: \n");
	scanf("%f",&nota2);
	
	calculo = calcular_media(nota1, nota2);
	
	printf("Media: %f\n",calculo);
	
	condicoes();
	
	return 0;
}
