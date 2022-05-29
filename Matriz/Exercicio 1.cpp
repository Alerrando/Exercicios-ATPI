#include <stdio.h>
#define TFL 3
#define TFC 3

int main()
{
	int mat[TFL][TFC], l, c, maior=0;
	
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			printf("Digite o numero da linha %d na coluna %d: \n", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
	
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			if(mat[l][c]>maior)
			{
				maior = mat[l][c];
			}
		}
		printf("O maior elemento eh o %d", maior);
}
