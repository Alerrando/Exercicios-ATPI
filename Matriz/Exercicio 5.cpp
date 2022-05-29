#include <stdio.h>
#define TFL 4
#define TFC 4

int main()
{
	int mat[TFL][TFC], l ,c, soma;
	
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			printf("Digite o numero da linha %d da coluna %d: \n", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
	
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			if(l==c)
				soma=soma+mat[l][c];
		}
		
	printf("O resultado da diagonal principal eh %d", soma);
}
