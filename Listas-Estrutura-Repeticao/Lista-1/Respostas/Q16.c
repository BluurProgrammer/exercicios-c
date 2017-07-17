#include <stdio.h>

int main()
{
	int i, idade, qtdPeso90Altura1_50 = 0, totalPessoas1_90 = 0, totalIdade10e30 =0;
	float peso, altura, mdIdades = 0, percentIdade10a30;
	
	for (i = 0; i < 5; i++)
	{
	    printf("\nInforme sua idade: ");
		scanf(" %d", &idade);
		printf("Informe seu peso: ");
		scanf(" %f", &peso);
		printf("Informe sua altura: ");
		scanf(" %f", &altura);
		
		mdIdades += idade;
		
		if (altura > 1.90)
		{
			totalPessoas1_90++;
			
			if (idade >= 10 && idade <= 30)
				totalIdade10e30++;
		}
		
		else if (altura < 1.50 && peso > 90)
			qtdPeso90Altura1_50++;
	}
	
	mdIdades /= 10;
	percentIdade10a30 = totalIdade10e30 / totalPessoas1_90 * 100.0;
	
	printf("\nA media das idades -> %.2f\n", mdIdades);
	printf("A quantidade de pessoas com peso maior que 90 quilos e altura inferior a 1,50 -> %d\n", qtdPeso90Altura1_50);
	printf("Percentagem de pessoas com idade entre 10 e 30 anos entre as pessoas com altura maior que 1,90 -> %.2f",percentIdade10a30);
	
	return 0;
}