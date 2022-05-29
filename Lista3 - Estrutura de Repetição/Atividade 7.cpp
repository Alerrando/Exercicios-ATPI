#include <stdio.h>

int main()
{
	int idade, id, grup_risc;
	
	printf("Digite 0 para encerrar\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf("Insira sua idade: ");
		scanf("%d", &id);
		
	while(id>=18 && id <=70)
	{
		printf("Insira seu grupo de risco: ");
			scanf("%d", &grup_risc);
			
		if(id >= 18 &&  id <=24){
			if(grup_risc == 7)
				printf("Seu grupo de risco e: Baixo\n");

		    if(grup_risc == 8)
		    	printf("Seu gurpo de risco e: Medio\n");

		    if(grup_risc == 9)
		    	printf("Seu gurpo de risco e: Alto\n");
		    	printf("--------------------------------------------------------------------------------\n");
	}
	
		if(id >=25 && id <=40){
			if(grup_risc == 4)
				printf("Seu grupo de risco e: Baixo\n");
				
			if(grup_risc == 5)
		    	printf("Seu gurpo de risco e: Medio\n");

		    if(grup_risc == 6)
		    	printf("Seu gurpo de risco e: Alto\n");
		    	printf("--------------------------------------------------------------------------------\n");
		}
		
		if(id >=41 && id <=70){
			if(grup_risc == 1)
				printf("Seu grupo de risco e: Baixo\n");
				
		    if(grup_risc == 2)
		    	printf("Seu gurpo de risco e: Medio\n");
		    	
		    if(grup_risc == 3)
		    	printf("Seu gurpo de risco e: Alto\n");
		    	printf("--------------------------------------------------------------------------------\n");
		    	
		}	
	printf("Insira sua idade: ");
		scanf("%d", &id);		
		}
}
