#include <stdio.h>
#include <string.h>
#define TFL 5
#define TFC 3

int main()
{
	char vetProd[TFC][15], nome[15];
	int matEst[TFL][TFC], l, c, soma, menor=99999,maior=0, armazem, maiorC=0, menorC=9999;
	float vetCusto[TFC], soma2;
	
	
	for(c=0; c<TFC; c++)
	{
		printf("Nome %do. Produto: \n", c+1);
		fflush(stdin);
		gets(vetProd[c]);
		
		for(l=0; l<TFL; l++)
		{
			printf("Estoque do Armazem %d: \n", l+1);
			scanf("%d", &matEst[l][c]);
			
			
		}
		printf("Custo do Produto: \n");
		scanf("%f", &vetCusto[c]);
		printf("------------------------------------------------------------------\n");
	}
	
	
	//Totoal de itens armazenados de cada armazem
	for(l=0; l<TFL; l++)
	{
		soma=0;
		for(c=0; c<TFC; c++)
		{
			soma = soma+matEst[l][c];
		}
		printf("Total de itens do Armazem %d eh %d\n", l+1, soma);
	}
	
	
	//O total de itens armazenados de cada produto em todos os arazens juntos
	for(c=0; c<TFC; c++)
	{
		soma=0;
		for(l=0; l<TFL; l++)
		{
			soma = soma+matEst[l][c];
		}
		printf("------------------------------------------------------------------\n");
		printf("O Produto %s tem de itens Armazenados no armazen %d eh %d\n",vetProd[c], c+1, soma);
	}
	
	
	//O custo total de cada armazém
	for(l=0; l<TFL; l++)
	{
		soma2=0;
		for(c=0; c<TFC; c++)
		{
			soma2=soma2+matEst[l][c]*vetCusto[c];
		}
		printf("------------------------------------------------------------------\n");
		printf("Custo total do armazem %d: %.2f\n", l+1, soma2);
	}
	
	
	//O nome do produto e o numero do armazem que possui o menor numero de itens armazenados
	for(l=0; l<TFL; l++)
	{
		for(c=0; c<TFC; c++)
		{
			if(matEst[l][c]<menor)
			{
				menor=matEst[l][c];
				strcpy(nome, vetProd[c]);
				armazem=l+1;
			}
		}
	}
	printf("O produto %s do armazem %d possui o menor estque\n", nome, armazem);
	
	
	//O nome do produto e o numero do armazem que possui o maior numero de itens armazenados
	for(l=0; l<TFL; l++)
	{
		for(c=0; c<TFC; c++)
		{
			if(matEst[l][c]>maior)
			{
				maior=matEst[l][c];
				strcpy(nome, vetProd[c]);
				armazem=l+1;
			}
		}
	}
	printf("O produto %s do armazem %d possui o maior estque\n", nome, armazem);
	
	
	//O nome do produto que possui o menor custo
	for(c=0; c<TFC; c++)
	{
		if(vetCusto[c]<menorC)
		{
			menorC=vetCusto[c];
			strcpy(nome, vetProd[c]);
		}
	}
	printf("O produto %s possui o menor custo\n", nome);
	
	
	//o nome do produto que possui o maior custo
	for(c=0; c<TFC; c++)
	{
		if(vetCusto[c]>maiorC)
		{
			maiorC=vetCusto[c];
			strcpy(nome, vetProd[c]);
		}
	}
	printf("O produto %s possui o maior custo\n", nome);
}
