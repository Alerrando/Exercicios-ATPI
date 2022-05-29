#include <stdio.h>
#define TFL 5
#define TFC 5
#define TF 6

int main()
{
	int mat[TFL][TFC], l ,c, maior, posL[TF], posC[TF], i;
	
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			printf("Digite o numero da linha %d da coluna %d: \n", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
		
	i=0;
	for(l=0; l<TFL; l++)
		for(c=0; c<TFC; c++)
		{
			if(mat[l][c]>maior)
			{
				maior = mat[l][c];
				posL[i] = l;
				posC[i] = c;
				i++;
			}
			if(maior == mat[l][c])
			{
				posL[i] = l;
				posC[i] = c;
				i++;
			}
			
		}
	printf("O maior numero eh o %d, ele esta na linha %d, na coluna %d\n", maior, posL[i], posC[i]);
	
	for(i=0; i<TFL; i++)
		printf("O numero %d tambem aparece na seguinte linha %d e na seguinte coluna %d\n", maior, posL[i], posC[i]);
}
