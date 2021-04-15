#include <stdio.h>

int main()
{
	float numero, inverso;
	
	printf("Digite o numero real: ");
	scanf("%f",&numero);
	
	inverso = 1/numero;
	
	printf("O numero real é %.1f já seu inverso é = %.2f ",numero ,inverso);
	
	return 0;
}