#include <stdio.h>

int main()
{
	int pergunt;
	float acerto, porcent;
	
	printf("Quantas perguntas foram feitas?\n");
	scanf("%d", &pergunt);
	
	while(pergunt >0)
	{
		printf("Quantas Voce acertou\n");
		scanf("%f", &acerto);
		
		porcent = acerto/100*100;
		
		if(porcent >=0 && porcent <=19)
		{
			printf("Voce foi pessimo, estude, estude e estude muito!!!\n", porcent);
		}
		else
		
		if(porcent >=20 && porcent <=39)
		{
			printf("Voce nao foi nada bem, estude muito!\n", porcent);
		}
		else
		
		if(porcent >=40 && porcent <=54)
		{
			printf("Voce nao foi muito bem, procure estudar!\n", porcent);
		}
		else
		
		if(porcent >=55 && porcent <=69)
		{
			printf("Voce bem, mas procure melhor!\n", porcent);
		}
		else
		
		if(porcent >=70 && porcent <=89)
		{
			printf("Voce foi muito bem, melhore sempre!\n", porcent);
		}
		else
		
		if(porcent >=90 && porcent ==100)
		{
			printf("Parabens, voce teve otimos resultados!\n", porcent);
		}
		
		printf("Quantas perguntas foram feitas?\n");
		scanf("%d", &pergunt);
	}

}
