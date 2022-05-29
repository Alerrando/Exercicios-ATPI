#include <stdio.h>
#define TF 3

int main()
{
	int mat[TF][TF], mat2[TF][TF], mat3[TF][TF], k, l, c, s;
	
	for(l=0; l<TF; l++)
		for(c=0;c<TF;c++)
		{
			printf("Digite um numero na coord: %d, %d\n", l, c);
			scanf("%d", &mat[l][c]);
		}
	
	printf("Matriz 2: \n");
	for(l=0; l<TF; l++)
		for(c=0;c<TF;c++)
		{
			printf("Digite um numero na coord: %d, %d\n", l, c);
			scanf("%d", &mat2[l][c]);
		}
	
	printf("Soma: \n");
	//soma
	for(l=0; l<TF; l++)
		for(c=0; c<TF; c++)
			mat3[l][c]=mat[l][c]+mat2[l][c];
			
		for(l=0; l<TF; l++)
		{
			for(c=0;c<TF;c++)
			{
				printf("%d ", mat3[l][c]);
			}
			printf("\n");
		}
		
	printf("Subtração: \n");
	//subtração
	for(l=0; l<TF; l++)
		for(c=0; c<TF; c++)
			mat3[l][c]=mat[l][c]-mat2[l][c];
			
		for(l=0; l<TF; l++)
		{
			for(c=0;c<TF;c++)
			{
				printf("%d ", mat3[l][c]);
			}
			printf("\n");
		}
		
	printf("Divisão: \n");
	//divisao
	for(l=0; l<TF; l++)
		for(c=0; c<TF; c++)
			mat3[l][c]=mat[l][c]/mat2[l][c];
			
		for(l=0; l<TF; l++)
		{
			for(c=0;c<TF;c++)
			{
				printf("%d ", mat3[l][c]);
			}
			printf("\n");
		}
	
	printf("Multiplicação: \n");
	//multiplicação
	for(l=0; l<TF; l++)
		for(c=0; c<TF; c++)
		{
			s=0;
			for(k=0; k<TF;k++)
				s=s+mat[l][k]*mat2[k][c];
			mat3[l][c]=s;
		}
		for(l=0; l<TF; l++)
		{
			for(c=0;c<TF;c++)
			{
				printf("%d ", mat3[l][c]);
			}
			printf("\n");
		}
	
}
