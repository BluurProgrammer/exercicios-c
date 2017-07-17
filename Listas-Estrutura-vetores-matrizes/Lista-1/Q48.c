#include <stdio.h>
#include <string.h>
#define TAM 5

int main()
{
	int vetor[TAM], i, maiorValor, posicaoMaiorValor, qtdImpares = 0;
	memset(&vetor, 0, sizeof(vetor));

	maiorValor = vetor[0];
	posicaoMaiorValor = 0;

	for (i = 0; i < TAM; i++)
	{
		printf("Informe um valor: ");
		scanf("%d", &vetor[i]);
	
		if (vetor[i] > maiorValor)
		{
			maiorValor = vetor[i];
			posicaoMaiorValor = i;
		}

		if (vetor[i] % 2 != 0)
			qtdImpares++;
	}

	printf("O maior valor do vetor: %d sua posicao: %d\n", maiorValor, posicaoMaiorValor);
	printf("Quantidade de impares: %d", qtdImpares);

	return 0;
}