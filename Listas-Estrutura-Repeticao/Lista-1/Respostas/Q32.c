#include <stdio.h>

int main()
{
	int numero, qtdInferiorA35 = 0, qtdInferiorA50 = 0, qtdInferior10a20 = 0,
		qtdNumerosPositivos = 0, qtdNumerosDigitados = 0, qtdNumeros50a100 = 0;

	float mdNumerosPositivos = 0, percentNumeros50a100, percentNumeros10a20;
	printf("Digite 0 para sair!!!\n");

	while (1)
	{
		printf("Informe um numero: ");
		scanf(" %d", &numero);

		if (numero == 0)
		{
			puts("Finalizando...");
			break;
		}

		qtdNumerosDigitados++;
		
		if (numero < 50)
		{
			qtdInferiorA50++;

			if (numero < 35)
			 	qtdInferiorA35++;
		
			if (numero > 10 && numero < 20)
			 	qtdInferior10a20++;
		}

		if (numero > 50 && numero < 100)
			qtdNumeros50a100++;

		if (numero > 0)
		{
			qtdNumerosPositivos++;
			mdNumerosPositivos += numero;
		}
	}

	mdNumerosPositivos /= qtdNumerosPositivos;
	percentNumeros50a100 = (float) qtdNumeros50a100 / qtdNumerosDigitados * 100.0;
	percentNumeros10a20 = (float) qtdInferior10a20 / qtdInferiorA50 * 100.0;

	printf("Quantidade de numeros inferiores a 35: %d\n", qtdInferiorA35);
	printf("Media numeros positivos: %.2f\n", mdNumerosPositivos);
	printf("Percentagem numeros 50 a 100: %.2f\n", percentNumeros50a100);
	printf("Percentagem numeros 10 a 20 entre os numeros menores que 50: %.2f\n", percentNumeros10a20);

	return 0;
}

