#include <stdio.h>

int main()
{
	int div, num, soma, quant=0;
	for(num=1; num<=100; num++)
	{
		soma=0;
		for(div=1; div<num; div++)
		{
			if(num%div==0)
				soma=soma+div;
			quant++;
		}
		
		if(num==soma)
			printf("%d eh um numero perfeito\n", num);
	}
	
	printf("%d", quant);
}
