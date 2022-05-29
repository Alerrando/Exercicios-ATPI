#include <Stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double salarioM, Vhoras, SalM, salB, salL, depenA, ValoresH, grat;
	int depen, horasT, horasE, func;
	char encerrar[8];
	
	printf("Insira o seu salário mínimo: \n");
	scanf("%lf", &salarioM);
	
	printf("Insira a quantidade de funcionários na empresa: \n");
	scanf("%d", &func);
	
	while(1){
		
		printf("Insira suas horas trabalhadas: \n");
		scanf("%d", &horasT);
		
		printf("Insira se você fez horas extras: \n");
		scanf("%d", &horasE);
	
		printf("Insira suas depedentes: \n");
		scanf("%d", &depen);
		
		Vhoras = 0.2*salarioM;
		SalM = Vhoras*horasT;
		depenA = depen*32.00;
		ValoresH = Vhoras+(horasE/0.50);
		salB = SalM+depenA+ValoresH;
		
		if(salB <200.00){
			salL = salB;
			}else if(salB >=200.00 && salB <500.00){
						salL = salB-0.10;
							}else if(salB >=500.00){
								salL = salB-0.20;
							}
		if(salL <=350.00){
			grat = salL+100.00;
						}else if(salL >350.00){
					grat = salL+50.00;
					 }
		scanf("%s", encerrar);
    	if(strcmp(encerrar,"FIM") == 0)
    	break;
		printf("Seu salário é: %.2lf\n", grat);
		printf("Insira o seu salário mínimo: \n");
		scanf("%lf", &salarioM);	
	}
	
	
}
