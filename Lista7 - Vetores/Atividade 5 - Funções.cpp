#include <stdio.h>
#define TF 3

void LeVetor (int v[TF],float vPreco[TF])
{
    int i;

    for(i=0;i<TF;i++)
    {
        printf("Vendedor %d, Digite a Qtde pecas\n",i+1);
        scanf("%d",&v[i]);
        printf("Digite o Preco das peca\n");
        scanf("%f",&vPreco[i]);
    }
}

void calc (int v[TF],float vet2[TF], float vPreco[TF] ,int &s)
{
    int i;

    for(i=0;i<TF;i++)
    {
        vet2[i]=v[i]*vPreco[i];
        s+=v[i];
    }

}

void Exibe (float vet2[TF], int &s)
{
        int i;

        for(i=0;i<TF;i++)
        printf("O total de vendas do Vendedor %d eh %.2f\n",i+1,vet2[i]);


        printf("O total de vendas eh %d\n",s);
}

void exc (void)
{
    float vet2[TF],vPreco[TF];
    int vet[TF],s=0;

    LeVetor(vet,vPreco);
    calc(vet,vet2,vPreco,s);
    Exibe(vet2,s);

}


int main ()
{

    exc();

}
