#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char svalor[]="327.39";
	float valor;
    int i, mult, dec=0, num=0;
    
    i=strlen(svalor)-1;
    mult=1;
    
    while(i>0 && svalor[i]!='.')
    {
    	dec = dec + (svalor[i] - 48)*mult;
    	mult= mult*10;
    	i--;
    }
    valor = (float)dec/mult;
    i--;
    mult=1;
    while(i>=0)
    {
    	num = num + (svalor[i] - 48)*mult;
    	mult = mult*10;
    	i--;
    }
    valor = valor+num;
    
    printf("%.3f\n", valor);
  //  valor = atoi(svalor);
  //  printf("%d",valor);
}
