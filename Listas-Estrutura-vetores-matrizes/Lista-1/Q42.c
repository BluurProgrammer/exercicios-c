#include <stdio.h>
#define TAM 6

int main()
{
	int numeros[TAM], i, menorNumero, menorNumeroPosicao, somaPares = 0;
	
	for (i = 0; i < TAM; i++)
	{
		printf("Informe um valor: ");
		scanf(" %d", &numeros[i]);

		if (i == 0)
		{
			menorNumero = numeros[i];
			menorNumeroPosicao = 0;
		}
		
		if (numeros[i] % 2 == 0)
			somaPares += numeros[i];

		if (numeros[i] < menorNumero)
		{
			menorNumero = numeros[i];
			menorNumeroPosicao = i;
		}
	}

	printf("Soma dos numeros pares: %d\n", somaPares);
	printf("Menor numero %d, sua posicao %d", menorNumero, menorNumeroPosicao);
	
	return 0;
}