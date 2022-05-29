#include<stdio.h>
#define TF 4

int main()
{
	int l, c, a, b;
	float mat[TF][TF] ,DP[TF];
	double total;
	
	for(l=0; l<TF; l++)
		for(c=0;c<TF;c++)
		{
			printf("Digite um numero na coord: %d, %d\n", l, c);
			scanf("%f", &mat[l][c]);
			
			
		}
		
	for(l=0; l<TF; l++)
		for(c=0; c<TF; c++)
		{
			if(mat[l]==mat[c])
				DP[l] = mat[l][c];
		
		}
	for(l=0; l<TF; l++)
		for(c=0; c<TF; c++)
		{
			if(mat[l]!=mat[c])
			{
				total = DP[l]/mat[l][c];
				printf("O resultado da divisao da linha %d na coluna %d, eh = %.2lf\n", l, c, total);
				total=0;
			}
		}
}
