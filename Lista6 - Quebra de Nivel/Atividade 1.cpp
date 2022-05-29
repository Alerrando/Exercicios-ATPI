#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int nf, cod, quant, maior_qt=0, cod_ma_q, menor_qt=9999999, cod_me_q, precouM=0, precouMe=999999;
	float precou, total, total_nf, total_vendas=0;
	
	printf("Nota fiscal:\n");
	scanf("%d", &nf);
	
	while(nf>0)
	{
		total_nf = 0;
		
		printf("Cod. Produto\n");
		scanf("%d", &cod);
		
		while(cod>0)
		{
			printf("Quant: \n");
			scanf("%d", &quant);
			
			printf("Preco Unit: \n");
			scanf("%f", &precou);
			
			total = precou*quant;
			printf("Total: %.2f\n", total);
			printf("--------------------------------------------------------------------------------\n");
			total_nf = total_nf+total;
			
			if(quant > maior_qt)
			{	maior_qt = quant;
				cod_ma_q = cod;
				precouM = precou;
			}
			
			if(quant < menor_qt)
			{
				menor_qt = quant;
				cod_me_q = cod;
				precouMe = precou;
			}
				
			
			
		printf("Cod. Produto\n");
		scanf("%d", &cod);
		}
	printf("Total Nota: %.2f\n", total_nf);
	total_vendas = total_vendas+total_nf;
	
	printf("O produto com a maior quantidade de venda é %d\n", cod_ma_q);
	printf("A maior quantidade de produto é %d\n", maior_qt);
	
	printf("O produto com a menor quantidade de venda é %d\n", cod_me_q);
	printf("A menor quantidade de produto é %d\n", menor_qt);
	
	printf("O Produto com o menor preço é %d\n", precouMe);
	printf("O Produto com o maior preço é %d\n", precouM);
	
	printf("Nota fiscal:\n");
	scanf("%d", &nf);
	}
	
	
	if(precou > precouM)
	{
		precouM = precou;
	}
	
	if(precou < precouMe)
	{
		precouMe = precou;
	}
	
	printf("O Produto com o maior preço em todas as notas é %d\n", precouM);
	printf("O Produto com o menor preço em todas as notas é %d\n", precouMe);
	
	printf("Total de Vendas: %.2f\n", total_vendas);
	
	
	
}
