#include <Stdio.h>

int main()
{

  	int num1;
  	int num2;
  	
  	printf ("Digite um numero: \n");
  	scanf("%i", &num1);
  	printf ("digite um numero: \n");
  	scanf("%i", &num2);
  	
  	if (num1 > num2){
  		printf ("o maior e: %i", num1); 		
       }else{
       	printf("o maior e: %i", num2);
	   }
    
    
	return 0;
}
