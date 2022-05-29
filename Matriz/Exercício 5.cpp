#include<stdio.h>
#define TF 4

int main()
{
	int mat[TF][TF], l, c, i, DP,DPA=0;
	
	for(l=0; l<TF; l++)
		for(c=0;c<TF;c++)
		{
			printf("Digite um numero na coord: %d, %d\n", l, c);
			scanf("%d", &mat[l][c]);
			
			if(l==c)
				DP=DP+mat[l][c];
		}
	
	printf("%d\n", DP);
	
	
	
	printf("Soma: \n");
	//soma
	for(l=0; l<TF; l++)
		for(c=0;c<TF;c++)
			if(l<c)
				DPA=DPA+mat[l][c];
			
	printf("%d\n", DPA);		
}
