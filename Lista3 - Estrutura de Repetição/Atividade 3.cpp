#include <stdio.h>

int main ()
{

    int i,num,maior=0,menor=99999;


    printf("Digite um  numero\n");
    scanf("%d", &num);

    while(num>0)
    {
        if(num > maior)
            maior = num;

        if(num < menor)
            menor = num;


        printf("Digite um  numero\n");
        scanf("%d",&num);

    }

    printf("O maior numero eh %d\n", maior);
    printf("O menor numero eh %d\n", menor);
        if(num<0)
        printf("Numeros negativos sao invalidos");
}
