#include <Stdio.h>

int main()
{
	float sal;
	int horasEx, horasT;
	
	printf("Digite o valor de horas trabalhadas: ");
	scanf("%d", &horasT);
	
	if (horasT > 44){
		horasEx = horasT - 44;
		sal = 44*20.0 + horasEx*30.0;
		printf("Salario: %f", sal);
}
    if (horasT < 44){
		sal = horasT*20.0;
	    printf("Salario: %f", sal);
}
	
	return 0;
}
