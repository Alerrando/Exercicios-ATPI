#include <stdio.h>
#define TFC 5
#define TFL 3

int main()
{
	int mat[TFC][TFL], l, c, i, totalI=0;
	float vetPreco[TFL];
	char vetNome[TFL][20];
	
	for(i=0; i<TFL; i++)
	{
		printf("Digite o nome do %d produto: \n", i+1);
		fflush(stdin);
		gets(vetNome[i]);
		
		printf("Digite o custo do produto %d: \n", i+1);
		scanf("%f", &vetPreco[i]);
		printf("---------------------------------------------------------\n");
	}
	
	for(c=0; c<TFC; c++)
	{
		printf("-----Armazem %d-------\n", c+1);
		for(l=0, i=0; l<TFL, i<TFL; l++, i++)
		{
			printf("A quantidade de produtos do produto %s, eh de: \n", vetNome[i]);
			scanf("%d", &mat[l][c]);
		}
	}
	
	for(l=0; l<TFL; l++)
	{
		totalI=0;
		for(c=0; c<TFC; c++)
		{
			totalI = totalI+mat[l][c];
		}
		printf("O total de itens no Armazem %d, eh de %d\n", l+1, totalI);
		
	}
}
