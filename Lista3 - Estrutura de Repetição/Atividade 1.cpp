#include <stdio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
       int cont=1, idade, maior=0;
     
     while (cont<=10) 
	 {
           printf (" informe a idade de 10 pessoas: \n");
           scanf ("%i", &idade);
           cont++;
           
           if (idade >=18) 
	    {
              maior++;
           }
    }
           printf (" %i pessoas s�o maiores de 18 anos \n", maior);
}
