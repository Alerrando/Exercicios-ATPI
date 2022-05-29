#include <stdio.h>
#include <string.h>
#define TF 2

int main()
{
	char vetNomes[TF][15];
	int i, vetContas[TF], op;
	float vetSaldos[TF];
	
	for(i=0; i<TF; i++)
	{
		printf("Codigo da conta: \n");
		scanf("%d", &vetContas[i]);
		
		printf("Nome do cliente: \n");
		fflush(stdin);
		gets(vetNomes[i]);
		
		printf("Saldo da conta: \n");
		scanf("%f", &vetSaldos[i]);
	}
	
	do
	{
		printf("Controle Bancario\n");
		printf("1 -- Efetuar Depositio\n");
		printf("2 -- Efetuar Saque\n");
		printf("3 -- Consultar o ativo bancario\n");
		printf("4 -- Aplicar porcentagem de juros mensal\n");
		printf("5 -- Finalizar o programa\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &op);
		
		
	}while(op!=5);
	
}
