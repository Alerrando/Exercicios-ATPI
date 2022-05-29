#include <stdio.h>

int main()
{
	int i, cont1=0, cont2=0, num1, num2;
	
	for(i=0; i<10;++i)
	{
	printf("Insira o primeiro numero: \n");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: \n");
	scanf("%d", num2);
	
	i++;
	
	if(num1 %i == 0){
		cont1++;
		break;
}
	if(num2 %i == 0){
		cont2++;
		break;
}
	if (cont1 == 0){
		printf("e um numero primo: %d", num1);
	} 
	if(cont2 == 0){
		printf("e um numero primo: %d", num2);
	}
}	
}
