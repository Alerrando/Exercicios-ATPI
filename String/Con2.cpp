#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int num=739, resto, TL=0, i,j;
	char snum[20], aux;
	
	while(num>0)
	{
		resto=num%10;
		snum[TL]=resto+48;
		TL++;
		num=num/10;
	}
	snum[TL]='\0';
	for(i=0, j=TL-1; i<j ;i++, j--)
	{
		aux=snum[i];
		snum[i]=snum[j];
		snum[j]=aux;
	}
	printf("%s\n", snum);
}
