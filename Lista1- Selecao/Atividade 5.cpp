#include <Stdio.h>

int main()
{

  	int num1, num2, num3;
	   	
  	printf ("Digite um numero: \n");
  	scanf("%i", &num1);
  	
  	printf ("digite um numero: \n");
  	scanf("%i", &num2);
  	
  	printf("digite um numero: \n");
  	scanf("%i", &num3);
  	
  	if (num1 > num2 && num1 > num3)
  		printf ("o maior e: %i\n", num1); 	
		  	
    if (num2 > num1 || num2 > num3)
       	printf("o maior e: %i\n", num2);
       	
    if (num3 > num1 && num3 > num2)
	   	printf("o maior e: %i\n", num3);
       

	return 0;
}
