#include <stdio.h>

int main ()
{
    int i,cont1=0,cont2=0,num;

    for(i=0; i<10; ++i)
    {
        printf("Digite um numero\n");
        scanf("%d",&num);


        i++;

        if(num %2==0)
            cont1++;
        else
            cont2;
    }
    printf("Qtd numeros pares eh %d\n",cont1);
    printf("Qtd numeros impares eh %d\n",cont2);

}
