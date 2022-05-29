#include <stdio.h>
#define TH 12

int main()
{
    int vet[TH], maiorT = 0, menorT=9999, cont=0, cont2=0,i;



    for(i=0; i<TH; i++)
    {
        printf("Qual a temperatur do mes %d: \n", i+1);
        scanf("%d", &vet[i]);

        if(vet[i] > maiorT)
        {
            maiorT = vet[i];
            cont++;
        }

        if(vet[i] < menorT)
        {
            menorT = vet[i];
            cont2++;
        }
    }

    printf("Sua temperatura foi %d, seu mes eh %d\n", maiorT, cont);
    printf("Sua menor temperatura foi %d  , seu mes eh %d\n",menorT,cont2);
}
