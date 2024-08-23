#include <stdio.h>
#include <stdlib.h>
void exe2(){
	//	2 - Crie um programa que some dois números.
	int num1, num2, soma;
	printf("Programa 2: \n\n");
	printf("Digite o primeiro número: ");
	scanf(" %d", &num1);
	printf("Digite o segundo número: ");
	scanf(" %d", &num2);
	soma = num1 + num2;
	printf("A soma dos dois números = %d\n", soma);
}

int main(void) {
	int prog;
	char parar;
	while(1){
		system("clear");
		printf("Qual programa deseja executar: ");
		scanf("%d", &prog);
		printf("\n----------------\n\n");
		switch(prog){
			case 2:	exe2();	break;
			default: printf("Programa Inválido.. Tente novamente.\n");
		}
		
		printf("\nTecle para continuar...\n");
		getchar();getchar();
	}
	
	return 0;
}
