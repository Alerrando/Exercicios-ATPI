#include <Stdio.h>

int main(){
	int a, b, c;
	
	printf("Digite os valores: \n");
	scanf("%d%d%d", &a, &b, &c);
	
	//Para se forma um triângulo a soma dos primeiros valores tem que ser maior que o terceiro
	
	if(a + b > c && a + c > b && b + c > a){
		printf("Os 3 lados foram um triangulo\n");
		if(a == b && a == c)
			printf("Equilatero\n");
		else
			if(a == b || a == c || b == c)
				printf("Isosceles\n");
			else
				printf("Escaleno\n");
	
	}
	else
		printf("Os 3 lados nao formam um triangulo");
	
	
}
