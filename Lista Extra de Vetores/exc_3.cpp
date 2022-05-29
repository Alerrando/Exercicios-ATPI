#include<stdio.h>
#include<string.h>
#define TF 2

int main()
{
    char vetNomes[TF][15];
    int vetContas[TF],i,op,verifConta,pos;
    float vetSaldos[TF],valor,somaSaldos,juros;

    for(i=0;i<TF;i++)
    {
        printf("Codigo da conta:\n");
        scanf("%d",&vetContas[i]);
        printf("Nome do cliente:\n");
        fflush(stdin);
        gets(vetNomes[i]);
        printf("Saldo da conta:\n");
        scanf("%f",&vetSaldos[i]);
    }
    do
    {
       printf("\n  *** Controle Bancario ***\n");
       printf("1 - Efetuar deposito\n");
       printf("2 - Efetuar saque\n");
       printf("3 - Consultar o ativo bancario\n");
       printf("4 - Aplicar porcentagem de juros mensal\n");
       printf("5 - Finalizar programa\n");
       printf("Escolha uma opcao: ");
       scanf("%d",&op);
       pos = 0;
       somaSaldos = 0;
       switch(op)
       {
           case 1:  printf("Codigo da conta: ");
                    scanf("%d",&verifConta);
                    while(pos<TF && verifConta != vetContas[pos])
                        pos++;
                    if(pos<TF)
                    {
                        printf("Valor do deposito: ");
                        scanf("%f",&valor);
                        printf("Cliente: %s\n",vetNomes[pos]);
                        printf("Saldo atual: R$%.2f\n",vetSaldos[pos]);
                        vetSaldos[pos] = vetSaldos[pos] + valor;
                        printf("Saldo atualizado: R$%.2f\n",vetSaldos[pos]);
                    }
                    else
                        printf("Conta nao encontrada.\n");
                    break;
           case 2:  printf("Codigo da conta: ");
                    scanf("%d",&verifConta);
                    while(pos<TF && verifConta!=vetContas[pos])
                        pos++;
                    if(pos<TF)
                    {
                        printf("Valor do saque: ");
                        scanf("%f",&valor);
                        if(vetSaldos[pos]>valor)
                        {
                            printf("Cliente: %s\n",vetNomes[pos]);
                            printf("Saldo atual: R$%.2f\n",vetSaldos[pos]);
                            vetSaldos[pos] = vetSaldos[pos] - valor;
                            printf("Saldo atualizado: R$%.2f\n",vetSaldos[pos]);
                        }
                        else
                            printf("Saldo insuficiente.\n ");
                    }
                    else
                        printf("Conta nao encontrada.\n");
                    break;
           case 3:  for(i=0;i<TF;i++)
                        somaSaldos+=vetSaldos[i];
                    printf("Ativo bancario: R$%.2f\n",somaSaldos);
                    break;
           case 4:  printf("Percentual de juros mensal: ");
                    scanf("%f",&juros);
                    for(i=0;i<TF;i++)
                        vetSaldos[i] += vetSaldos[i]*(juros/100);
                    printf("Juros aplicados.\n");
                    break;
           default: if(op<1||op>5)
                        printf("Opcao invalida.\n");
                    
       }
    } while (op!=5);
    printf("Programa encerrado.\n");
}