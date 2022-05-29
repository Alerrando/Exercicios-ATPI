#include <stdio.h>
#define TFL 3
#define TFC 4

int main()
{
	int mat[TFL][TFC], mat2[TFL][TFC], l, c, soma;
	
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			printf("Digite o numero da matriz 1, linha %d da coluna %d\n", l+1, c+1);
			scanf("%d", &mat[l][c]);
			
		}
	printf("---------------------------------------------------------\n");
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			printf("Digite o numero da matriz 2, linha %d da coluna %d\n", l+1, c+1);
			scanf("%d", &mat2[l][c]);

		}
	
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			soma = soma + mat[l][c] + mat2[l][c];
		}
		
	printf("O resultado da soma eh %d\n", soma);
}

