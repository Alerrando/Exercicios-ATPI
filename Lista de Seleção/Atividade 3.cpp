#include <Stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double dinheiro, dinheiroF, juros;
	int precoP, x;
	float precoF, precoAP;
	
	printf("Insira a quantidade de dinehiro: \n");
	scanf("%lf", &dinheiro);
	
	printf("Insira o pre�o do produto: \n");
	scanf("%d", &precoP);
	
	printf("Escolha umas das formas de pagamento.\n1-Dinheiro ou cheque.\n2-Cart�o de cr�dito.\n3-Em 2 vezes sem desconto.\n4-Em 3 vezes\n");
	scanf("%d", &x);
	
	if(x == 1){
		precoF = precoP*0.10;
		precoAP = precoP-precoF;
		printf("Seu desconto � de %.2f\n", precoF);
		printf("O Total a se pagar �: %.2f\n", precoAP);
		dinheiroF = dinheiro-precoAP;
		printf("Seu troco  %.2lf", dinheiroF);


		}else if(x ==2){
			precoF = precoP*0.05;
			precoAP = precoP-precoF;
			printf("Seu desconto � de %.2f\n", precoF);
			printf("O Total a se pagar �: %.2f\n", precoAP);
			dinheiroF = dinheiro-precoAP;
			printf("Voc� tera que pagar %.2lf", dinheiroF);
			
				}else if(x == 3){
					dinheiroF= dinheiro-precoP;
					printf("Sem desconto\n");
					printf("Voc� tera que pagar %.2lf", dinheiroF);
					
								}else if(x==4){
									precoF = precoP*0.10;
									precoAP = precoP+precoF;
									juros = dinheiro-precoAP;
									printf("Seu juros ser� de %.2f\n", precoF);
									printf("Total a pagar %.2f\n", precoAP);
									printf("Voc� tera que pagar %.2lf", juros);
								}
								
}
