#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int qtde;
	char nome[30], nome2[30], i;	
	
	gets(nome);
	
	qtde=0;
	while (nome[qtde]!='\0')
		qtde++;
	
	printf("%d\n\n", qtde);
	
	strcpy(nome2, nome);
	
	for(i=0; i<strlen(nome); i++)
	{
		nome2[i] = toupper(nome[i]);
	}
	nome2[i] = '\0';
	puts(nome2);
}
