#include <stdio.h>
#define TAM 5

int main()
{
	int vetor[TAM];
	int i, qtdPares = 0;

	for (i = 0; i < TAM; i++)
	{
		printf("Informe um valor: ");
		scanf("%d", &vetor[i]);
		
		if (vetor[i] % 2 == 0)
			qtdPares++;
	}

	printf("Quantidade de pares: %d", qtdPares);

	return 0;
}