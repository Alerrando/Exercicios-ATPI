#include<math.h>
#include<stdio.h>
#include<string.h>
#define pi 3.1415

int main(){

float precolata, altura, arealateral, areadabase, areatotal, custo;
int raio, quantidadelatas;

scanf("%d",&raio);
scanf("%f",&altura);

areadabase = pi * pow(raio,2);
arealateral = 2 * pi * raio * altura;
areatotal = (2 * areadabase) + arealateral;

quantidadelatas = areatotal / 5;
custo = quantidadelatas * 50.00;

printf("QUANTIDADE DE LATAS = %d\n",quantidadelatas);
printf("CUSTO = %.2f\n",custo);
}
