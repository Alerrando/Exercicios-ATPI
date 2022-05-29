#include <Stdio.h>

int main()
{

  	int num1;
  	int num2;
  	
  	printf ("Digite um numero: \n");
  	scanf("%d", &num1);
  	printf ("digite um numero: \n");
  	scanf("%d", &num2);
  	
  	if (num1 == num2){
  		printf ("os numeros são iguais", num1, num2); 		
       }else{
       	printf("o maior e: %i", num1, num2);
	   }
    
    
	return 0;
}
