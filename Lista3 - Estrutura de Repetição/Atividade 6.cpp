#include <stdio.h>

int main()
{
	int cod, result;
	float salario, salario_reajustado;
	
	printf("Insira 0 para encerrar\n");
	
	printf("--------------------------------------------------------------------------------\n");
	
	printf("Insira o codigo: ");
	scanf("%d", &cod);
	
	while(cod >0 && cod <6){
		printf("Insira seu salario: \n");
	    scanf("%f", &salario);
	        
		if(cod == 1)
		{
	        printf("O aumento do salario foi de 50%%\n");
			printf("Seu cargo e: Escrituario\n");
			result = salario*50/100;
			salario_reajustado = salario+result;
			printf("Seu salario reajustado e: %.2f\n", salario_reajustado);
		}
		
		if(cod == 2){
			printf("Seu cargo e: Secretario\n");
			printf("O aumento do salario foi de 35%%\n");
			result = salario*35/100;
			salario_reajustado = salario+result;
			printf("Seu salario reajustado e: %.2f\n", salario_reajustado);
        }
        if(cod == 3){
        	printf("Seu cargo e: Caixa\n");
        	printf("O aumento do salario foi de 20%%\n");
        	result = salario*20/100;
        	salario_reajustado = salario+result;
        	printf("Seu salario reajustado e: %.2f\n", salario_reajustado);
		}
		if(cod == 4){
			printf("Seu cargo e: Gerente\n");
			printf("O aumento do salario foi de 10%%\n");
			result = salario*10/100;
			salario_reajustado = salario+result;
			printf("Seu salario reajustado e: %.2f\n", salario_reajustado);
		}
		if (cod == 5){
			printf("Seu cargo e: Diretor\n");
			printf("Nao tem aumento de salario\n");
		}
}
}
