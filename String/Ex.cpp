#include <stdio.h>
#include <string.h>
#define TF 30

int main()
{
	int qtde;
	char nome1[TF], nome2[TF], i;
	
	gets(nome1);
	gets(nome2);
	
	//Meu strcmp(nome1, nome2)
	i=0;
	while(i<strlen(nome1) && i<strlen(nome2) && nome1[i] == nome2[i])
	{
		i++;
	}
	
	if(i==strlen (nome1) && i == strlen(nome2))
		printf("As duas strings são iguais\n");

	else
	if((i<strlen(nome1) && i<strlen(nome2) && nome1[i] > nome2[i]) || i==strlen(nome2))
		printf("A primeira string eh maior que a segunda\n");
		
	else
		printf("A segunda string eh maior que a primeira\n");
}
