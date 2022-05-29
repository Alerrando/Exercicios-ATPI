#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int canal, contC, total1, total2, total3, total4, cont1, cont2, cont3, cont4;
	
	printf("Digite um dos canais que você quer ver\n");
	scanf("%d", &canal);
	
	while(canal >0)
	{
		if(canal == 4)
		{
			cont1++;
		}
		
		if(canal == 5)
		{
			cont2++;
		}
		
		if(canal == 7)
		{
			cont3++;
		}
		
		if(canal == 12)
		{
			cont4++;
		}
	printf("Digite um dos canais que você quer ver\n");
	scanf("%d", &canal);
	
	contC++;
	}
	total1 = (cont1/contC)*100;
	total2 = (cont2/contC)*100;
	total3 = (cont3/contC)*100;
	total4 = (cont4/contC)*100;

	printf("O canal 4 teve %d%% de audiência\n", total1);
	printf("O canal 5 teve %d%% de audiência\n", total2);
	printf("O canal 7 teve %d%% de audiência\n", total3);
	printf("O canal 12 teve %d%% de audiência\n", total4);
}
