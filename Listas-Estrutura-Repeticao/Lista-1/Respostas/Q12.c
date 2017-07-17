#include <stdio.h>

int main()
{
	int i,idade, qtdIdadeAcima50 = 0, qtdAltura10a20Anos = 0;
	float altura, peso, mdAltura10a20Anos = 0, totalPeso = 0, totalPeso40 = 0, percentPeso40;
	
	for (i = 0; i < 25; i++)
	{
		printf("\nInforme sua idade: ");
		scanf(" %d", &idade);
		printf("Informe sua altura: ");
		scanf(" %f", &altura);
		printf("Informe seu peso: ");
		scanf(" %f", &peso);
		
		totalPeso += peso;
		
		if (peso < 40)
			totalPeso40 += peso;

		if (idade > 50)
			qtdIdadeAcima50++;
		else if (idade >= 10 && idade <= 20)
		{
			mdAltura10a20Anos += idade;
			qtdAltura10a20Anos++;
		}
	}
	
	mdAltura10a20Anos /= qtdAltura10a20Anos;
	percentPeso40 = totalPeso40 / totalPeso * 100;
	
	printf("\nQuantidade de pessoas acima de 50 anos -> %d\n", qtdIdadeAcima50);
	printf("Media da altura entre as pessoas de 10 a 20 anos -> %.2f\n", mdAltura10a20Anos);
	printf("Percentual de pessoas com peso inferior a 40 quilos -> %.2f", percentPeso40);
	
	return 0;
}