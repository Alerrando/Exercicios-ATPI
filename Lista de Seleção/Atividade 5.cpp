#include <Stdio.h>

int main(){
	
	int idade, ano_cont, matricula;
	char sexo;
	float sal_base, salarioF, reajuste, desconto = 0, acrescimo = 0;
	
	printf("Idade: \n");
	scanf("%d", &idade);
	
	printf("Sexo (M/F): \n");
	fflush(stdin);
	scanf("%c", &sexo);
	
	printf("Salario base: \n");
	scanf("%f", &sal_base);
	
	printf("Ano de contratação: \n");
	scanf("%d", &ano_cont);
	
	printf("Matricula: \n");
	scanf("%d", &matricula);
	
	if(idade>=18 && idade <=39){
		
		if(sexo == 'M' || sexo == 'm')
		{
			reajuste = sal_base*0.10;
			
			if(2021-ano_cont <=10)
			
				desconto = 10.00;
			else
				acrescimo = 17.00;
		}
		else
		{
			reajuste = sal_base*0.08;
			
			if(2021-ano_cont <=10)
			
				desconto = 11.00;
			else
				acrescimo = 16.00;
		}
	}
	if(idade>=40 && idade <=69){
		
		if(sexo == 'M' || sexo == 'm')
		{
			reajuste = sal_base*0.08;
			
			if(2021-ano_cont <=10)
			
				desconto = 5.00;
			else
				acrescimo = 15.00;
		}
		else
		{
			reajuste = sal_base*0.10;
			
			if(2021-ano_cont <=10)
			
				desconto = 7.00;
			else
				acrescimo = 14.00;
		}
	}
	if(idade>=70 && idade <=99){
		
		if(sexo == 'M' || sexo == 'm')
		{
			reajuste = sal_base*0.15;
			
			if(2021-ano_cont <=10)
			
				desconto = 15.00;
			else
				acrescimo = 13.00;
		}
		else
		{
			reajuste = sal_base*0.17;
			if(2021-ano_cont <=10)
			
				desconto = 17.00;
			else
				acrescimo = 12.00;
		}	
	}
	salarioF = sal_base + reajuste - desconto + acrescimo;
	printf("Idade: %d\nSexo: %c\n", idade, sexo);
	printf("Salario Base: %.2f\nAno contratacao: %d\nMatricula: %d\n", sal_base, ano_cont, matricula);
	printf("Novo Salario: %.2f\n", salarioF);
	}

