#include <stdio.h>
#define TFL 4
#define TFC 4

int main()
{
	int mat[TFL][TFC],mat2[TFL][TFC], mat3[TFL][TFC], l, c, total;
	
	for(l=0; l<TFL; l++)
	{
		for(c=0; c<TFC; c++)
		{
			printf("Digite o numero da matriz 1, linha %d da coluna %d: ", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
		printf("\n");
	}
	
	printf("---------------------------------------------------------\n");
	for(l=0; l<TFL; l++)
	{
		for(c=0; c<TFC; c++)
		{
			printf("Digite o numero da matriz 2, linha %d da coluna %d: ", l+1, c+1);
			scanf("%d", &mat2[l][c]);
		}
		printf("\n");
	}
		
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			if(mat[l][c] == 0)
			{
				printf("O numero na matriz 1, localizado na linha %d na coluna %d, eh impossivel de calcular\n", l+1, c+1);
				mat3[l][c] = 0;
			}
			
			if(mat2[l][c] == 0)
			{
				printf("O numero na matriz 2, localizado na linha %d na coluna %d, eh impossivel de calcular\n", l+1, c+1);
				mat3[l][c] = 0;
			}
			
			mat3[l][c] = mat[l][c]*mat2[l][c];
		}
		
	for(l=0; l<TFL; l++)
	{
		for(c=0; c<TFC; c++)
		{
			printf("%d ", mat3[l][c]);
		}
		printf("\n");
	}
}
