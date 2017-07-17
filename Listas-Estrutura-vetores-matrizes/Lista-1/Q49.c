#include <stdio.h>
#define TAM 5

int main()
{
	int vetor[TAM], i, achou = 0, buscar, posicaoBuscar;
	
	for (i = 0; i < TAM; i++)
	{
		printf("Informe um valor: ");
		scanf("%d", &vetor[i]);
	}

	printf("Informe um valor para buscar: ");
	scanf("%d", &buscar);

	for (i = 0; i < TAM; i++)
	{
		if (vetor[i] == buscar)
		{
			achou = 1;
			posicaoBuscar = i;
			break;
		}
	}

	if (achou)
		printf("O valor informado %d foi encontrado na posicao %d", buscar, posicaoBuscar);
	else
		printf("Nao foi possivel localizar o valor informado.");

	return 0;
}