#include <stdio.h>
#define TAM 5

int main()
{
	int vetor[TAM], qtdSuperior20 = 0, qtdNegativos = 0, i;

	for (i = 0; i < TAM; i++)
	{
		printf("Informe um valor inteiro: ");
		scanf(" %d", &vetor[i]);

		if (vetor[i] > 20)
		{
			printf("Valor superior a 20 -> %d, posicao %d\n", vetor[i], i);
			qtdSuperior20++;
		}
		else if (vetor[i] < 0)
			qtdNegativos++;
	}

	printf("Quantidade de valores acima de 20: %d\n", qtdSuperior20);
	printf("Quantidade de vamores negativos: %d", qtdNegativos);

	return 0;
}