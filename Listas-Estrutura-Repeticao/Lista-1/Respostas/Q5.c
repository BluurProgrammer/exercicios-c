#include <stdio.h>

int main()
{
	char nome[50];
	float valorCompras;
	float bonus;

	for (i = 0; i < 15; i++)
	{
		printf("Informe seu nome: ");
		scanf("%s", nome);
		printf("Informe o valor de suas compras: ");
		scanf(" %f", &valorCompras);
		bonus = valorCompras < 1000 ? valorCompras * 0.10 : valorCompras * 0.15;
		printf("Bonus: %.2f\n", bonus);
	}
	
	return 0;
}