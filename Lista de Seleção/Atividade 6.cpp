#include <Stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char resp;
	
	printf("É mamifero?\n");
	scanf("%c", &resp);
	if(resp == 'S' || resp == 's')
	{
		
			printf("É quadrupede?\n");
			fflush(stdin);
			scanf("%c", &resp);
			
				if(resp == 'S' || resp == 's')
				{
					printf("E carnivoro?\n");
					fflush(stdin);
					scanf("%c", &resp);
					if(resp == 'S' || resp == 's')
					printf("O animal é um leao\n");
				  else
			      {
 				  printf("É herbivoro?\n");
				  fflush(stdin);
				  scanf("%c", &resp);
				  if (resp == 'S' || resp == 's')
					printf("O animal é um cavalo");
				  else
					printf("O animal é desconhecido");	
			      }	
				}
			      else
				  {
				 printf("É bipede?\n");
				 fflush(stdin);
				 scanf("%c", &resp);
				
				 if(resp == 'S' || resp == 's')
				 {
						printf("É Onivoro?\n");
						fflush(stdin);
						scanf("%c", &resp);
						if(resp == 'S' || resp == 's')
						printf("É um homem");
					else
					{
						printf("É frufiteiro?\n");
						fflush(stdin);
						scanf("%c", &resp);
						if(resp == 'S' || resp == 's')
							printf("O animal é um macaco");
						else
							printf("O animal é desconhecido");
					}
				 }
				 else
				 {
					printf("É voador?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("É Morcego\n");
							
					}
					
					else
					
					printf("É aquatico?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("É baleia\n");
							
					}
						else{
							printf("O animal é desconhecido");
						}
				
				 }
			
				}
			
			
	
	}
	else
	{
	printf("É uma ave??\n");
	fflush(stdin);
	scanf("%c", &resp);
	if(resp == 'S' || resp == 's')
	{
		printf("É não voador?\n");
			fflush(stdin);
			scanf("%c", &resp);
			
				if(resp == 'S' || resp == 's')
		{
				printf("É tropical?\n");
				fflush(stdin);
				scanf("%c", &resp);
				if(resp == 'S' || resp == 's')
				printf("O animal é um avestruz\n");
				else
			    {
 				printf("É e polar?\n");
				fflush(stdin);
				scanf("%c", &resp);
				if (resp == 'S' || resp == 's')
					printf("O animal é um pinguin");
				else
					printf("O animal é desconhecido");	
			    }	
		}
		else
				  {
				 printf("É nadador?\n");
				 fflush(stdin);
				 scanf("%c", &resp);
				
				 if(resp == 'S' || resp == 's')
				 {
						if(resp == 'S' || resp == 's')
						printf("É um pato");
					else
					{
						if(resp == 'S' || resp == 's')
							printf("O animal é desconhecido");
					}
				 }
				 else
				 {
					printf("É uma ave de rapina?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("É uma águia\n");
							
					}
						else{
							printf("O animal é desconhecido\n");
						}
						


}
}
}
	else
	printf("É um reptil?\n");
	fflush(stdin);
	scanf("%c", &resp);
	if(resp == 'S' || resp == 's')
	{
		printf("tem casco?\n");
			fflush(stdin);
			scanf("%c", &resp);
			
				if(resp == 'S' || resp == 's')
				{
				printf("O animal é uma tartaruga\n");	
			    }	
				else
				  {
				 printf("É carnivoro?\n");
				 fflush(stdin);
				 scanf("%c", &resp);
				
				 if(resp == 'S' || resp == 's')
				 {
						if(resp == 'S' || resp == 's')
						printf("É um crocodilo");
					else
					{
						if(resp == 'S' || resp == 's')
							printf("O animal é desconhecido");
					}
				 }
				 else
				 {
					printf("Não tem patas?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("É uma cobra\n");
								
					}
						else{
							printf("O animal é desconhecido");
						}
				 }
				 }
    }
    }
}

