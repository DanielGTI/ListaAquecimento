#include <stdio.h>
#include <stdlib.h>

void exe2(){
	//	2 - Crie um programa que some dois números.
	int num1, num2, soma;
	printf("Programa 2: \n\n");
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	soma = num1 + num2;
	printf("A soma dos dois números = %d\n", soma);
}

void exe3(){
	//	3 - Crie um programa que some dois números inteiros e um número real.
	int num1, num2;
	float num3, soma;
	printf("Programa 3: \n\n");
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	printf("Digite o terceiro número: ");
	scanf("%f", &num3);
	soma = num1 + num2 + num3;
	printf("A soma dos tres números = %.2f\n", soma);
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
			case 3: exe3();	break;
			default: printf("Programa Inválido.. Tente novamente.\n");
		}
		
		printf("\nTecle para continuar...\n");
		getchar();getchar();
	}
	return 0;
}
