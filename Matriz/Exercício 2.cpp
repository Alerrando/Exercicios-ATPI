#include<stdio.h>
#include<locale.h>
#define TF 5
#define TFC 4

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float matEst[TF][TFC], soma, vetCusto[TF], total, total2;
	int l, c, maiorE=0, maiorE2=0, menorE=999999, menorE2=0, i;
	
	for(c=0; c<TFC; c++)
	{
		printf("Produto: %d\n", c+1);
		for(l=0; l<TF-1; l++)
		{
			printf("Quant. em estoque no Armazem %d: \n", l+1);
			scanf("%f", &matEst[l][c]);
		}
		printf("Custo do Produto: \n");
		scanf("%f", &vetCusto[c]);
		printf("---------------------------------------------------------\n");
		
		
	}
	//A quantidade de itens armazenados em cada armazem
	for(l=0; l<TF-1; l++)
	{
		soma=0;
		for(c=0; c<TFC; c++)
			soma=soma+matEst[l][c];
		
		printf("Quant. de itens no armazem %d eh %0.f\n", l+1, soma);
	}
	
	//Qual armazém possui maior estoque do produto 2
	
    for(l=0; l<TF-1 ;l++)
    {
        if(matEst[l][1]>maiorE)
        {
            maiorE = matEst[l][1];
            maiorE2 = l;
        }
    }
    printf("Armazem com maior estoque do produto 2 é o Armazem %d\n", maiorE2);
    
    //Qual armazém possui menor estoque do produto 4
    for(l=0; l<TF-1 ;l++)
    {
        if(matEst[l][3]<menorE)
        {
            menorE = matEst[l][3];
            menorE2 = l;
        }
    }
    printf("Armazem com menor estoque do produto 4 é o Armazem %d\n", menorE2);
    printf("---------------------------------------------------------\n");
    
    //Qual o custo total de cada produto
    for(c=0; c<TFC; c++)
	{
		total2=0;
		total=0;
		for(l=0; l<TF-1; l++)
		{
			total = total+matEst[l][c];
		}
		total2 = total*vetCusto[c];
		printf("O custo total do produto %d eh %2.f\n", c+1, total2);
	}
    
    //Qual o custo total de cada armazém
    for(l=0; l<TF-1; l++)
	{
		total2=0;
		total=0;
		for(c=0; c<TFC; c++)
		{
			total = total+matEst[l][c];
		}
		total2 = total*vetCusto[c];
		printf("O custo total do armazem %d eh %2.f\n", c+1, total2);
	}
}
