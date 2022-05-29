#include <Stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	double depedentes, salario, ajuste, idade, anoA, anoC, novo, tempo, depen,anoCasa ;
	
	printf("Digite seu salario: \n");
	scanf("%lf", &salario);
	
	printf("Digite o ano atual e o ano que foi contratado: \n");
	scanf("%lf %lf", &anoA, &anoC);
	
	printf("Digite o numero de depedentes: \n");
	scanf("%lf", &depedentes);
	
	tempo = anoC - anoA;
	
	if(idade >25){
		ajuste = 0.01*salario*(idade-25);
		
		depen = 0.05*salario*depedentes;
		
		anoCasa = 0.03*salario*tempo;
		
		novo = ajuste+depen+anoCasa+salario;
		printf("Seu novo salario é: %.2lf\n", novo);
	}
		else{
			depen = 0.05*salario*depedentes;
			anoCasa = 0.03*salario*tempo;
			novo = salario+depen+anoCasa;
			printf("Seu novo salario é: %.2lf\n", novo);

		}
}
