#include <stdio.h>
#include <math.h>

int main()
{

int a,num1,num2, soma, raiz;


  printf("1-soma\n2-Raiz Quadrada\n0-Finalizar\n");
  scanf("%d", &a);
  while(a>0)
{  
if (a == 1)
{
printf("Digite o primeiro numero: \n");
scanf("%d", &num1);
printf("Digite o segundo numero: \n");
scanf("%d", &num2);
soma = num1 + num2;
printf("R: %d \n", soma);
}
if (a == 2)
{
printf("Digite o primeiro numero: \n");
scanf("%d", &num1);
raiz = sqrt(num1);
printf("%d\n", raiz);
}
printf("1-soma\n2-Raiz Quadrada\n0-Finalizar\n");
scanf("%d", &a);
}
}
