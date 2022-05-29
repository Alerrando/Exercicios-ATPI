#include <stdio.h>

int main()
{
	int h, horasE, horasF, horasEM, horasFM;
	
	printf("Isnira suas horas extras: ");
	scanf("%d", &horasE);
	
	while(h>=0)	
	{
	printf("Insira suas horas faltas: ");
	scanf("%d", &horasF);
	
	h = (horasE) - (0.667*(horasF));
	horasEM = horasE*60;
	horasFM = horasF*60;
	
	if(h <=600)
	{
	printf("Seu premio e: 100.00\n");
	printf("Suas horas extras em minutos e: %d\n", horasEM);
	printf("Suas horas faltas em minutos e: %d\n", horasFM);
	printf("------------------------------------------------------------------------------\n");
	}
	
	if(h >600 && h<=1200)
	{
	printf("Seu premio e: 200.00\n");
	printf("Suas horas extras em minutos e: %d\n", horasEM);
	printf("Suas horas faltas em minutos e: %d\n", horasFM);
	printf("------------------------------------------------------------------------------\n");
	}
	
	if(h>1200 && h<=1800)
	{
	printf("Seu premio e: 300.00\n");
	printf("Suas horas extras em minutos e: %d\n", horasEM);
	printf("Suas horas faltas em minutos e: %d\n", horasFM);
	printf("------------------------------------------------------------------------------\n");
	}
	
	if(h>1800 && h<=2400)
	{
	printf("Seu premio e: 400.00\n");
	printf("Suas horas extras em minutos e: %d\n", horasEM);
	printf("Suas horas faltas em minutos e: %d\n", horasFM);
	printf("------------------------------------------------------------------------------\n");
	}
	
	if(h>2400)
	{
	printf("Seu premio e: 500.00\n");
	printf("Suas horas extras em minutos e: %d\n", horasEM);
	printf("Suas horas faltas em minutos e: %d\n", horasFM);
	printf("------------------------------------------------------------------------------\n");
	}
	
	printf("Isnira suas horas extras: ");
	scanf("%d", &horasE);
	}
	
	
	
}
