#include <Stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char resp;
	
	printf("� mamifero?\n");
	scanf("%c", &resp);
	if(resp == 'S' || resp == 's')
	{
		
			printf("� quadrupede?\n");
			fflush(stdin);
			scanf("%c", &resp);
			
				if(resp == 'S' || resp == 's')
				{
					printf("E carnivoro?\n");
					fflush(stdin);
					scanf("%c", &resp);
					if(resp == 'S' || resp == 's')
					printf("O animal � um leao\n");
				  else
			      {
 				  printf("� herbivoro?\n");
				  fflush(stdin);
				  scanf("%c", &resp);
				  if (resp == 'S' || resp == 's')
					printf("O animal � um cavalo");
				  else
					printf("O animal � desconhecido");	
			      }	
				}
			      else
				  {
				 printf("� bipede?\n");
				 fflush(stdin);
				 scanf("%c", &resp);
				
				 if(resp == 'S' || resp == 's')
				 {
						printf("� Onivoro?\n");
						fflush(stdin);
						scanf("%c", &resp);
						if(resp == 'S' || resp == 's')
						printf("� um homem");
					else
					{
						printf("� frufiteiro?\n");
						fflush(stdin);
						scanf("%c", &resp);
						if(resp == 'S' || resp == 's')
							printf("O animal � um macaco");
						else
							printf("O animal � desconhecido");
					}
				 }
				 else
				 {
					printf("� voador?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("� Morcego\n");
							
					}
					
					else
					
					printf("� aquatico?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("� baleia\n");
							
					}
						else{
							printf("O animal � desconhecido");
						}
				
				 }
			
				}
			
			
	
	}
	else
	{
	printf("� uma ave??\n");
	fflush(stdin);
	scanf("%c", &resp);
	if(resp == 'S' || resp == 's')
	{
		printf("� n�o voador?\n");
			fflush(stdin);
			scanf("%c", &resp);
			
				if(resp == 'S' || resp == 's')
		{
				printf("� tropical?\n");
				fflush(stdin);
				scanf("%c", &resp);
				if(resp == 'S' || resp == 's')
				printf("O animal � um avestruz\n");
				else
			    {
 				printf("� e polar?\n");
				fflush(stdin);
				scanf("%c", &resp);
				if (resp == 'S' || resp == 's')
					printf("O animal � um pinguin");
				else
					printf("O animal � desconhecido");	
			    }	
		}
		else
				  {
				 printf("� nadador?\n");
				 fflush(stdin);
				 scanf("%c", &resp);
				
				 if(resp == 'S' || resp == 's')
				 {
						if(resp == 'S' || resp == 's')
						printf("� um pato");
					else
					{
						if(resp == 'S' || resp == 's')
							printf("O animal � desconhecido");
					}
				 }
				 else
				 {
					printf("� uma ave de rapina?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("� uma �guia\n");
							
					}
						else{
							printf("O animal � desconhecido\n");
						}
						


}
}
}
	else
	printf("� um reptil?\n");
	fflush(stdin);
	scanf("%c", &resp);
	if(resp == 'S' || resp == 's')
	{
		printf("tem casco?\n");
			fflush(stdin);
			scanf("%c", &resp);
			
				if(resp == 'S' || resp == 's')
				{
				printf("O animal � uma tartaruga\n");	
			    }	
				else
				  {
				 printf("� carnivoro?\n");
				 fflush(stdin);
				 scanf("%c", &resp);
				
				 if(resp == 'S' || resp == 's')
				 {
						if(resp == 'S' || resp == 's')
						printf("� um crocodilo");
					else
					{
						if(resp == 'S' || resp == 's')
							printf("O animal � desconhecido");
					}
				 }
				 else
				 {
					printf("N�o tem patas?\n");
					fflush(stdin);
					scanf("%c", &resp);
					
					if(resp == 'S' || resp == 's')
					{
							printf("� uma cobra\n");
								
					}
						else{
							printf("O animal � desconhecido");
						}
				 }
				 }
    }
    }
}

